#include <iostream>
using namespace std;

char* my_func(char arr[], int start, int length, int size){
    if(length>size || start>size){
        return NULL;
    }
    if(length<0 || start<0){
        return NULL;
    }

    char new_arr[length];
    int x = start;
    int i = 0;

    while(x<length){
        new_arr[i] = arr[x];
        x++;
        i++;
    }
    return new_arr;
}

int main(){

    char my_arr[3] = {'a','b','c'};
    char *returned_arr = my_func(my_arr,1,2,3);
    for(int x=0; x<3; x++){
        cout<<*(returned_arr+x)<<endl;
    }

}