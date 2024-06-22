//Author: Jean Valencia
//fecha: 202-06-22

#include<iostream>
#include<math.h>
using namespace std;

/// @brief Calcula los valores de ecuación cuadrática
/// @param a Coeficiente de x^2
/// @param b Coeficiente de x
/// @param c Coeficiente constante
/// @param x1 referencia para devolver el primer valor de la ecuación
/// @param x2 referencia para devolver el segudna valor de la ecuación
/// @return Devuelve 'Correcto' si la ecuación tiene solución. Devuelve 'Divición por cero' si 'a' es cero


string EcuacionCuadratica(double a, double b, double c, double& x1, double& x2){
    if(a==0)
        return "Error: División por cero";
    return "Correcto";
}

main (){
    double x1, x2;
    string res=EcuacionCuadratica(1,4,4,x1,x2);
    if(res=="Correcto")
        cout<<endl<<"x1 = "<<x1<<", x2 = "<<x2;
    else
        cout<<endl<<res;
    return 0;
}