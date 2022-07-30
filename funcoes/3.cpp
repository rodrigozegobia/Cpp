#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int idade_dias(int,int,int);

int main(){
	
	int anos, meses, dias;
	
	
	cout<<"Informe sua idade em anos, meses e dias: "<<endl;
	cout<<"Anos: ";
	cin>>anos;
	cout<<"Meses: ";
	cin>>meses;
	cout<<"Dias: ";
	cin>>dias;
	cout<<"Idade em dias: "<<idade_dias(anos,meses,dias)<<" dias";
	
	return 0;
}

int idade_dias(int ano, int mes, int dia)
{
	int total=0;
	total=(ano*360)+(mes*30)+dia;
	return total;
}
