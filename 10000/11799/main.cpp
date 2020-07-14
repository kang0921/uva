#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin >> t){
        int cnt = 0;
        while(t--){
            cin.ignore();
            vector<int>V;
            string str;
            getline(cin, str);
            stringstream ss;
            ss.str(str);
            int n, max = 0;
            while(ss >> n){
                if(max < n)max = n;
            }
            printf("Case %d: %d\n", ++cnt, max);

        }
    }
    return 0;
}
