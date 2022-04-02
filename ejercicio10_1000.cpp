#include<iostream>
using namespace std;
int main () {
	int cuantos,i,n,sum,prd,pot,neg;
	prd=1;
	neg=0;
	i=0;
	
	sum =0;
	cout<<"Cuantos: "; //Cuantos Numeros
	cin>>cuantos;
	
	while (i<cuantos) {
		cout<<"\nIngrese el numero: ";
		cin>>n;
		i++;	
	
	if (n%2 ==0 ) {
		sum=sum+n;
	}else { 
		prd=prd*n;	 
		pot=n*n;
		cout<<n<<"^2="<<pot;   
	}
	if (n<0) {
		neg=neg+n;
	}
	
	}
	cout<<"\nLa suma de los Pares fue: "<<sum;
	cout<<"\nEl producto de los Impares fue: "<<prd;
	cout<<"\nLa suma de los negativos es: "<<neg;	
}


