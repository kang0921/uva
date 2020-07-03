#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(cin>>t){
        while(t--){
            int tableT;
            cin>>tableT;
            unordered_map<char, int> um;
            char c;
            int in;
            for(int i = 0; i<tableT ; i++){
                cin>>c>>in;
                um[c] = in;
            }
            int line, ans = 0;
            cin >> line;
            cin.ignore();
            while(c = getchar()){
                if(c=='\n')line--;
                if(line==0)break;
                if(um.find(c)!=um.end()){
                    ans += um[c];
                }

            }
            cout << fixed << setprecision(2) << (double)ans/100 << "$" << endl;
        }
    }
    return 0;
}
