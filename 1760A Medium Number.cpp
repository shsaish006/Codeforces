
//Median

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        cout<<arr[1]<<"\n";
    }
    return 0;
}

//  //Middele Element

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3]={a,b,c};
    sort(arr,arr+3);
    cout<<arr[1]<<endl;
    return 0;
    
//  }

//  //Mean (Average)
 #include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    double mean = (a + b + c) / 3.0;

    cout << "Mean: " << mean << endl;
    return 0;
}

// //Mode

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mode;
    bool hasMode = true;

    if (a == b || a == c) mode = a;
    else if (b == c) mode = b;
    else hasMode = false;

    if (hasMode)
        cout << "Mode: " << mode << endl;
    else
        cout << "Mode: No mode" << endl;

    return 0;
}

