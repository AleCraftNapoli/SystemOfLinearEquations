#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
	//Variabili
	char x, op1, op2, op3, op4;
	string s;
	float a1, b1, c1, a2, b2, c2;
	double sx, sy;
	
	//Input
	system("COLOR 1F");
	cout<<"Benvenuto nel Risolutore di Sistemi!\n\n";
	cout<<"Inserisci la prima equazione (nella forma 'ax+by+c=0'): ";
	cin>> a1>> x>> op1>> b1>> x>> op2>> c1>> s;
	cout<<"Inserisci la seconda equazione (nella forma 'ax+by+c=0'): ";
	cin>> a2>> x>> op3>> b2>> x>> op4>> c2>> s;
	
	//Cambio Segno
	if (op1 == '-') { b1 = -b1; }
	if (op2 == '-') { c1 = -c1; }
	if (op3 == '-') { b2 = -b2; }
	if (op4 == '-') { c2 = -c2; }
	
	//Soluzione
	sy = ((a2*c1)-(a1*c2))/((a1*b2)-(a2*b1));
	sx = ((-b1*sy)-c1)/a1;
	
	//Output
	cout<<endl<<"SOLUZIONE:  (x, y) = ("<<sx<<", "<<sy<<")";
	cout<<endl<<endl<<"Developed by Alessio Giliberti";
	
	return 0;
}
