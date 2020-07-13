#include <iostream>

using namespace std;

int main()
{
    int t;
    while(cin>>t && t!=0){
        int x, y;
        cin >> x >> y;
        while(t--){
            int n1, n2;
            cin >> n1 >> n2;
            if(n1 == x || n2 == y)cout << "divisa" << endl;
            else if(n1 < x && n2 > y) cout << "NO" << endl;
            else if(n1 > x && n2 > y) cout << "NE" << endl;
            else if(n1 < x && n2 < y) cout << "SO" << endl;
            else if(n1 > x && n2 < y) cout << "SE" << endl;
        }
    }
    return 0;
}
