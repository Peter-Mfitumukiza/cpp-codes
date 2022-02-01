#include <iostream>
using namespace std;

class A{
    public: A(){
        cout<<"A is called"<<endl;
    }
    public: int z=10;
    public: void sayHi(){
        cout<<"Hii Peter"<<endl;
    }
    int red = 123;
};

class B: public A{ 
    public: B(){
        cout<<"B is called"<<endl;
    }
    public: void sayHi(){
        cout<<"Hii Peter from B"<<endl;
    }
};

class C: public A{
    public: C(){
        cout<<"C is called"<<endl;
    }
    public: void sayHi(){
        cout<<"Hii Peter from C"<<endl;
    }
};

class D: public B, public C{
    public: D(){
        cout<<"D is called"<<endl;
    }
};

int main(){
    D myd;
    myd.C::sayHi();
    myd.B::sayHi();
    // myd.A::sayHi();

}
