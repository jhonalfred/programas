//47. Cree un programa que calcule la raíz cuadrada de un número. El usuario debe indicar el número y el índice de la raíz ( 3 para la raíz cubica). NOTA. Calcular que la raíz cubica de 2 es lo mismo que elevar 2 a 1/3.//

#include<iostream>
#include<cmath>
using namespace std;

void raiz(int x){
float y,z[2];
cout<< "\n Ingrese un numeros: \n \n";
cin>> x;
cout<< "\n Ingrese el indice de la raiz del numero ingresado: \n \n";
cin>> z[0];
z[1] = 1 / z[0];
y = pow(x,z[1]);
cout<< "\n " << x << "^1/" << z[0] << " es: " << y << endl << endl;
}
int main(){
int x;
raiz(x);
return 0;
}
