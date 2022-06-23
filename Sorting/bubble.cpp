#include <iostream>
using namespace std;
int main(){
    int arr[] = { 8,7,2,6,20,5,1,4,2,0 };
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int val:arr){
        cout<<val<<" ";
    }
        cout<<endl;
    return 0;
}