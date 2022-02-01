#include <iostream>
using namespace std;

class Computer{
    private: int memorySize;
    public:  string model;
    
    public: Computer(){}
    public: Computer(string myModel){
        model = myModel;
    }

    public: 
        void setMemory(){
            if(model == "POSITIVO")
                memorySize = 8;
            else if(model == "DELL")
                memorySize = 16;
        }
        int getMemorySize(){
            return memorySize;
        }
        // void setModel(string model){
        //     model = model;
        // }
        // string getModel(){
        //     return model;
        // }
};

int main(){
    Computer comp("POSITIVO");
    comp.setMemory();

    cout<<comp.getMemorySize()<<endl;
    cout<<comp.model<<endl;
}