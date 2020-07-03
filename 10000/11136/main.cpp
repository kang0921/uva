#include <bits/stdc++.h>

using namespace std;

int main()
{
    int day;
    while(cin>>day&&day!=0){
        multiset<int>S;
        long long int num, in, sum = 0;
        for(int i = 0; i<day; i++){
            cin>>num;
            for(int j = 0; j<num ; j++){
                cin >> in;
                S.insert(in);
            }
            multiset<int>::iterator it1 = S.begin(), it2 = --S.end();
            sum += *it2 - *it1;
            S.erase(it1);
            S.erase(it2);

        }
        cout << sum << endl;
    }
    return 0;


}
