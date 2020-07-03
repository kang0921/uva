#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    while(cin>>test){
        while(test--){
            int tableT;
            cin>>tableT;
            int table[256] = {0};
            char ch;
            int in;
            for(int i = 0; i<tableT; i++){
                cin>>ch>>in;
                table[ch] = in;
            }

            int t;
            cin>>t;
            unsigned char c = getchar();

            int ans = 0;
            for(int i = 0; i<t; i++){
                while( ( c = getchar() ) != EOF && (c !='\n') ){
                     ans += table[c];
                }
            }
            printf("%.2lf$\n", (double)ans/100);
        }
    }
    return 0;
}
