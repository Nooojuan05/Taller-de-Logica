#include<iostream>
using namespace std;
int main () {
	int n,paru,pard,part,t,tm,otro;
	do{
	
	cout<<"Ingrese n: ";
	cin>>n;
	if(n % 2==0) {
		paru=n+2;
		pard=n+4;
		part=n+6;
	cout<<"\nEl primer par: "<<paru;
	cout<<"\nEl segundo par: "<<pard;
	cout<<"\nEl tercer par: "<<part;
	
	t=paru+pard+part;
	cout<<"\nLa suma total es: "<<t;
	
	tm=t*n;
	cout<<"\nLa multiplicacion de la suma de los pares es: "<<tm;
	}	
	else{
		paru=n+1;
		pard=n+3;
		part=n+5;
	cout<<"\nEl primer par: "<<paru;
	cout<<"\nEl segundo par: "<<pard;
	cout<<"\nEl tercer par: "<<part;
	
	t=paru+pard+part;
	cout<<"\nLa suma total es: "<<t;
	
	tm=t*n;
	cout<<"\nLa multiplicacion de la suma de los pares es: "<<tm;
	}
	cout<<"\notro: ";
	cin>>otro;
	}while(otro==1);
}
