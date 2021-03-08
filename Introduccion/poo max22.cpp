#include<iostream>
using namespace std;

int Max (int a,int b);
int main(){
	int x, y, z, r,s;
	cout<<"introduce el primer valor ";cin>>x;
	cout<<"introduce el segundo valor ";cin>>y;
	cout<<"introduce el tercer valor "; cin>>z;
	r=Max(x,y);
	s=Max(r,z);
	cout<<"El valor mas grande es "<<s;
	return 0;
}

int Max (int a, int b){
	int c;
	if (a>b) c=a;
	else if (b>a) c=b;
	else c=a;
	return c;
}

