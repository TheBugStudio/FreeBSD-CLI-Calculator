#include <string>
#include <vector>
#include <iostream>
#include <cctype>
#include </home/josedavid/new_newCpp/FreeBSDCalculator/FreeBSD-CLI-Calculator/Calc.hh>

using namespace std;

int main()
{
    vector<char> entrada;
    vector<char> operatorr;
    vector<calc> segmentos;
    string SEntrada;
    short e = 0;
    short r = 0;
    int result;
    
    cout << "Ingrese op: \n";
    getline(cin, SEntrada);

    for(short i = 0; i < SEntrada.size(); i++){
        entrada.push_back(SEntrada[i]);
    }
    
    for (short i = 0; i < entrada.size(); i++) {
        if(entrada[i] != ' '){
            operatorr.push_back(entrada[i]);
        }
        else {
            segmentos.push_back(calc(e++,operatorr));
            operatorr.clear();
        }
    }

    for(short i = 0; i < segmentos.size(); i++){
        if(segmentos[i].getOp()[i] == '+' || segmentos[i].getOp()[i] == '-' && segmentos[i].getOp().size() == 1){
            segmentos[i].validOp();
        }
        else if(isdigit(segmentos[i].getOp()[i] && segmentos[i].getOPValid() != true)){
            segmentos[i].validation();
        }
        else if(!(isdigit(segmentos[i].getOp()[i])) && segmentos[i].getOp().size() > 1){
            segmentos[i].invalidation();
        }
    }

    for (short i = 0, e=0; i < segmentos.size(); i+=3) {
        if(segmentos[i].getOPValid() == false && segmentos[i + 1].getOPValid() == true && segmentos[i + 2].getOPValid() == false){
            //std::string texto(digitos.begin(), digitos.end());
            string no1 (segmentos[i].getOp().begin(), segmentos[i].getOp().end());
            string no2 (segmentos[i+2].getOp().begin(), segmentos[i].getOp().end());

            int ino1 = stoi(no1);
            int ino2 = stoi(no2);

            if(segmentos[i+1].getOp()[i] == '+'){result = ino1 + ino2;}
            else if(segmentos[i+1].getOp()[i] == '-'){result = ino1 - ino2;}
        }
    }

    cout << " = " << result << endl;
    return 0;
};
