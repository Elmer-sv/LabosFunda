#include "iostream"

using namespace std;

float media(float p[25]);
void media1(float p[25],float media);
void media2(float p[25],float media);

int main(){
    float est[25],i,f;

    for(int i=0;i<25;i++){
        cout<<"Ingrese la estatura del estudiante "<<i+1<<endl;
        cin>> est[i];
    }

    f=media(est);

    cout<<"La media es: "<<media(est)<<endl;
    media1(est,f);
    media2(est,f);
}

float media(float f[25]){
    float suma=0.0,media;
    for(int i=0;i<25;i++ ){
        suma=suma+f[i];
    }
    media=suma/25;

    return media;
}

void media1(float p[25],float media){
    int mayor=0;
    
    for(int i=0;i<25;i++){
        if(p[i]>media){
            mayor ++;

        }
    }

    cout<<"Los numeros que sobrepasan la media son: "<<mayor<<endl;

}

void media2(float p[25],float media){
    int menor=0;
    
    for(int i=0;i<25;i++){
        if(p[i]<media){
            menor++;
        }
    }

    cout<<"Los numero que no sobrepasan la media son: "<<menor<<endl;
}
