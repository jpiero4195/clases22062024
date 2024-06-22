//Author: Jean Valencia
//fecha: 202-06-22

/*
2) Una función recibe como parámetro un entero que indica las filas de una figura. Adicionalmente, 
recibe como parámetro un string que indica el relleno de la figura a dibujar. Por ejemplo, 
si filas es 4 y el relleno es '+', la figura sería:
+
++
+++
++++
*/

#include<iostream>
using namespace std;

void DibujarFigura(int filas, string relleno){
    cout<<endl;
    for(int k=0;k<=filas;k++){
        for (int j=0;j<=k;j++){
            cout <<relleno<<" ";
        }
        cout<<endl;
    }
}

main(){
    DibujarFigura(5, "+");cout<<endl;
    DibujarFigura(3, "♦");cout<<endl;
    return 0;
}