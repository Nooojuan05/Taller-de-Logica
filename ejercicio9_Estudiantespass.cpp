#include<iostream>
using namespace std;
int main () {
	int otro,i,c,ap,pr,n,cont;
	float asg,nt;
	
	
	ap=0;
	pr=0;
	cont=1;
		cout<<"Cuantos estudianes: ";
		cin>>n;
		
	while(cont<=n) {
		i=1; 
		nt=0;
		cout<<"\nEstudiante "<<cont<<endl;
		while (i<=6) {
			cout<<"Ingrese el valor de la asignatura "<<i<<":";
			cin>>asg;
			
			nt=nt+asg;
			i=i+1;
		}
		nt=nt/6;
		
		if(nt>=3.5) {
			cout<<"\nUsted aprobó con promedio de: "<<nt<<endl;
			ap=ap+1;
		} else {
			cout<<"\nUsted Reprobó con promedio de: "<<nt<<endl;
			pr=pr+1;
		}
		cont=cont+1;
	}
	cout<<"\n----------------------------------------------------------"<<endl;
	cout<<"\nEstudiantes aprobados: "<<ap<<endl;
	cout<<"\nEstudiantes reprobados: "<<pr<<endl;
}

