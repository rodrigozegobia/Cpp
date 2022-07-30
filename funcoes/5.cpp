#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

void conceito(float);
float calc_media(float,float);

int main(){
	
	float n1=0, n2=0;
	
	cout<<"Informe sua primeira nota: "<<endl;
	cin>>n1;
	cout<<"Informe sua segunda nota: "<<endl;
	cin>>n2;
	conceito(calc_media(n1,n2));
	
	return 0;
}

float calc_media(float nota1,float nota2)
{
	float media=0;
	media = (nota1+nota2)/2;
	return media;
}

void conceito(float nota)
{
	if(nota>=0 && nota<=4.9){
		cout<<"Conceito D";
	}
	else{
		if(nota>=5 && nota<=6.9){
			cout<<"Conceito C";
		}
		else{
			if(nota>=7 && nota<=8.9){
				cout<<"Conceito B";
			}
			else{
				cout<<"Conceito A";
			}
		}
	}
}

