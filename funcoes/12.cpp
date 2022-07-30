#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void estacao(int, int);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int data_dia, data_mes;
	
	cout<<"Informe o dia: ";
	cin>>data_dia;
	cout<<"Informe o mês: ";
	cin>>data_mes;
	estacao(data_dia,data_mes);
	
	return 0;
}

void estacao(int dia, int mes){
	if((mes==10 || mes==11) || (mes==9 && dia>=23) || (mes==12 && dia<=20)) {
		cout<<dia<<"/"<<mes<<" é primavera."<<endl;
	}
	else{
		if((mes==1 || mes==2) || (mes==12 && dia>=21) || (mes==3 && dia<=20)){
			cout<<dia<<"/"<<mes<<" é verão."<<endl;
		}
		else{
			if((mes==4 || mes==5) || (mes==3 && dia>=21) || (mes==6 && dia<=20)){
				cout<<dia<<"/"<<mes<<" é outono."<<endl;
			}
			else{
				cout<<dia<<"/"<<mes<<" é inverno."<<endl;
			}
		}
	}
}
