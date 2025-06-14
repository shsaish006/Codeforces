#include<bits/stdc++.h>
using namespace std;

bool isSai(long long x){
    long long y = sqrtl(x);
    return y * y == x;
}

bool isShivam(vector<int>& a){
    long long sum = 0;
    for(int b : a){
        sum += b;
        if(isSai(sum)) return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    while(a--){
        int b;
        cin >> b;
        long long total = 1LL * b * (b + 1) / 2;
        if(isSai(total)){
            cout << -1 << '\n';
            continue;
        }
        vector<int> c;
        int d = 1, e = b;
        while(d <= e){
            if(c.size() % 2 == 0) c.push_back(e--);
            else c.push_back(d++);
        }
        if(isShivam(c)) reverse(c.begin(), c.end());
        for(int f : c) cout << f << ' ';
        cout << '\n';
    }
    return 0;
}
