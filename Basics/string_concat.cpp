#include <iostream>
#include <string>
using namespace std;
int main(){
    string fname, lname, fullname;
    cout<<"Hii there! enter your firstname: ";
    cin>>fname;
    cout<<"Enter your secondname please: ";
    cin>>lname;
    fullname = fname + " " + lname;
    // fullname.resize(fullname.size() -1);
    cout<<"Welcome "<< fullname.substr(1, 4)<< ", we are happy to have you here." << endl;
    return 0;
}

