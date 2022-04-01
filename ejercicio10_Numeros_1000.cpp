#include<iostream>
using namespace std;
int main () {
	int otro,i,nm,ma;
	do{
	
	cout<<"Numero menor: ";
	cin>>nm;
	cout<<"Numero mayor: ";
	cin>>ma;
	for ( i=nm;i<=ma;i=i+1 )  {
	cout<<i<<endl;
	}
	cout<<"Otro: ";
	cin>>otro;
	}while(otro==1);
}

