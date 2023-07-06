//42. Cree un programa que reciba un año y determine si es año bisiesto o no.//

#include<iostream>
using namespace std;

int bisiesto(int a){
if(a % 4 == 0 and a % 100 != 0 or a % 400 == 0)
return 1;
else
return 0;
}
void proc(int x){
cout<< "\n Introducir a" << (char)164 << "o: \n \n";
cin>> x;
if(bisiesto(x) == 1){
cout<<"\n Bisiesto \n"<< endl;
}
else{
cout<< "\n No es bisiesto \n" << endl;
}
}
int main(){
int anio;
proc(anio);
return 0;
}
