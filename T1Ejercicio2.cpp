#include "iostream"

using namespace std;

int main(void){
    cout<< "Bienvenido" << "\n";
    float num1;
    cout<< "Ingrese el valor del radio"<< "\n";
    cin>> num1;

    float elevado= num1*num1;
    float area= 3.1416*elevado;
    float perimetro= 2*3.1416*num1;

    cout<< "El Area y Perimetro del circulo es:" << area << " " << "y" << " " << perimetro;

    return 0;

}