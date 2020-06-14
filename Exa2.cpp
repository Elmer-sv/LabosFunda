#include "iostream"
#include "string"
#include "conio.h"

using namespace std;

int ejer2(int n); //Declaración de función

int main()
{
    int n,f;
    cout<< "Bienvenido a : El numero magico, ingrese un numero para saber si es el numero magico, el numero que ingrese debe ser mayor que 0 y menor que 100"<< endl;
    cin>>n;
    if(n>100 || n<0){
        cout<< "Ingrese un valor valido "<<endl;
    }
    else if(n==50){
     cout<<"Felicidades, encontro el numero "<<endl;
    }
    else if(n==0){
     cout<<"Finalizo el programa"<<endl;
    }
    else if(n==ejer2(n)){
    cout<< ejer2(n);
    }

    return 0;

}

int ejer2(int n) // Función a utilizar
{
    int to=5;
    do{        // Para aplicar un bucle 
    if(n==50){
     cout<<"Felicidades, encontro el numero "<<endl;
    }
    else if(n==0){
     cout<<"Finalizo el programa"<<endl;
    } 
    else if(n<50){
     cout<<"El numero que ingreso es menor, quedan "<<to--<<" intentos"<<endl;
     cin>>n;
    }
        
    else if(n>50){
     cout<<"El numero que ingreso es mayor, quedan "<<to--<<" intentos"<<endl;
     cin>>n;
    }
    }while( n<50 || n>50); // Condiciones del bucle

    
    

} 




