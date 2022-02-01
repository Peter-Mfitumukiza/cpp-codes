#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> my_vector = { 5,2,3,7,8 };
    vector<int> sec_vector;
    // int array[] = { 1,2,3,5,623 };


    // using indexes on vectors
    // for(int x = 0; x<my_vector.size(); x++){
    //     cout<<my_vector.at(x)<<endl;
    // }

    // loop through an array using the special loop
    // for(int x: my_vector){
    //     cout<<x<<endl;
    // }

    for(auto &i:my_vector){
        cout<<i<<endl;
    }


    // for(int i = 1; i<5; i++){
    //     sec_vector.push_back(10);
    // }

    
    // for (auto i = my_vector.rbegin(); i != my_vector.rend(); ++i){
    //     cout << *i <<endl;
    // }

    return 0;
}
