/*Author: Jean Valencia
fecha: 202-06-22
Tema: Ejercicios con funciones recursivas
*/

#include<iostream>
using namespace std;
//Convierte la sigueinte funcion en recursiva

int Contar(int num){
    int n=1,cont=0;
    while(n<=num){
        n=n*10;
        cont++;
    }
    return cont;
}

//cuenta cifras recursiva
int ContarRecursiva(int num){
    if(num<10)
        return 1;
    else
        return 1+ContarRecursiva(num/10);
}



int main(){
    cout<<ContarRecursiva(5684)<<endl;
    return 0;
}