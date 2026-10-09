//#include <string>
#include <vector>

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

    void setID(int id0){
        id = id0;
    }
    void setOperador(vector<char> operador0){
        operador = operador0;
    }
};