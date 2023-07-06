//49. Cree un programa que calcule el m�ximo com�n divisor de dos n�meros usando el algoritmo de Euclides : Dado dos n�meros enteros positivos m y n, tal que m >n, para encontrar su m�ximo com�n divisor, el mayor entero positivo que divide a ambos: - Dividir m por n para obtener el resto r (0 = r <n) ; - Si r = 0, el MCD es n.; - Si no, el m�ximo com�n divisor es MCD(n,r).//

#include<stdio.h>
#include<math.h>

int MCD (int num1, int num2){
int c, D, d, r;
if (num1 > num2){
D = num1;
d = num2;
}
else{
D = num2;
d = num1;
}
c = D/d;
r = D % d;
while(r != 0){
D = d;
d = r;
c = D/d;
r = D % d;
}
return d;
}
void proc(int a){
int x,y,b = 1;
printf("\n Cuantos MCD quieres encontar: \n \n");
scanf("%d",&a);
while(b <= a){
printf("\n Ingrese numeros al %d MCD: \n \n",b);
printf("\n Escriba dos numeros enteros: \n \n");
scanf("%d %d", &x, &y);
if ((x == 0) || (y == 0)){
printf("\n El cero no es factor de ningun numero \n \n");
continue;
}
printf("\n MCD(%d , %d) = %d \n \n",x,y, MCD(x,y));
b++;
}
}
int main(){
int a;
proc(a);
return 0;
}
