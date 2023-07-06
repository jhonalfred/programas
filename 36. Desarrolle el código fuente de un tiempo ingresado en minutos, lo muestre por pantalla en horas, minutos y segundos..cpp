//36. Desarrolle el código fuente de un tiempo ingresado en minutos, lo muestre por pantalla en horas, minutos y segundos.//

#include<stdio.h>
#define hora 60
#define segundo 60

float horas(float t){
float h;
h = t / hora;
return h;
}
float seg(float t){
float m;
m = t * segundo;
return m;
}
int main(){
float t;
printf("\n Ingrese un tiempo en segundos: \n \n");
scanf("%f",&t);
printf("\n El tiempo ingresado, en horas es: %.2f \n \n",horas(t));
printf("\n El tiempo ingresado, en minutos es: %.2f \n \n",t);
printf("\n El tiempo ingresado, en segundos es: %.2f \n \n",seg(t));
return 0;
}
