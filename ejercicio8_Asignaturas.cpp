#include<iostream>
using namespace std;
int main () {
	int otro,i;
	float asg,nt;
	
	i=1;
	nt=0;
	do{
		while (i<=6) {
			cout<<"Ingrese el valor de la asignatura "<<i<<":";
			cin>>asg;
			
			nt=nt+asg;
			i=i+1;
		}
		nt=nt/6;
		
		if(nt>=3.5) {
			cout<<"\nUsted aprobó con promedio de: "<<nt;
		} else {
			cout<<"\nUsted Reprobó con promedio de: "<<nt;
			
		}
	}while(otro==1);
}
