#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2];
        cin >> a[0] >> a[1];
        sort(a, a + (sizeof(a) / sizeof(a[0])));
        cout << a[0] <<  " " << a[1] << endl;
    }
 
    return 0;                                                               
}