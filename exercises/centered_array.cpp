#include <iostream>
using namespace std;

int find_centered_array(int arr[], int size){
    if(size < 3){
        return 0;
    }
    
    if( size%2 == 0 ){
        return 0;
    }
    int middle_index = (size-1)/2;
    
    for(int i=0; i<size/2; i++){
        if((arr[i]<=arr[middle_index]) || (arr[middle_index + 1 + i]<= arr[middle_index])){
            return 0;
        }
    }
    return 1;
}

int main(){
    int my_arr[5] = { 7,3,1,5,6 };
    cout<<find_centered_array(my_arr, 5)<<endl;

}