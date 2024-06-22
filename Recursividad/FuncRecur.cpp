/*Author: Jean Valencia
fecha: 202-06-22
Tema: Ejercicios con funciones recursivas
*/

#include<iostream>
using namespace std;
//Diseñe la función que recursiva que imprima los número del 1 al 20

void imprimirNumeros(int n){
    if(n<=20){
        cout<<n<<" ";
        imprimirNumeros(n+1);
    }    
}

//Diseñe la fncion recursiva que imprime los números de 1 a n, donde n es el límite de la serie

void Numerosn(int k,int n){
    if(k<=n){
        cout<<k<<" ";
        Numerosn(k+1,n);
    }    
}

//Diseñe la función recursiva que imprima una tabal de multiplicar desde 1 al 12

void tablamultiplicar(int k,int t,int tabla){
    if(k<=t){
        cout<<k<<" x "<<tabla<<" = "<<k*tabla<<endl;
        tablamultiplicar(k+1,t,tabla);
    }    
}

int main(){
    imprimirNumeros(1);cout<<endl;
    Numerosn(1,4);cout<<endl;
    tablamultiplicar(1,12,5);cout<<endl;
    tablamultiplicar(3,9,10);cout<<endl;
    return 0;
}