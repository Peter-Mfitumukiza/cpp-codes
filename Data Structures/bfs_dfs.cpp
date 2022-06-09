#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph{
    private:
        int numNodes;
        list<int> *adjList;
    public:
        Graph (int nodes){
            this->numNodes = nodes;
            this->adjList = new list<int>[nodes];
        }    
        void addEdge(int src, int dest){
            adjList[src].push_back(dest);
            adjList[dest].push_back(src);
        }
        void display(){
            for (int i = 0; i < numNodes; i++){
                cout<<"Node: "<<i;
                for(auto v:adjList[i]){
                    cout<<" -> "<< v;
                }
                cout<<endl;
            }
        }
        void BFS(int startVertex){
            list<int> queue;
            vector<bool> visited = vector<bool>(numNodes, false);
            cout<<"BFSResult: ";
            queue.push_back(startVertex);
            visited[startVertex] = true;
            while(!queue.empty()){
                int current = queue.front();
                cout<<current<<" ";
                for(auto i: adjList[current]){
                    int adjVertex = i;
                    if(!visited[adjVertex]){
                        visited[adjVertex] = true;
                        queue.push_back(adjVertex);
                    }
                }

                queue.pop_front();

            }
        }
};

int main(){
    Graph g(5);
    g.addEdge(0,2);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(3,3);
    g.addEdge(4,1);
    g.display();
    cout<<"\n\n";
    g.BFS(4);
    cout<<"\n";
}