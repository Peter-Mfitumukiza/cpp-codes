#include <iostream>
using namespace std;

int main(){
    int my_arr[] = {5,8,0,7,1,2,2};
    int n = sizeof(my_arr)/sizeof(my_arr[0]);
    int key, p;
    for(int i=1; i<n; i++){
        key = my_arr[i];
        p = i-1;
        for(;p>=0 && my_arr[p] > key; p--){
            my_arr[p+1] = my_arr[p];
        }
        my_arr[p+1] = key;
    }

    for(int x:my_arr){
        cout<<x<<endl;
    }

    return 0;

}
