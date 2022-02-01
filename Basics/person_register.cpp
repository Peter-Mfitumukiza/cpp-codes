#include <iostream>
#include <string.h>
using namespace std;

enum Gender{
    MALE, FEMALE, OTHERS
};
struct Person{
    string firstname;
    Gender gender;
};

Gender convert_to_enum(string gender){
    if(gender == "male")
        return MALE;
    else if(gender == "female")
        return FEMALE;
    else 
        return OTHERS;
}   

string convert_to_string(Gender gender){
    if(gender==MALE)
        return "Male";
    else if(gender == FEMALE)
        return "Female";
    else   
        return "Others";
}

int main(){
    cout<<"Enter person's details: "<<endl;
    string firstname;
    string gender;
    Person people[5]={};
    for (int i=0; i<5; i++){
        cout<<"Enter person "<< i+1 <<"'s firstname: ";
        cin>>firstname;
        cout<<"Enter person "<< i+1 <<"'s gender: ";
        cin>>gender;
        Person p = {};
        p.firstname = firstname;
        p.gender = convert_to_enum(gender);

        people[i] = p;
    }
    
    cout<<endl;
    cout<<"Here are the people you recorded so far..."<<endl;

    for ( int x=0; x<5; x++){
        gender = convert_to_string(people[x].gender);
        cout<<people[x].firstname<< " - " << gender<<endl;
    }
}