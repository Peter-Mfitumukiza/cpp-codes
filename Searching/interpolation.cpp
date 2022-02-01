#include <iostream>
using namespace std;
int bin_search(int arr[], int n, int key){
    int lo = 0, hi= n-1;
    
    while( lo <= hi ){
        if(lo == hi){
            if(arr[lo]==key)
                return lo;
            else 
                return -1;
        }

        int prob_pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo]))* (key - arr[lo]));

        if(key == arr[prob_pos])
            return prob_pos;
        else if(arr[prob_pos]>key)
            hi = prob_pos-1;
        else 
            lo = prob_pos+1;
    }

    return -1;
}

int main(){
    int my_arr[1] = {12};
    cout<<bin_search(my_arr, 1, 12)<<endl;
}