#include "iostream"
#include "string"

using namespace std;

int main(void){
        cout<< "Bienvenido" << "\n";
        float c1,p1;
        string pro1;
 
        cout<< " Por favor ingrese el nombre del producto " << "\n";
        cin>> pro1;
        cout<< "Por favor ingrese la caitdad de producto comprado" << "\n";
        cin>> c1;
        cout<< "Por ingrese el valor del producto" << "\n";
        cin>> p1;

        float total=c1*p1;

        cout<< "El dinero gastado es:" << total << " " << "dolares";

        return 0;  
}