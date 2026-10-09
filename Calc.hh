//#include <string>
#include <vector>

using namespace std;

class calc
{
protected:
    vector<char> operador;
    int id;
    bool valid;
    bool isOp;
public:
    calc(){
        id = 0;
        valid = false;
        isOp = false;
    }
    calc(int id1, vector<char> entrada1){
        id = id1;
        operador = entrada1;
        valid = false;
        isOp = false;
    }

    int getId(){
        return id;
    }
    vector<char> getOp(){
        return operador;
    }
    bool getOPValid(){
        return isOp;
    }

    void setID(int id0){
        id = id0;
    }
    void setOperador(vector<char> operador0){
        operador = operador0;
    }

    void validation(){
        valid = true;
        isOp = false;
    }
    void validOp(){
        valid = true;
        isOp = true;
    }
};