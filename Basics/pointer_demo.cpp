#include <iostream>
using namespace std;
int x;

void set_x(int *xp){
    *xp = 100;
}

void swap_ab(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a =10, b= 30;
    set_x(&x);
    swap_ab(&a, &b);
    cout<<x<<endl;
    cout<<a<<" "<<b<<endl;

}