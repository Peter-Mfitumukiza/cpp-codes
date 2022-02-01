#include <iostream>
using namespace std;
int main(){
    int array[] = {8,3,5,1,7,0,-1};
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size-1;i++){
        int min_index = i;
        for(int j=i+1; j<size; j++){
            if(array[j]<array[min_index]){
                min_index = j;
            }
        }
        if(array[i]!= array[min_index]){
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }

    for(int p:array){
        cout<<p<<endl;
    }
}