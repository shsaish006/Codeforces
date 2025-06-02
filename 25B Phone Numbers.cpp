#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int a;
	cin >> a;
	string s;
	cin >> s;
	for (int i = 0;i < a - 2 - a % 2;i += 2)
	{
		cout << s[i] << s[i + 1] << "-";
	}
	for (int i = a - 2 - a % 2;i < a;i++)
	{
		cout << s[i];
	}
}