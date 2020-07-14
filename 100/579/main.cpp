#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10] ="";
    while(cin >> str){
        char * token = strtok (str,":");
        int cnt = 0;
        float arr[2] = {0};
        while (token != NULL){
            arr[cnt++] = stoi(token);
            token = strtok (NULL, ":");
        }
        if(arr[0]==0 && arr[1]==0)break;
        float minute = arr[1]*6;
        float hour = (arr[0]*30 + 30*(arr[1]/60));
        float ans = abs(hour - minute);
        cout << fixed << setprecision(3) << min(ans, 360-ans) << endl;
    }
    return 0;
}
