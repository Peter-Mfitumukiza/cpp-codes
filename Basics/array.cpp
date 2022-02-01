#include <iostream>
using namespace std;
int main(){
    int marks[5];
    cout<<"Enter marks for 5 students: "<<endl;

    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
    cout<<"Here is the marks you entered: "<<endl;

    for(int x=0; x<5; x++){
        // cout<<marks[x]<<endl;

        // The other way to access arrays
        cout<<"Value at index: "<<x << " - "<<x[marks]<<endl;
        cout<<"The memory address at index: "<<x<<" - "<<&x[marks]<<endl;

    }
    return 0;
}