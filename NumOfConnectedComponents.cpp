
#include <iostream>
#include <vector>
#include <cstdlib>
#include <list>
#include <set>
using namespace std;


class Vertex{
    int vertex;
    set<Vertex> adj;
    public:
    Vertex(int vertex,set<Vertex> adj):vertex(vertex),adj(adj){};
    int getVertex(){
        return vertex;
    }

    set<Vertex> getAdj(){
        return adj;
    }
};

class Graph{
    vector<Vertex> v;
    public:
    Graph(){};
    void AddVertex(Vertex ver){
        v.push_back(ver);
    }

    list<Vertex> BFS(){
        vector<bool> visited;
        visited.resize(v.size(),false);
        
       // Create a queue for BFS
        list<Vertex> queue;
 
    // Mark the current node as visited and enqueue it
        visited[0] = true;
        cout<< visited.size();
       
        queue.push_back(v.front());
        while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        
        Vertex s = queue.front();
        cout << s.getVertex() << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        set<Vertex>::iterator itr;
        for (itr = s.getAdj().begin(); itr!= s.getAdj().end(); itr++)
        {
            if (!visited[*(itr).getVertex()])
            {
                cout<<"fffffffff";
                visited[s.getVertex()] = true;
                queue.push_back(s);
            }
        }
        
    }
    return queue;

    }


};




int main()
{
    set<Vertex> v0a={1,2};
    set<Vertex> v1a={2};
    set<Vertex> v2a={0};
    Vertex v0 = Vertex(0,v0a);
    Vertex v1 = Vertex(1,v1a);
    Vertex v2 = Vertex(2,v2a);
    Graph g = Graph();
    g.AddVertex(v0);
    g.AddVertex(v1);
    g.AddVertex(v2);
    list<Vertex> q = g.BFS();
    system("pause");


    return 0;
}
