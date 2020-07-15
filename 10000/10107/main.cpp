#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    vector<int>V;
    while(cin>>n){
        V.push_back(n);
        sort(V.begin(), V.end());
        if(V.size()%2==1){
            cout << V[ (V.size()/2) ] << endl;
        }
        else{
            cout << (V[ (V.size()/2)-1 ] + V[ (V.size()/2) ])/2 << endl;
        }
    }
    return 0;
}
