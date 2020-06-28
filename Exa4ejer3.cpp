#include "iostream"

using namespace std;

void matriz(int n);
void ejer3(float tabla[100][100],int n);

int main(){
    int n;
    float m1,m2,m3,m4,m5;

    cout<<"Bienvenido, ingrese la cantidad de estuidantes que desea "<< endl,
    cin>>n;
    matriz(n);


}

void matriz(int n){
    float tabla[100][100];
    for (int i=0;i<n;i++){
        for(int f=0;f<5;f++){
            cout<<"Digite las notas del estudiante "<<i+1<<endl;
            cin>> tabla[i][f];
        }
    }

    for(int i=0;i<n;i++){
        for(int f=0;f<5;f++){
            cout<< tabla[i][f];
        }
        cout<<endl;

    }
    
}

void ejer3(float tabla[100][100],int n){
    float nt,nf;
    for (int i=0;i<n;i++){
        for(int f=0;f<5;f++){
            nt=f*0.20;
            cout<<"La nota final de cada estudiante es: "<<nt<<endl;
        }
    }



}