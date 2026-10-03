#include<iostream>
using namespace std;


int main() {

	// char ch[]{'M','a','y','k','\0'};
	// char ch1[]{"Mayk\0"};
	// cout<<ch<<endl;
	// cout<<ch1<<endl;

	// for(int i=0;ch1[i]!='\0';i++){
	// 	cout<<ch1[i]<<" ";
	// }

	char ch[100];
	cin>>ch;


	for(int i=0;ch[i]!='\0';i++){
		cout<<ch[i];
	}



}