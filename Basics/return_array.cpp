#include <iostream>
using namespace std;

int *sortArray(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int k=i-1;
        for(; k>=0 && arr[k]>key; k--){
            arr[k+1] = arr[k];
        }
        arr[k+1] = key;
    }
    return arr;
}

int main(){
    int array[] = { 8,6,5,4,1,0 };
    int size= sizeof(array)/4;
    int *sorted = sortArray(array, size);
    for(int i = 0; i<size; i++){
        cout<<*(sorted + i)<<endl;
    }
    return 0;
}