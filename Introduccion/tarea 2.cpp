#include<iostream>

using namespace std;

void Suma (int a, int b);
int main (){
	int x,y;
	cout<<"Este programa sumara dos valores numericos de tipo entero" <<endl;
	cout<<"Introduce primer valor ";  cin>>x;
	cout<<"intriduce segundo valor "; cin>>y;
	Suma (x,y);
	return 0;
}
void Suma (int a, int b){
	int c=a+b;
	cout<<"El valor de la suma es "<<c;	
}
