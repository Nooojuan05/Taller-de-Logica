#include<iostream>
#include<math.h>
using namespace std;
int main () {
	float corbata,cinturon,traje,zap,camisa;
	int otro;
	
	do{
	cout<<"\nIngrese el valor de los zapatos: ";
	cin>>zap;
	traje=zap*2;
	cout<<"El valor del traje es: "<<traje;
	
	
	corbata=traje/5;
	cout<<"\nEl valor de la corbata es: "<<corbata;
	cinturon=traje/6;
	cout<<"\nEl valor del cinturon es: "<<cinturon;
	cout<<"\nEl valor de los zapatos es: "<<zap;
	
	
	camisa=zap*0.66666; 
	
	cout<<"\nEl valor de la camisa es: "<<camisa;
	//------------------------------------Otro-----------------------------------	
	cout<<"\notro: ";
	cin>>otro;
	
	}while(otro==1);
	
	
	
	
}
