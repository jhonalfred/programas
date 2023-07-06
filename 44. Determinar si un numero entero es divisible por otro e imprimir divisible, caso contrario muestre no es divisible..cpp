//44. Determinar si un numero entero es divisible por otro e imprimir divisible, caso contrario muestre no es divisible.//

#include<iostream>
using namespace std;

int div(int b){
int x,y;
cout<< "\n Ingrese un numero a dividendo: \n \n";
cin>> x;
cout<< "\n Ingrese un numero a divisor: \n \n";
cin>> y;
b = x % y;
return b;
}
void proc(int b){
if(div(b) == 0){
cout<< "\n \"DIVISIBLE\" \n \n";
}
else{
cout<< "\n \"NO ES DIVISIBLE\" \n \n";
}
}
int main(){
int b;
proc (b);
return 0;
}
