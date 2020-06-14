#include "iostream"

using namespace std;

int prueba(int a); // Declaración de funciones a utilizar
int prueba2(int a1);
int prueba3(int a2);

int main(){
    int n;
    cout<< "Bienvenido, ingrese el año que desee para conocer si es bisiesto o no "<<endl;
    cin>> n;
    if (prueba(n)==0 || prueba2(n)==0 && prueba3!=0){
        cout<< "El año que ingreso es bisiesto"<<endl;
    }
    else
    {
        cout<<"El año que ingreso no es bisiesto"<<endl;
    }
    
}

int prueba(int e){ // Primera función 
    int f;
    f=e%400;

    return f;

}

int prueba2(int g){ // Segunda función
    int l;
    l=g%4;

    return l;
}

int prueba3(int h){// Tercera función
    int u;
    u=h%100;

    return u;
}