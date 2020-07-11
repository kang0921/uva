#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    while(cin>>str){
        list<char>li;
        list<char>::iterator it = li.begin();
        for(int i = 0; i<str.length(); i++){
            switch(str[i]){
                case '[':
                    it = li.begin();
                    break;
                case ']':
                    it = li.end();
                    break;
                default:
                    li.insert(it, str[i]);
                    break;
            }
        }
        for(auto i : li)
            cout << i;
        cout << endl;
    }
    return 0;
}
