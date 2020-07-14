#include <iostream>

using namespace std;

int main()
{
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        int min = b+1, p;
        for(int i = 0; i<h ; i++){
            int arr[w];
            cin >> p;
            int cnt = 0;
            for(int j = 0; j<w; j++){
                cin >> arr[j];
                if(arr[j] >= n)++cnt;
            }
            if(cnt > 0 && min > p*n){
                min = p*n;
            }
        }
        if(min<=b)cout << min << endl;
        else cout << "stay home" << endl;
    }
    return 0;
}
