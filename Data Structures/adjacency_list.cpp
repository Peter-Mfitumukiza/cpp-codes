#include <iostream>
#include <vector>
using namespace std;

class AdjacencyList{
    private:
        int nodes;
        vector<int> *list;
    public: 
        AdjacencyList(int nodes){
            this->nodes = nodes;
            list = new vector<int>[nodes];
        }
        void display(){
            for (int i = 0; i < nodes; i++){
                cout<<"Node: "<<i;
                for(auto v:list[i]){
                    cout<<" -> "<< v;
                }
                cout<<endl;
            }
        }
        void addEdge(int origin, int destination){
            list[origin].push_back(destination);
            list[destination].push_back(origin);
        }
        void deleteEdge(int origin, int destination){
            for(int i=0; i<list[origin].size(); i++){
                if(list[origin][i] == destination){
                    list[origin].erase(list[origin].begin() + i);
                    break;
                }
            }
            for(int i=0; i<list[destination].size(); i++){
                if(list[destination][i] == origin){
                    list[destination].erase(list[destination].begin() + i);
                    break;
                    
                }
            }
        }
};

int main(){
    AdjacencyList list(5);
    list.display();
    list.addEdge(0,1);
    list.addEdge(1,3);
    cout<<"After insertion:  "<<endl;
    list.display();
    list.deleteEdge(1,3);
    cout<<"After deleting (1,3): \n";
    list.display();
}