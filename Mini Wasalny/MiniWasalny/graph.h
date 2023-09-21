
#ifndef GRAPH_H
#define GRAPH_H


#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

class Graph
{
public:
    Graph();
    static unordered_map<string,unordered_map<string,vector<pair<string,int>>>>graphs;
    static void addGraph(string graph_name,string graph_data,bool directed);
    static void appendToGraph(string graph_name,string data);
    ~Graph();
};

#endif // GRAPH_H
