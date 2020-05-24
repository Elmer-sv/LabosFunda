#include "iostream"
#include "cmath"
#include "string"
#include "cstring"

using namespace std;

int main (void)
{
    char f,palabra[40];

    cout<< "Ingrese la palabra que desee" << endl;
    cin>> palabra;

    f=strlen(palabra);
    

    if (palabra[0]==palabra[f-1])
    {
        cout<< "La palabra inicia y finaliza con la misma letra" << endl;

    }
    else 
    {

        cout<< "La palabra no inicia y finaliza con la misma letra ";

    }

    return 0;
}