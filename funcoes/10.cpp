#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int dobro(int);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3;
	
	cout<<"Informe o primeiro número: ";
	cin>>n1;
	cout<<"O dobro: "<<dobro(n1)<<endl;
	cout<<"Informe o segundo número: ";
	cin>>n2;
	cout<<"O dobro: "<<dobro(n2)<<endl;
	cout<<"Informe o terceiro número: ";
	cin>>n3;
	cout<<"O dobro: "<<dobro(n3)<<endl;
	
	return 0;
}

int dobro(int num){
	int dobro;
	dobro=num*2;
	return dobro;
}
