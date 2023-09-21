
#include "graph.h"
#include <fstream>
#include <QMessageBox>

int sToi(string s)
{
    int tmp=0;
    for(char c:s)
    {
        tmp=tmp*10+(c-'0');
    }
    return tmp;
}

unordered_map<string,unordered_map<string,vector<pair<string,int>>>> Graph::graphs ={};

Graph::Graph()
{}


bool checkCost(string s)
{
    try{
        if(stoi(s) >= 0)
            return true;
        return false;
    }catch(exception e)
    {
        return false;
    }

}

bool validate_Input(string graph_data, unordered_map<string,vector<pair<string,int>>> &adj,bool directed)
{
    int spaceCntr = 0;
    string u="",v="",tmp="";

    if(graph_data=="")
    {
        QMessageBox::warning(nullptr,"Input Invalid","Empty graph data please enter data");
        return false;
    }

    if(graph_data.back()!='\n')
        graph_data+='\n';


    for(auto &c:graph_data)
    {
        if(c == ' ')
        {
            spaceCntr++;

            if(spaceCntr == 1)
                u=tmp;
            else if(spaceCntr == 2)
                v=tmp;
            else
            {
                QMessageBox::warning(nullptr,"Input Invalid","Space formatting invalid");
                return false;
            }

            tmp="";
        }
        else if(c == '\n')
        {
            if(u=="" || v=="" || tmp=="" || !checkCost(tmp))
            {
                QMessageBox::warning(nullptr,"Input Invalid","Wrong format please try entering in this format\n city1 cit2 cost");
                return false;
            }
            adj[u].push_back({v,sToi(tmp)});
            adj[v];
            if(!directed)
                adj[v].push_back({u,sToi(tmp)});
            tmp="";
            spaceCntr=0;
            u="";
            v="";
        }
        else
        {
            tmp+=c;
        }
    }
    return true;
}

void Graph::addGraph(string graph_name,string graph_data,bool directed)
{
    unordered_map<string,vector<pair<string,int>>>adj;

    if(validate_Input(graph_data,adj,directed))
        Graph::graphs[graph_name]=adj;

}

void Graph::appendToGraph(string graph_name,string graph_data)
{
    unordered_map<string,vector<pair<string,int>>>adj=Graph::graphs[graph_name];

    if(validate_Input(graph_data,adj,0))
        Graph::graphs[graph_name]=adj;
    else
        Graph::graphs.erase(graph_name);
}


Graph::~Graph()
{}

