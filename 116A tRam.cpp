#include <bits/stdc++.h>
using namespace std;
 
int main() {
	 int n;
	 cin>>n;
	 int capacity=0;
	 int cnt=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 cnt-=a;
		 cnt+=b;
		 capacity=max(capacity,cnt);
 
	 }
	 cout<<capacity;
 
	return 0;
}