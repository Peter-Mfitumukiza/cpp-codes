#include <iostream>
using namespace std;

class AdjacencyMatrix{
    private: 
        int nodes;
        int **matrix;

    public:
        AdjacencyMatrix(int nodes){
            this->nodes = nodes;
            matrix = new int* [nodes];
            for (int i = 0; i < nodes; i++){
                matrix[i] = new int[nodes];
                for(int j=0; j<nodes; j++){
                    matrix[i][j] = 0;
                }
            }
        }    
        void display(){
            for (int i = 0; i < nodes; i++){
                for (int j = 0; j < nodes; j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<" "<<endl;
            }
        }
        void addEdge(int origin, int destination){
            if(origin > nodes || destination > nodes || origin <= 0 || destination <= 0){
                cout<<"Invalid operation"<<endl;
                return;
            }
            matrix [origin-1][destination-1] = 1;
        }
        void deleteEdge(int origin, int destination){
            if(origin > nodes || destination > nodes || origin <= 0 || destination <= 0){
                cout<<"Invalid operation"<<endl;
                return;
            }
            matrix [origin-1][destination-1] = 0;
        }
};

int main(){
    int numberOfNodes, origin, destination, choice = 0;
    cout<<"Welcome here!\n";
    cout<<"Enter number of nodes for your matrix: ";
    cin>>numberOfNodes;

    AdjacencyMatrix m(numberOfNodes);
    cout<<"Matrix initiated successfully!"<<endl;
    while (true){
        cout<<"\nChoose what to do next: \n1. Add a node \n2. Delete a node\n3. Display matrix \n0. Exist"<<endl;
        cin>>choice;
        switch (choice){
        case 0:
            exit(1);
            break;
        case 1:
            cout<<"Origin: ";
            cin>>origin;
            cout<<"Destination: ";
            cin>>destination;
            m.addEdge(origin, destination);
            break;
        case 2:
            cout<<"Origin: ";
            cin>>origin;
            cout<<"Destination: ";
            cin>>destination;
            m.deleteEdge(origin, destination);
            break;
        case 3:
            m.display();
            break;
        default:
            cout<<"Invalid choice!"<<endl;
            break;
        }
    }
}