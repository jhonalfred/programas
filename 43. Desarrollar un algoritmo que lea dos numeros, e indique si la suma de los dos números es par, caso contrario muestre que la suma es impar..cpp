//43. Desarrollar un algoritmo que lea dos numeros, e indique si la suma de los dos números es par, caso contrario muestre que la suma es impar.//

#include<iostream>
using namespace std;

int div(int a){
int x,y;
cout<< "\n Ingrese dos numeros enteros: \n \n";
cin>> x >> y;
a = x + y;
return a;
}
void proc(int a){
if(div(a) % 2 == 0){
cout<< "\n \"ES PAR\" \n \n";
}
else{
cout<< "\n \"SUMA ES IMPAR\" \n \n";
}
}
int main(){
int a;
proc(a);
return 0;
}
