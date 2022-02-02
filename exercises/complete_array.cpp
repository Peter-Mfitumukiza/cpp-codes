#include <iostream>
#include <climits>
using namespace std;

int isComplete(int arr[], int len){
    if(len <=1){
        return 0;
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0; i<len; i++){
        if((arr[i]%2) == 0){
            if(arr[i]<min){
                min = arr[i];
            }
            if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    if(min<max){
        for(int x=min+1; x<max; x++){
            bool isPresent = false;   
            for(int y=0; y<len; y++){
                if(arr[y] == x){
                    isPresent = true;
                    break;
                }
            }
            if(!isPresent)
                return 0;
        }
    }else{
        return 0;
    }

    return 1;
}

int main(){
    int arr[10] = {-5, 6, 2, 3, 2, 4, 5, 11, 8, 7};
    int arr2[4] = {5, 7, 9, 13};
    cout<<isComplete(arr2, 4)<<endl;
}
