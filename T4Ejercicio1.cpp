#include "iostream"

using namespace std;

void  cadena(int nu1[]);

int main(void){
    int n []={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 51, 53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97,99,101, 103, 105, 107, 109, 111, 113, 115, 117, 119, 121, 123, 125, 127, 129, 131, 133, 135, 137, 139, 141, 143, 145, 147, 149, 151, 153, 155, 157, 159, 161, 163, 165, 167, 169, 171, 173, 175, 177, 179, 181, 183, 185, 187, 189, 191, 193, 195, 197, 199};

    cout<< "Bienvenido, este programa mostrara de forma descendete los primeros 100 numeros enteros primos"<<endl;
    
    cadena(n);
    
    return 0;
}

void  cadena(int nu1[]){
    for(int i=99;i>=0;i--){
        cout<< nu1[i]<<endl;
    }

}
