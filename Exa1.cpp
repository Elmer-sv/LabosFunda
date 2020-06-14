#include "iostream"

using namespace std;

float salarios(int hn, int he); // Declaración de funciones 
float salarios1(int hn1, int he1);
float salarios2(int hn2, int he2);

int main(){
    int h,hx,n;
    float sr;
    cout<< "Bienvenido"<< endl;
    cout<< "Ingrese la cantidad de empleados"<< endl;
    cin>> n;
    for(int m=1;m<=n;m++){  // Utilización de for para repetir proceso según el numero de empleados 
    cout<< "Ingrese las horas que han trabajado cada empleado"<<endl;
    cin>> h;
    cout<< "Ingrese las horas extras que han trabajado cada empleado"<<endl;    
    cin>> hx;

    if(salarios(h,hx)< 500){
        sr= salarios1(h,hx);
    }
    else if (salarios(h,hx)>=500){
        sr= salarios2(h,hx);
    }
    cout<<"El salario total es : "<<salarios(h,hx)<<endl;
    cout<<"El salario real es :"<<sr<<endl;
    }

}

float salarios(int a, int b){ // Primera función
    float salario;
    salario= (a*1.75)+(b*2.50);
    return salario;

 
}

float salarios1(int c, int d){ // Segunda función
   float t,f;
    t=(salarios(c,d)*0.04)+(salarios(c,d)*0.0625);
    f=salarios(c,d)-t;
    return f;


}

float salarios2(int e, int f){ // Tercera función
    float s,r;
    s=((salarios(e,f)*0.04)+(salarios(e,f)*0.0625)+(salarios(e,f)*0.10));
    r=salarios(e,f)-s;
    return r;
}

