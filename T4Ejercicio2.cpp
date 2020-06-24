#include "iostream"

using namespace std;

int comparacion(int ar[100],int n,int num);

int main(){
    int ar[100];
    int num;
    int n;

    cout<<"Bienvenido"<<endl;
    cout<< "Ingrese el numero de elementos que constituiran el arreglo"<<endl;
    cin>> n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese los numeros que contituiran el arreglo"<<endl;
        cin>>ar[i];
    }
    cout<<"Ingrese el numero que desea comparar"<<endl;
    cin>>num;
    cout<<"El numero de veces que se repite el numero que ingreso dentro del arreglo es "<<comparacion(ar,n,num)<<endl;

}

int comparacion(int ar[100],int n, int num){
    int ocu=0;
    for(int t=0;t<n;t++){
    if(ar[t]==num){
    ocu++;
    }
    }

    return ocu;
}