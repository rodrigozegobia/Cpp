#include <iostream>
#include <stdio.h>
#include <locale.h>

using namespace std;

float celsius(float);

int main(){
	
	float temperatura;
	
	cout<<"Informe a temperatura em fahrenheit: ";
	cin>>temperatura;
	cout<<"A temperatura em Celsius: "<<celsius(temperatura)<<endl;
	
	return 0;
}

float celsius(float fahrenheit)
{
	float temp_c=0;
	temp_c= ((fahrenheit-32)*5/9);
	return temp_c;
}
