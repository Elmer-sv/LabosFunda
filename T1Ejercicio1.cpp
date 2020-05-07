#include "iostream"
#include "string"

using namespace std;

int main(){
cout<< "Hola!, ingresa 3 numeros para poder sacar su promedio"<<"\n";
    float num1,num2,num3;
    
    cout<< "Por favor ingrese el primer valor:"<<"\n";
    cin>> num1;
    cout<< "Por favor ingrese el segundo valor:"<<"\n";
    cin>> num2;
    cout<< "Por favro ingrese el tercer valor:"<<"\n";
    cin>> num3;

    float promedio=(num1+num2+num3)/3;
    cout<< "El resultado es:" << promedio;
    
    return 0;

}