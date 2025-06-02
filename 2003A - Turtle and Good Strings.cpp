#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int size;
        cin >> size;
 
        string word;
        cin >> word;
 
        if (size >= 2 && word[0] != word[size - 1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}