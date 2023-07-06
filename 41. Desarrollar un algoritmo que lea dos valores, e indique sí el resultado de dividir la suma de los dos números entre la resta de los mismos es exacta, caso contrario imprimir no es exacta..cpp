//41. Desarrollar un algoritmo que lea dos valores, e indique sí el resultado de dividir la suma de los dos números entre la resta de los mismos es exacta, caso contrario imprimir no es exacta.//

#include<iostream>
using namespace std;

void proc(int x){
int a,b;
cout<< "\n Ingrese dos numeros enteros: \n \n";
cin>> a >> b;
x = (a + b) % (a - b);
if(x == 0){
cout<< "\n \"ES EXACTA\" \n \n";
}
else{
cout<< "\n \"NO ES EXACTA\" \n \n";
}
}
int main(){
float div;
proc(div);
return 0;
}
