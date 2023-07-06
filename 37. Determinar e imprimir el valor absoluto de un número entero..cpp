//37. Determinar e imprimir el valor absoluto de un número entero.//

#include<iostream>
using namespace std;

void absoluto(int z){
int ab;
cout<< "\n Ingrese un numero: \n \n";
cin>> z;
if(z > 0){
cout<< "\n El valor absoluto de " << z << " es: " << z << " \n \n";
}
else if(z < 0){
cout<< "\n El valor absoluto de " << z << " es: " << z * -1 <<" \n \n";
}
}
int main(){
int z;
absoluto(z);
return 0;
}
