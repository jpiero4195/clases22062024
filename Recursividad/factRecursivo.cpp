/*Author: Jean Valencia
fecha: 202-06-22
Tema: Funciones recursivas - es la función que se llama asi mismo
- Deben de tenre un punto de salida
- Las funciones recursiva reemplaza a los bucles
5! -> siginifia que es factoria del número
*/
#include<iostream>
using namespace std;

//Factoria con bucle
int factorial(int num){
    if(num==0||num==1)
        return 1;
    int fac=1;
    for(int k=1;k<=num;k++)
        fac=fac * k;
    return fac;
}

//Cacula el factorial usando recursividad
int FactorialRecursivo(int num){
    if(num==0||num==1)
        return 1;
    return num*FactorialRecursivo(num-1);
}

int main(){
    cout<<"Factorial de 5 es "<<factorial(5)<<endl;
    cout<<"Factorial de 6 es "<<factorial(6)<<endl;
    cout<<"Factorial de 4 es "<<FactorialRecursivo(4)<<endl;
    cout<<"Factorial de 5 es "<<FactorialRecursivo(5)<<endl;
    return 0;
}