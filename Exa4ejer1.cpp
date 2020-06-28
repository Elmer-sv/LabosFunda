#include "iostream"

using namespace std;

void ejer1(char h[100]);

int main(){
    char n[100];
    cout<<"Ingrese la palabra que desea codificar"<<endl;
    cin.getline(n,100);
    ejer1(n);
    cout<< "La palabra codifica es: "<<n;

}

void ejer1(char f[100]){
    int i;
    for(i=0;i<100;i++){
        switch(f[i]){
            case 'm':
            f[i]=48;
            break;

            case 'u':
            f[i]=49;
            break;

            case 'r':
            f[i]=50;
            break;

            case 'c':
            f[i]=51;
            break;

            case 'i':
            f[i]=52;
            break;

            case 'e':
            f[i]=53;
            break;

            case 'l':
            f[i]=54;
            break;

            case 'a':
            f[i]=55;
            break;

            case 'g':
            f[i]=56;
            break;

            case 'o':
            f[i]=57;
            break;

            
        }
    }


}