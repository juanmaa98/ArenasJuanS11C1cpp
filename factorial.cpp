#include<iostream>

using namespace std;

int main(){
	int n=7;
	int factorial=1;
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	cout<<"el factorial de "<<n<<" es: ";
	cout<<factorial<<endl;
	cout<<"con 77 retorna 0"<<endl;
}
