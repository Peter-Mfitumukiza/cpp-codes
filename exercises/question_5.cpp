#include <iostream>
using namespace std;
int* my_func(int first_arr[], int sec_arr[], int size_one, int size_two){
    if(first_arr == NULL || sec_arr == NULL) return NULL;
    if(size_one == 0 || size_two == 0) return {};
    
    int *outer_arr, *inner_arr;
    int outer_size, inner_size;
    int k=0;
    int new_arr[k];
    int *returned_arr = new_arr;
    if(size_one < size_two){
        outer_arr = first_arr;
        outer_size = size_one;
        inner_arr = sec_arr;
        inner_size = size_two;
    }else{
        outer_arr = sec_arr;
        outer_size = size_two;
        inner_arr = first_arr;
        inner_size = size_one;
    }

    for(int i=0; i<outer_size; i++){
        for(int j=0; j<inner_size; j++){
            if(*(outer_arr+ i) == *(inner_arr + j)){
                *(returned_arr + k) = outer_arr[i];
                // cout<<returned_arr[k]<<endl;
                k++;
            }
        }
    }

    return returned_arr;
}

int main(){
    int arr1[4] = {12,2,3,6};
    int arr2[4] = {2,3,1,0};
    int* common_ones = my_func(arr1, arr2, 4, 4);
    // int x = 0;
    cout<<*(common_ones)<<endl;
    cout<<*(common_ones + 1)<<endl;
    

}