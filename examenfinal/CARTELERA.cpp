//Librerias
#include<conio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include <string.h>

using namespace std;

int menu(void)
{


    cout<<"\n***********************CARTELERA********************";
    cout<<"\n1. JUJUTSU NO KAISE 0";
    cout<<"\n2. ANNA BELL";
    cout<<"\n3. TOY STORY 3";
    cout<<"\n4. DOGS ";
    cout<<"\n. SALIR:";
    cout<<"\n";
    cout<<"\nINGRESE SU OPCION: ";


}

int main()
{
    int opcion, opc2, opc3, opc4, i = 0, a = 0, max=3;
    string Nombre_cliente[50], apellido[50];
    float ASIENTOS[50], PERSONAS[50];

do{
menu();
cin>>opcion;


switch(opcion)
{
    case 1:
    i++;
    cout<<"\nINGRESE EL NOMBRE DEL NUEVO CLIENTE: " ;
    cin>>Nombre_cliente[i];
    cout<<"\nINGRESE EL APELLIDO DEL NUEVO CLIENTE: " ;
    cin>>apellido[i];
    cout<<"INGRESE EL No. DE  ASIENTOS: ";
    cin>>ASIENTOS[i];
    cout<<"INGRESE EL NUMERO DE PERSONAS";
    cin>>PERSONAS[i];
    cout<<"\nINGRESE 1 PARA VOLVER AL MENU Y O PARA SALLIR: " ;
    cin>>opc2;
    break;

    case 2:
        for (i=1; i<max; i++)
        {
            cout<<"\nNOMBRE DEL CLIENTE: " <<Nombre_cliente[i]<<endl;
            cout<<"\nAPELLIDO DEL CLIENTE: " <<apellido[i]<<endl;
            cout<<setprecision(0)<<fixed<<"NUMERO DE ASIENTOS: " <<ASIENTOS[i]<<endl;
            cout<<setprecision(0)<<fixed<<"NUMERO DE PERSONAS: " <<PERSONAS[i]<<endl;

        }

    cout<< "\INGRESE 1 PARA VOLVER AL MENU Y O PARA SALIR: ";
    cin>>opc2;
    break;

    case 3:
        return 0;
default: cout << "Ha elegido una opcion invalida.";
	cout<<"\nIngrese 1 para volver al menu y 0 para salir: ";
	cin>>opc2;
}
}while(opc2 == 1);

}






