#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int zero_a_dez(int);

int main(){
	
	int num;
	
	cout<<"Informe um valor: ";
	cin>>num;
	cout<<endl;
	cout<<zero_a_dez(num);
	
	return 0;
}

int zero_a_dez(int valor)
{
	if(valor>=0 && valor<=10){
		return 0;
	}
	else{
		return 1;
	}
}
