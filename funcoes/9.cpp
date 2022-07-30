#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int ler_opc(void);
float soma(float, float);
float subtrai(float, float);
float multiplica(float, float);
float divide(float, float);

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num1=0, num2=0, opc;
	
	opc = ler_opc();
		
	if(opc==1){
		cout<<"A soma é: "<<soma(num1,num2)<<endl;
	}
	else{
		if(opc==2){
			cout<<"A subtração é: "<<subtrai(num1,num2)<<endl;
		}
		else{
			if(opc==3){
					cout<<"A Multiplicação é: "<<multiplica(num1,num2)<<endl;
			}
			else{
					cout<<"A divisão é: "<<divide(num1,num2)<<endl;
			}
		}
	}
	return 0;
}

int ler_opc(void)
{
	int opcao=0;
	cout<<"Escolha uma opção de operação: "<<endl<<"1 - Somar"<<endl<<"2 - Subtrair"<<endl<<"3 - Multiplicar"<<endl<<"4 - Dividir"<<endl;
	cin>>opcao;
	return opcao;
}

float soma(float valor1,float valor2)
{
	float soma=0;
	cout<<"Digite o primeiro operando: ";
	cin>>valor1;
	cout<<"Digite o segundo operando: ";
	cin>>valor2;
	soma = valor1+valor2;
	return soma;
}

float multiplica(float valor1,float valor2)
{
	float mult=0;
	cout<<"Digite o primeiro operando: ";
	cin>>valor1;
	cout<<"Digite o segundo operando: ";
	cin>>valor2;
	mult = valor1*valor2;
	return mult;
}

float subtrai(float valor1,float valor2)
{
	float sub=0;
	cout<<"Digite o primeiro operando: ";
	cin>>valor1;
	cout<<"Digite o segundo operando: ";
	cin>>valor2;
	sub = valor1-valor2;
	return sub;
}

float divide(float valor1,float valor2)
{
	float div=0;
	cout<<"Digite o primeiro operando: ";
	cin>>valor1;
	cout<<"Digite o segundo operando: ";
	cin>>valor2;
	div = valor1 / valor2;
	return div;
}
