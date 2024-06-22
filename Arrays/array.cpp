/*Author: Jean Valencia
fecha: 202-06-22
Tema: Areglos
*/

#include<iostream>
using namespace std;


main(){
    int edades[]= {21,18,17,22,15}; //tamaño del vector : 5
    cout<<endl<<"El valor de la posicion 4 es "<<edades[4];
    cout<<endl<<"El valor de la posicion 0 es "<<edades[0];
    cout<<endl<<"El valor de la posicion 4/2 es "<<edades[4/2]<<endl;

    //vector de cadenas de caracteres
    string cuidades[]={"Esmeraldas","Quito","Cuenca","Ambato","Portoviejo"};
    //imprimiendo todos los vectores del vector cuidades
    for(int k=0;k<5;k++){
        cout<<endl<<"La cuidad "<<k+1<<" es "<<cuidades[k];
    }

    //vector de doubles
    double temperatura[6];
    //lectura por teclado
    cout<<endl<<"[Ingrese los valores por teclado]"<<endl;
    for(int k=0;k<5;k++){
        cout<<"Ingrese la tempratura #"<<k+1<<": ";   
        cin>>temperatura[k];
    }
    //imprime el vector temperatura
    cout<<endl<<"[Lista de temperatura]"<<endl;
    cout<<"La temperatura ingresadas son: ";
    for(int k=0;k<5;k++){
        //cout<<"La temperatura #"<<k+1<<" es "<<temperatura[k]<<endl;
        cout<<temperatura[k]<<" ";
    }
}