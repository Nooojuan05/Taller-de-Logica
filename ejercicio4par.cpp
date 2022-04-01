#include<iostream>
#include<math.h>
using namespace std;
int main ( ) {
	int n,otro,i;
	long long pro;
	pro=1;
	i=1;
	do{
		cout<<"Ingrese un numero: ";
		cin>>n;
			if (n % 2 == 0 ) {
			cout << "\nEl numero es par" ;
			pro=pow(n,7);
			cout<<"\nLa potencia es: "<<pro;
			
			}
			else  { 
			cout << "\nEl numero es impar" ;
			
			do{
				
				pro=pro*i;
				i=i+1;
			}while(i<=n);
			
			cout<<"\nEl factorial es: "<<pro;
			}
//-----------------------------------Pedir Otro------------
	cout<<"\notro: ";
	cin>>otro;	
	}while(otro==1);
	
	

}
