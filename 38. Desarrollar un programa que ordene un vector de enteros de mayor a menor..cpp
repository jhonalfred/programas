//38. Desarrollar un programa que ordene un vector de enteros de mayor a menor.//

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void proc(int numero,vector <int> lista){
while (numero != -1){
lista.push_back(numero);
cin >> numero;
}
int p;
sort(lista.begin(),lista.end());

cout << "\n \n El vector es: \n \n" << endl;
for(p = 0;p < lista.size();p++)
cout << lista[p] <<" ";
cout << "\n \n" << endl;
}
int main(){
vector <int> lista;
int numero;
cin>> numero;
proc(numero,lista);
system("pause");
return 0;
}
