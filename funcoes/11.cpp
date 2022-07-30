#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

int verifica(int);
int soma_entre(int, int);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	cout<<"Informe o primeiro número: ";
	cin>>n1;
	cout<<verifica(n1)<<endl;
	cout<<"Informe o segundo número: ";
	cin>>n2;
	cout<<verifica(n2)<<endl;
	
	cout<<"Quantidade de inteiros entre eles: "<<soma_entre(n1,n2);
	
	return 0;
}

int verifica(int num){
	if(num<0){
		return 0;
	}
	else{
		if(num==0){
			return -1;
		}
		else{
			return 1;
		}
	}
}

int soma_entre(int num1, int num2){
	int i, soma=0, maior, menor;
	
	if(num1>num2){
		maior=num1;
		menor=num2;
		
	}
	else{
		maior=num2;
		menor=num1;
	}
	
	for(i=menor+1; i<maior; i++){
		soma+=1;
	}
	return soma;
}
