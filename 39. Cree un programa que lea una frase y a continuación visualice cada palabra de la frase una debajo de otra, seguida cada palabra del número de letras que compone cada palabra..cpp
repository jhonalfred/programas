//39. Cree un programa que lea una frase y a continuación visualice cada palabra de la frase una debajo de otra, seguida cada palabra del número de letras que compone cada palabra.//

#include <string.h>
#include<stdio.h>
#include<conio.h>

void cont(int y,char x[][50]){
printf("\n Ingrese la frase: \n \n");
for(int i = 0;i < y;i++){
scanf("%s",&x[i]);
}
for(int i = 0;i < y;i++){
int lon;
char *palabra = NULL;
palabra = strtok(x[i]," ");
while(palabra != NULL){
lon = strlen(palabra);
printf("\n %s: tiene %d caracteres.", palabra, lon);
palabra = strtok(NULL," ");
}
}
}
int main(){
char cad[50][50];
int y;
printf("\n Cuantas palabras tiene la frase: \n \n");
scanf("%d",&y);
cont(y,cad);
getch();
}
