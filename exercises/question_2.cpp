#include <iostream>
using namespace std;

int my_func(int arr[], int size){
    int x=0, y=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2 == 0){
            y+=arr[i];
        }else{
            x+=arr[i];
        }
    }
    return x-y;
}

int main(){
    int my_arr[4] = {3,2,3,4};
    cout<<my_func(my_arr, 2)<<endl;
}