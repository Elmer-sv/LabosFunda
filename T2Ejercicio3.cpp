#include "iostream"
#include "string"
#include "cmath"

using namespace std;

int main(void){
    int n;
    cout<< "Bienvenido" << endl;

    cout<< "Ingrese el valor " << endl;
    cin>> n;

    if (n<0){

        cout<< "El numero es negativo "<< endl;

    }

    else if (n>0)
    {
        cout<< "El numero es positivo"<< endl;

    }

    else if (n==0)
    {
        cout<< "El numero es 0"<< endl;

    }
    
    return 0;

}