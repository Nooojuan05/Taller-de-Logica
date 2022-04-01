#include<iostream>
using namespace std;
int main () {
	int valor,angulo,otro;
	do{
		
	cout<<"Ingrese el valor del angulo: ";
	cin>>angulo;
	
	valor=180-(90+angulo);
		
	cout<<"\nEl valor del angulo faltante es: "<<valor;
		
	cout<<"\nOtro: ";
	cin>>otro;
	}while (otro==1);
	
	
	
	
	
}
