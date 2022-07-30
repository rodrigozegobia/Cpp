#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void nadador(int);

int main(){
	
	int idade;
	
	cout<<"Informe a idade: ";
	cin>>idade;
	cout<<endl;
	nadador(idade);
	
	return 0;
}

void nadador(int idade)
{
	if(idade>=5 && idade<=7){
		cout<<"Infantil A";
	}
	else{
		if(idade>=8 && idade<=10){
			cout<<"Infantil B";
		}
		else{
			if(idade>=11 && idade<=13){
				cout<<"Juvenil A";
			}
			else{
				if(idade>=14 && idade<=17){
					cout<<"Juvenil B";
				}
				else{
					cout<<"Adulto";
				}
			}
		}
	}
}
