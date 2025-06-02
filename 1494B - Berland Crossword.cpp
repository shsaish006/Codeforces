#include <iostream>
using namespace std;
 
bool isPossible(int n, int u, int r, int d, int l)
{
    for (int tl = 0; tl <= 1; ++tl)
    {
        for (int tr = 0; tr <= 1; ++tr)
        {
            for (int br = 0; br <= 1; ++br)
            {
                for (int bl = 0; bl <= 1; ++bl)
                {
                    int uu = u - tl - tr;
                    int rr = r - tr - br;
                    int dd = d - br - bl;
                    int ll = l - tl - bl;
 
                    if (uu >= 0 && uu <= n - 2 &&
                        rr >= 0 && rr <= n - 2 &&
                        dd >= 0 && dd <= n - 2 &&
                        ll >= 0 && ll <= n - 2)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}
 
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;
        if (isPossible(n, u, r, d, l))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
