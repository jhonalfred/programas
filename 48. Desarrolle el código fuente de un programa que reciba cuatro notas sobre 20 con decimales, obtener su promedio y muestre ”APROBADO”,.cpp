//48. Desarrolle el código fuente de un programa que reciba cuatro notas sobre 20 con decimales, obtener su promedio y muestre ”APROBADO”, si su promedio es mayor a 14.5; caso contrario su promedio sea menor a 14.5 y mayor a 10 muestre ”SUPLETORIO”. Si la nota promedio es menor a 10 muestre ”PERDIDO EL AÑO”.//

#include<stdio.h>

void promedio(float nota[]){
float prom,cont = 0;
for(int i = 0;i < 3;i++){
bool salida = false;
do{
printf("\n Ingrese %d%c calificacion (1-20): \n \n",i+1,(char)167);
scanf("%f",&nota[i]);
if(nota[i] <= 20){
salida = true;
cont = cont + nota[i];
}
else {
printf("\n \n Nota no valida \n Vuelva a ingresar nota \n \n");
}
}
while(!salida);
}
prom = cont / 3;
if(prom <= 20 && prom > 10){
if(prom > 10 && prom < 14.5){
printf("\n \n \"SUPLETORIO\" \n \n");
}
else if(prom <= 20 && prom > 14.5){
printf("\n \n \"APROBADO\" \n \n");
}
}
else if(prom < 10){
printf("\n \n \"PERDIDO EL A%cO\" \n \n",(char)165);
}
}
int main(){
float nota[4];
promedio(nota);
return 0;
}
