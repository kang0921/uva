#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0){
        vector<int>V;
        for(int i = 0; i<n; i++){
            int tmp;
            cin >> tmp;
            V.push_back(tmp);
        }
        sort(V.begin(), V.end());
        int flag = 0;
        for(auto i : V){
            if(flag)
                cout << " ";
            flag = 1;
            cout << i ;
        }
        cout << endl;
    }
    return 0;
}
