#include <iostream>
using namespace std;
// using namepace string;
enum Gender{
    MALE, FEMALE
};
struct Person{
    string firstname;
    Gender gender;
};

int main(){
    Person p = { "Mfitumukiza", MALE };
    cout<<"Hello "<<p.firstname<<" "<< p.gender<<endl;
}