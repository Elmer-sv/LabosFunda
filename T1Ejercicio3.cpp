#include "iostream"
#include "cmath"
#include "complex"

using namespace std;

int main(void){
    cout<< "Bienvenido"<< "\n";
    float a,b,c;

    cout<< "Ingrese el primer valor" << "\n";
    cin>> a;
    cout<< "Ingrese el segundo valor" << "\n";
    cin>> b;
    cout<< "Ingrese el tercer valor" << "\n";
    cin>> c; 

    float b2= b*b;
    float result1= (-b + sqrt(b2-(4*a*c)))/(2*a);
    float result2= (-b - sqrt(b2-(4*a*c)))/(2*a);

    cout<< "El resultado de la formula cuadratica es:"<< result1 << " "<< "y" << " " << result2;

    return 0; 


}