#include "iostream"
#include "string"
#include "cmath"

using namespace std;

int main(void){
    int n;
    
    cout<< "Bienvenido"<<endl;
    cout<< "Ingrese el valor de n" <<endl;
    cin>>n;


    if (n%2==0)
    {

        cout<< "El numero que ingreso es par"<< endl;

    }
    else
    {

        cout<< "El numero que ingreso es impar"<<endl;
    }

    return 0;


}