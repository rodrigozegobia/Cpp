#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

float soma(float, float);
float subtrai(float, float);
float multiplica(float, float);
float divide(float, float);
float le(float,float);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opc;
	float num1=0, num2=0;
	
	cout<<"Escolha uma opção de operação: "<<endl<<"1 - Somar"<<endl<<"2 - Subtrair"<<endl<<"3 - Multiplicar"<<endl<<"4 - Dividir"<<endl<<endl;
	cin>>opc;
		
	if(opc==1){
		cout<<"Digite o primeiro operando: ";
		cin>>num1;
		cout<<"Digite o segundo operando: ";
		cin>>num2;
		cout<<endl;
		cout<<"A soma é: "<<soma(num1,num2)<<endl;
	}
	else{
		if(opc==2){
			cout<<"Digite o primeiro operando: ";
			cin>>num1;
			cout<<"Digite o segundo operando: ";
			cin>>num2;
			cout<<endl;
			cout<<"A subtração é: "<<subtrai(num1,num2)<<endl;
		}
		else{
			if(opc==3){
					cout<<"Digite o primeiro operando: ";
					cin>>num1;
					cout<<"Digite o segundo operando: ";
					cin>>num2;
					cout<<endl;
					cout<<"A Multiplicação é: "<<multiplica(num1,num2)<<endl;
			}
			else{
					cout<<"Digite o primeiro operando: ";
					cin>>num1;
					cout<<"Digite o segundo operando: ";
					cin>>num2;
					cout<<endl;
					cout<<"A divisão é: "<<divide(num1,num2)<<endl;
			}
		}
	}
	return 0;
}

float soma(float valor1,float valor2)
{
	float soma=0;
	soma = valor1+valor2;
	return soma;
}

float multiplica(float valor1,float valor2)
{
	float mult=0;
	mult = valor1*valor2;
	return mult;
}

float subtrai(float valor1,float valor2)
{
	float sub=0;
	sub = valor1-valor2;
	return sub;
}

float divide(float valor1,float valor2)
{
	float div=0;
	div = valor1 / valor2;
	return div;
}
