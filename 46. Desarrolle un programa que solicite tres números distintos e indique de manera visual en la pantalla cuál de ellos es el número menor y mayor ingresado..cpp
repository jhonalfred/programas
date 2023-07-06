//46. Desarrolle un programa que solicite tres números distintos e indique de manera visual en la pantalla cuál de ellos es el número menor y mayor ingresado.//

#include<iostream>
using namespace std;

void proc(double x){
double y,z;
cout<< "\n Ingrese 3 numeros diferentes: \n \n";
cin>> x >> y >> z;
if(x < y){
if(x < z){
cout<< "\n El numero menor es: " << x << "\n \n" ;
}
}
else if(y < x){
if(y < z){
cout<< "\n El numero menor es: " << y << "\n \n" ;
}
else{
cout<< "\n El numero menor es: " << z << "\n \n" ;
}
}
}
int main(){
double x;
proc(x);
return 0;
}
