#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

float METADE(float);

int main(){
	
	float n1=0, n2=0;
	
	cout<<"Informe o primeiro numero: "<<endl;
	cin>>n1;
	cout<<"Informe o segundo numero: "<<endl;
	cin>>n2;
	cout<<"A metade do primeiro numero: "<<METADE(n1)<<endl;
	cout<<"A metade do segundo numero: "<<METADE(n2)<<endl;
	
	return 0;
}

float METADE(float valor)
{
	float metade=0;
	metade = valor/2;
	return metade;
}

