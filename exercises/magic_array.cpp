#include <iostream>
using namespace std;

bool isPrime(int num);
int isMagic(int arr[], int size){
    if(size <= 0)
        return 0;
    int sum = 0;
    for(int i = 0; i<size; i++){
        if(isPrime(arr[i]))
            sum += arr[i];   
    }
    if(sum == arr[0]){
        return 1;
    }
    
    return 0;
    
}
int main(){
    int arr[7] = {20, 2, 7, 9, 11, 4, 6};
    int arr2[5] = {8, 5, -5, 5, 3};
    cout<<isMagic(arr2, 5)<<endl;
}

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i = 2; i<=(num/2); i++){
        if((num % i) == 0) 
            return false;
    }
    return true;
}