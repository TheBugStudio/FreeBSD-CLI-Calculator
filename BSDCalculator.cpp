#include <string>
#include <vector>
#include <iostream>
#include </home/josedavid/new_newCpp/FreeBSDCalculator/FreeBSD-CLI-Calculator-main/Calc.hh>

using namespace std;

int main()
{
    vector<char> entrada;
    vector<char> operatorr;
    vector<calc> segmentos;
    string SEntrada;

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
            segmentos[i].setOperador(operatorr);
            segmentos[i].setID(i++);
            operatorr.clear();
        }
    }

    return 0;
};
