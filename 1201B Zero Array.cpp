#include<iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  long long sum = 0;
  int maxsum = 0;
  for (int i = 0; i < a;i++)
  {
    int x;
    cin >> x;
    sum += x;
    maxsum = max(x, maxsum);
  }
  if(sum%2==0 && maxsum<=sum-maxsum)
    cout << "YES";
    else
      cout << "NO";
}