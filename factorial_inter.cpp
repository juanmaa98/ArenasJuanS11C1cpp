#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Ingrese un numero entero ";
	cin>>n;
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	cout<<"el factorial de "<<n<<" es: ";
	cout<<factorial<<endl;
}
