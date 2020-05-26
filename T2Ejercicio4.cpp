#include "iostream"
#include "cmath"
#include "string"
#include "cstring"

using namespace std;

int main(void)
{
    char palabra[40];
    string l,p;

    cout<< "Ingrese la palabra que desee"<<endl;
    cin>> palabra;

    l= strlen(palabra)>10 ? "Es mayor que de 10" : "Es menor que 10";
    p= strlen(palabra)%2==0 ? "Es par" : "Es impar";

    cout<< "La palabra es " << l << " y " << p;

    return 0;

    


}