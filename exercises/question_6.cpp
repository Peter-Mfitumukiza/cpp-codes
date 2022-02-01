#include <iostream>
using namespace std;

int my_func(int arr[], int size){
    if(size<3){
        return -1;
    }
    for(int x=0; x<size; x++){
        int idx = x+1;
        int sum_before=0;
        int sum_after=0;
        for(int i=0; i<size; i++){
            if(i<idx){
                sum_before += arr[i];
            }
            if(i>idx){
                sum_after += arr[i];
            }
        }
        if(sum_before == sum_after){
            
            return idx;
        }
    }
    return -1;
}

int main(){
    int arr[7] = {2, 1, 1, 1, 2, 1, 7};
    cout<<my_func(arr,7)<<endl;
}