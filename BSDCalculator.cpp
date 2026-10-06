#include <string>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

class calc
{
protected:
    vector<char> operador;
    int id;
public:
    calc(){
        id = 0;
    }
    calc(int id1, vector<char> entrada1){
        id = id1;
        operador = entrada1;
    }
    int getId(){
        return id;
    }
    vector<char> getOp(){
        return operador;
    }
};

int main()
{
    vector<char> entrada;
    vector<calc> segmentos;
    string SEntrada;

    cout << "Ingrese op: \n";
    getline(cin, SEntrada);

    for(short i = 0; i < SEntrada.size(); i++){
        entrada.push_back(SEntrada[i]);
    }
    
    for (short i = 0; condition; inc-expression) {
    
    }

    return 0;
};
