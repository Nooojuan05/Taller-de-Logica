#include<iostream>
using namespace std;
int main () { 
	
	int i,c,num1,num2,op1,op2;
	float op3,num3,r;
	i=0;
	cout<<"Ingrese cuantas veces quiere calcular: ";
	cin>>c;
	while (i<c) {
		cout<<"Numero 1: ";
		cin>>num1;
		cout<<"Numero 2: ";
		cin>>num2;
		cout<<"Numero 3: ";
		cin>>num3;
		
		op1=num1+num1;
		op2=num2*3;
		op3=num3/2;
		cout<<op3;
		r=(op1+op2)-op3;
		cout<<"\nEl resulatdo es: "<<r<<endl;
		i=i+1;
	}


}
