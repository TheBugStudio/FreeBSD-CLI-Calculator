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
        else if(!(isdigit(segmentos[i].getOp()[i]))){
        
        }
    }

    return 0;
};
