#include "iostream"
#include "string"
#include "cmath"

using namespace std;

int main(void){
    int n1,n2,resultado;
    cout<< "Bienvenido"<< endl;

    cout<< " Ingrese el primer numero" << endl;
    cin>> n1;
    cout<< " Ingrese el segundo numero" << endl;
    cin>> n2;

    resultado= n1%n2;

    if (resultado==(0)){

        cout<< "Son divisibles"<< endl;
    }
    else{

        cout<< " No son divisibles "<< endl;
    }
    return 0;



}