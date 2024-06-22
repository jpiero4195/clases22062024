/*Author: Jean Valencia
fecha: 202-06-22
Tema: Funciones y Areglos
*/

//Diseñe el progrmaa que lea las edades de 7 estudiantes, y a continuación clacule el promedio de las mismas.
//Utilice areglos y funciones
#include <iostream>
using namespace std;

void LeerEdades(int edades[],int total){
    for(int k=0;k<total;k++){
        cout<<"Ingrese la edad del estudiante "<<k+1<<": ";
        cin>>edades[k];
    }
}

//Imprime el vector de edades
void ImprimirEdades(int edades[],int total){
    cout<<endl<<"Listados de edades ingresadas"<<endl;
    for (int k=0;k<total;k++){
        cout<<edades[k]<<" ";
    }
}

double PromedioEdades(int edades[],int total){
    double suma=0;
    for(int k=0;k<total;k++){
        suma+=edades[k];
    }
    return suma/total;
}

int main(){
    const int max=3;
    int edades[max];
    LeerEdades(edades,max);
    ImprimirEdades(edades,max);
    double prom=PromedioEdades(edades,max);
    cout<<endl<<"El promedio de las edades es: "<<prom<<endl;
    return 0;
}