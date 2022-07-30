#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

float calc_perim(float);
float calc_area(float);

int main(){
	
	float lado=0;
	
	cout<<"Informe o lado do quadrado: "<<endl;
	cin>>lado;
	cout<<"A area do quadrado: "<<calc_area(lado)<<endl;
	cout<<"O perimetro do quadrado: "<<calc_perim(lado)<<endl;
	
	return 0;
}

float calc_area(float lado)
{
	float area=0;
	area=lado*lado;
	return area;
}

float calc_perim(float lado)
{
	float perim=0;
	perim=lado*4;
	return perim;
}

