#include <bits/stdc++.h>

using namespace std;

//Notice! In 17 line, we couldn't write -> while(!pq.empty()){...}
int main()
{
    int n;
    while(cin>>n&&n!=0){
        priority_queue<int, vector<int>, greater<int>>pq;
        int in;
        for(int i = 0; i<n; i++){
            cin>>in;
            pq.push(in);
        }
        int num, ans = 0;
        while( pq.size() != 1 ){
            num = pq.top();pq.pop();
            num += pq.top();pq.pop();
            ans += num;
            pq.push(num);
        }
        cout<<ans<<endl;

    }
    return 0;
}
