#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int reverse_num(int num){
    string new_str = to_string(num);
    reverse(new_str.begin(), new_str.end());
    int reversed_num;
    if(num<0){
        reversed_num = stoi("-"+new_str);
    }else{
        reversed_num = stoi(new_str);
    }

    return reversed_num;
}

int main(){
    cout<<reverse_num(12345)<<endl;
    return 0;
}