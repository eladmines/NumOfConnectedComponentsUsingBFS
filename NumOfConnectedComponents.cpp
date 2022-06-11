
#include <iostream>
#include <vector>
#include <cstdlib>
#include <list>
using namespace std;


class Pair{
    int src, dest;
    public:
    Pair(int src,int dest):src(src),dest(dest){};
    int getSrc(){
        return src;
    }
    int getDest(){
        return dest;
    }
};

class Graph{
    vector<int> vertex;
    vector<Pair> edges;
    public:
    // constructor
    Graph(vector<int> vertex,vector<Pair> edges):vertex(vertex),edges(edges){};
    void Graph::BFS(int s)
    {
        vector<bool> visitedVertex;
        // visitedVertex[i] is Flase until it has been visited
        visitedVertex.resize(vertex.size(),false);
        list<int> queue;

        visitedVertex[s] = true;
        queue.push_back(s);

        while(!queue.empty())
        {
            s = queue.front();
            cout << s << " ";
            queue.pop_front();
            for(
        }

    }
    
};




int main()
{
    // vector of graph edges as per the above diagram.
    // Please note that the initialization vector in the below format will
    // work fine in C++11, C++14, C++17 but will fail in C++98.
    vector<int> vertex = {0,1,2,3};
    vector<Pair> edges ={{0, 1}, {1, 2}, {2, 3}, {3, 0}};
    Graph g = Graph(vertex,edges);
    system("pause");
    // total number of nodes in the graph (labelled from 0 to 5)
    int n = 6;
 
    // construct graph

 
    // print adjacency list representation of a graph
   
    system("pause");
    return 0;
}
