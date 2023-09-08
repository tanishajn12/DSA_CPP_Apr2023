#include<iostream>
#include<list>
#include<map>
using namespace std;

template <typename T>
class graph{

    map<T,list<T>> neighbourMap; //to store the graph representation
    bool isDirected;

    public:
    graph(bool isDirected=false){
        this->isDirected=isDirected;

    }

    void addEdge(T u, T v){

        //adds an edge between vertex u and v
        neighbourMap[u].push_back(v);
        if(!isDirected) {
            neighbourMap[v].push_back(u);
        }
    }

    void print(){
        //prints the adjacency list representation of the graph

        for(pair<T,list<T>> vertex:neighbourMap) {
            T vertexLabel=vertex.first;
            list<T> neighbourlist=vertex.second;
            cout<<vertexLabel<<" : ";

            for(T neighbour:neighbourlist) {
                cout<<neighbour<<" ";
            }

            cout<<endl;
        }
    }

};

int main() {

	graph<char> g;

    g.addEdge('A', 'B');
	g.addEdge('A', 'C');
	g.addEdge('B', 'D');
	g.addEdge('C', 'D');
	g.addEdge('C', 'E');
	g.addEdge('D', 'E');

	g.print();

	return 0;
}


