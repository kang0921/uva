#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        while(n--){
            int n1, n2;
            cin >> n1 >> n2;
            if(n1 > n2)cout << ">" << endl;
            else if(n1 < n2)cout << "<" << endl;
            else cout << "=" << endl;
        }
    }
    return 0;
}
