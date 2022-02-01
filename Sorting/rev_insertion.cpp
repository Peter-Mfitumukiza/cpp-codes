#include <iostream>
using namespace std;
int main(){
    int arr[] = {8,7,6,5,4,0};
    int size = sizeof(arr)/4;

    for(int i=1; i<size; i++){
        int key = arr[i];
        int p = i-1;
        for(;p>=0 && arr[p]>key; p--){
            arr[p+1] = arr[p];
        }
        arr[p+1] = key;
    }

    for(int x:arr){
        cout<<x<<endl;
    }

    return 0;
}