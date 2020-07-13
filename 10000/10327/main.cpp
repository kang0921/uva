#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
        int arr[n], cnt = 0;
        for(int i = 0; i<n ; i++){
            int in;
            cin >> in;
            arr[i] = in;
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n-1; j++){
                if( arr[j] > arr[j+1] ){
                    int tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                    cnt++;
                }

            }
        }
        cout << "Minimum exchange operations : " << cnt << endl;
    }
    return 0;
}
