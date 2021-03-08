#include<iostream>

using namespace std;
void Max(int a, int b);

int main(){
	int x, y;
	cout<<"Escribe el primer valor "; cin>>x;
	cout<<"Escribe el segundo valor "; cin>>y;
	Max(x, y);
	return 0;
}

void Max(int a, int b){
	if(a>b)cout<<"El numero mas grande es "<<a;
	else if(b>a) cout<<"El numero mas grande es "<<b;
	else cout<<"Error";
}
