#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t){
        int cnt = 0;
        while(t--){
            int n[3];
            cin >> n[0] >> n[1] >> n[2];
            sort(n, n+3);
            printf("Case %d: %d\n", ++cnt, n[1]);

        }
    }
    return 0;
}
