//45. A un trabajador eléctrico le pagan según sus horas trabajadas y la tarifa está a un valor determinado por hora. Si la cantidad de horas trabajadas es mayor a 40 horas, la tarifa por hora se incrementa en un 25% para las horas extras. Calcule el salario del trabajador dadas las horas trabajadas y la tarifa de horas extras.//

#include<iostream>
using namespace std;

float tarifa(float a,float tar){
a = (tar * 100 / 125);
return a;
}
void horas_trb(float a){
float h,tar,b[5];
cout<< "\n Ingrese horas trabajadas: \n \n";
cin>> h;
cout<< "\n Ingrese la tarifa de las horas extras trabajadas en dolares: \n \n $";
cin>> tar;
if(h > 40){
b[0] = h - 40;
b[1] = (40 * tarifa(a,tar)) + (b[0] * tar);
cout<< "\n Su salario es de $" << b[1] << endl << endl;
}
else{
b[1] = h * tarifa(a,tar);
cout<< "\n Su salario es de $" << b[1] << endl << endl;
}
}
int main(){
float a;
horas_trb(a);
return 0;
}
