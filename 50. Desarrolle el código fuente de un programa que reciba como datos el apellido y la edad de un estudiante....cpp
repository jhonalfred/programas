//50. Desarrolle el código fuente de un programa que reciba como datos el apellido y la edad de un estudiante. Si la edad del estudiante es mayor a 18 y menor a 25 debe mostrar como mensaje ”ESTUDIANTE BECADO”, en caso contrario debe mostrar ”ESTUDIANTE SIN BECA”.

#include<iostream>
#include<conio.h>
using namespace std;

void proc(float e){
char ap[50];
cout<<"\n Ingrese el apellido: \n \n";
cin>>ap;
cout<<"\n Ingrese la edad: \n \n";
cin>>e;
if (e > 18 && e < 25){
cout<<"\n \"ESTUDIANTE BECADO\" \n \n";
getch ();
}
else {
cout<<"\n \"ESTUDIANTE SIN BECA\" \n \n";
getch ();
}
}
int main(){
float e;
proc(e);
return 0;
}
