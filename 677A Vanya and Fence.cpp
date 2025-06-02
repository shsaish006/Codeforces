#include<iostream>
using namespace std;
int main(){
	int n,h;
	cin>>n>>h;
	int w=n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>h) w++; 
	}
	cout<<w<<endl;
	return 0;
} 
