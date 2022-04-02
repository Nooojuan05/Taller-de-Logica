#include<iostream>
using namespace std;
int main () {
	int prenda,corbata,traje,cinturon,zapatos,otro, camisa;
do{
	cout<<"1.corbata"<<endl;
	cout<<"2.cinturon"<<endl;
	cout<<"3.zapatos"<<endl;
	cout<<"4.camisa"<<endl;
	cout<<"Ingrese la prenda que quiera: ";
	cin>>prenda;
	switch (prenda) {
		case 1 :
			cout<<"Introduce el valor de la corbata: ";
			cin>>corbata;
			traje = corbata * 6;
			cout<<"valor de traje es: "<<traje;
			break;
		
		case 2 :
			cout<<"Introduce el valor de la cinturon: ";
			cin>>cinturon;
			traje = cinturon *5;
			cout<<"valor de traje es: "<<traje;
			break;
		
		case 3 :
			cout<<"Introduce el valor de los zapatos: ";
			cin>>zapatos;
			traje = zapatos *2;
			cout<<"valor de traje es: "<<traje;
			break;
		
		case 4 :
			cout<<"Introduce el valor de la camisa: ";
			cin>>camisa;
			zapatos = camisa * 3/2;
			traje = zapatos * 2;
			cout<<"valor de traje es: "<<traje;
			break ;
		default :
			cout << "Usted ha ingresado una opción incorrecta";
		}
	cout<<"\notro: ";
	cin>>otro;
}while(otro==1);
		
	
}

