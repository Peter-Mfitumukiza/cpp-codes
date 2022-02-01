#include <iostream>
using namespace std;
int bin_search(int arr[], int n, int key){
    int start = 0, end = n-1;
    
    while( start <= end ){
        int mid = (start + end)/2;
        if(key == arr[mid])
            return mid;
        else if(arr[mid]>key)
            end = mid-1;
        else 
            start = mid+1;
    }

    return -1;
}

int main(){
    int my_arr[8] = {12,13,14,16,20,21,45,50};
    cout<<bin_search(my_arr, 8, 12)<<endl;
}