#include <iostream>
using namespace std;

int is_poe(int arr[], int size){
    if(size<3){
        return -1;
    }
    int idx = 0;
    int left_sum = arr[0];
    int right_sum = arr[size-1];
    int left_index = 0;
    int right_index = size-1;
    for(int n=1; n<size-1; n++){
        if(left_sum <right_sum){
            left_index++;
            left_sum += arr[left_index];
            idx = left_index + 1;
        }else{
            right_index++;
            right_sum += arr[right_index];
            idx = right_index -1;
        }
    }
    if(left_sum == right_sum){
        return idx;
    }else{
        return -1;
    }
}

int main(){
    int my_arr[3] = {2,1,2};
    cout<<is_poe(my_arr, 3)<<endl;
}