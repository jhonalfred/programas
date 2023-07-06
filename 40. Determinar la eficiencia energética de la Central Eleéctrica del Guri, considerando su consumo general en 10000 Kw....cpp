//40. Determinar la eficiencia energética de la Central Eleéctrica del Guri, considerando su consumo general en 10000 Kw. Si su consumo ingresado esta entre el 80% y 100% kw muestre ”CONSUMO MEDIO”, caso contrario sea superior al 100% muestre ”ALTO CONSUMO DE ENERGIA”.//

#include<iostream>
#define kwtotal 10000
using namespace std;

void consumo(float cons){
cout<< "\n Ingrese su consumo: \n \n";
cin>> cons;
float a;
a = (cons / kwtotal) * 100;
if(a >= 80 && a <= 100){
cout<< "\n \"CONSUMO MEDIO\" \n \n";
}
else if(a > 100){
cout<< "\n \"ALTO VOLTAJE\" \n \n";
}
}
int main(){
float cons;
consumo(cons);
return 0;
}
