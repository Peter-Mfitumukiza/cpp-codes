#include <iostream>
using namespace std;
int main(){
    int my_array[] = { 1,2,3 };
    my_array[3] = 10;
    for(int i:my_array){
        cout<<i<<endl;
    }
}