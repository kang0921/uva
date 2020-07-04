#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, flag = 0;
    while(cin>>t){
        string str;
        getchar();
        getline(cin, str);
        while(t--){
            if(flag!=0)
                cout<<'\n';
            flag = 1;

            map<string, int>m;
            int sum = 0;
            while( getline(cin, str) && str != "" ){ //Notice! if blank -> str != ""
                m[str]++;
                sum++;
            }

            for(map<string, int>::iterator it = m.begin(); it!=m.end(); it++){
                cout << fixed << setprecision(4) << it->first << " " << (double)it->second/sum*100 <<endl;
            }
        }
    }
    return 0;
}
