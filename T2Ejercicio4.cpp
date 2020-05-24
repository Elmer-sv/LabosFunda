#include "iostream"
#include "cmath"
#include "string"
#include "cstring"

using namespace std;

int main(void)
{
    char palabra[40];

    cout<< "Ingrese la palabra que desee"<<endl;
    cin>> palabra;

    
    if (strlen(palabra)%2==0)
    {

        cout<< "El numero de caracteres es " << strlen(palabra) << " y el numero de caracteres es par";

    }

    else if (strlen(palabra)==strlen(palabra))
    {

        cout<< "El numero de caracteres es " << strlen(palabra) << " y el numero de caracteres es impar";

    }



    return 0;

    


}