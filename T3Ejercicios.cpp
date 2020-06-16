#include "iostream"
#include "string"

using namespace std;

int ejer1(int n, int n1);
string ejer2(int n2, int n3, int n4);
int ejer3(int n5) ;
int ejer31(int n6);
int ejer32(int n7);
int ejer33(int n8);
string ejer4(int dd, int mm, int aa);

int main(void){
    int n;
    string t;

    cout<< "Bienvenido, de la lista de ejercicios que se le presenta a continuación seleccione un literal para su ejecución"<<endl;
    cout<< "1) Ejercicio 1"<<endl;
    cout<< "2) Ejercicio 2"<<endl;
    cout<< "3) Ejercicio 3"<<endl;
    cout<< "4) Ejercicio 4"<<endl;
    cin>> n;

    switch (n)
    {
        case 1:
        int n1,n2;
        cout<< "Bienvenido, ingrese los valores que se le pidan a continuacion"<<endl;
        cout<< "Ingrese el numero mayor"<<endl;
        cin>> n1;
        cout<< "Ingrese el numero menor"<<endl;
        cin>> n2;

        cout<< "EL mcd de ambos numeros es: ";
        cout<<  ejer1(n1,n2);

        
        break;

        case 2:
        int h,m,s;
        cout<<"Bienvenido, ingrese los datos que se le pidan a continuacion para poder calcular la hora 1 segundo despues"<<endl;
        cout<< "Ingrese la hora deseada"<<endl;
        cin>>h;
        cout<< "Ingrese el minuto deseado"<<endl;
        cin>>m;
        cout<<"Ingrese el segundo deseado"<<endl;
        cin>>s;
        cout<< ejer2(h,m,s);

        break;

        case 3:
        int n;
        
        cout<< "Bienvenido, ingrese el año que desee para conocer si es bisiesto o no "<<endl;
        cin>> n;
        t= ejer3(n)==0 || ejer31(n)==0 && ejer32(n)!=0 ? "Bisiesto" : "No bisiesto";
        cout<< "El año que ingreso es: "<<t<<endl;

        break;

        case 4:
            int dd,mm,aa;
            cout<<"Bienvenido, ingrese los datos que se le pidan a continuacion para saber la fecha de un dia despues"<<endl;
            cout<<"Ingrese el dia"<<endl;
            cin>> dd;
            cout<< "Ingrese el mes "<<endl;
            cin>> mm;
            cout<< "Ingrese el año"<<endl;
            cin>> aa;
            cout<< ejer4(dd,mm,aa);

        break;




    }

    return 0;
 



}

int ejer1(int n1, int n2){
    int resp;

    do 
    {
        resp=n1%n2;
        if(resp!=0)
        {
            n1=n2;
            n2=resp;

        }
    }
    while (resp!=0);

    return n2;

    
}

string ejer2(int hrs, int mins, int seg){
    int f;

    if(hrs<=23 && mins<=59 && seg<=59 )
    {
        seg++;
        if(seg==60)
        {
            seg=0;
            mins++;
            if(mins==60)
            {
                mins=0;
                hrs++;
                if(hrs==24)
                {
                    hrs=0;
                }
                

            }
        }
        
        cout<<"La hora es "<< hrs << ":"<< mins << ":"<<seg<<endl;
    }
    else if(hrs<0 || hrs >=24 || mins<0 || mins>=60 || seg<0 || seg>=60){
        cout<< "Los datos que ingreso son erroneos"<<endl;
    }

     

    
}

int ejer3(int a)
{
    int b;
    b=a%400;

    return b;

}

int ejer31(int c)
{
    int d;
    d=c%4;

    return d;

}

int ejer32(int e)
{
    int f;
    f=e%100;

    return f;

}

string ejer4(int d, int m, int a)
{
    int f=a%400, h=a%4, c=a%100;
    int anb[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int ab[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    if(a== f!=0 || h!=0 && c==0){
        d++;
        if(d>anb[m-1]){
            d=1;
            m++;
            if(m>12){
                m=1;
                a++;
            }
        }

        cout<<"La fecha es: "<<d<<"/"<<m<<"/"<<a<<endl;

    }

    else if(a== f==0 || h==0 && c!=0){
        d++;
        if(d>ab[m-1]){
            d=1;
            m++;
            if(m>12){
                m=1;
                a++;
            }
        }

        cout<<"La fecha es: "<<d<<"/"<<m<<"/"<<a<<endl;
    }

  
}
