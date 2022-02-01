#include <iostream>
using namespace std;

int* sort_array(int array[]){
    int i;
    for(i=0;i<3; i++){
        for(int x=0; x<3; x++){
            if(array[x] > array[x+1]){
                int temp = array[x];
                array[x] = array[x+1];
                array[x+1] = temp;
            }
        }
    }
    return array;
}

int main(){
    int *pointer_array;
    int my_array[3] = {1,2,3 };
    pointer_array = my_array;
    int sample_array[3] = {5,2,3};
    
    int *sorted;
    sorted = sort_array(sample_array);
    for(int k=0; k<=2;k++){
        if(k==0){
            cout<<*sorted<<endl;
        }else{
            cout<< *(sorted+k)<< endl;
        }
    }
    // cout<<*pointer_array+1<<endl;

}