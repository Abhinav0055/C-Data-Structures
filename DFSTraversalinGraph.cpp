#include <bits/stdc++.h>
using namespace std;

class Graph {
    public:
    bool** adjMat;
    int n;

    Graph(int n) {
        this->n = n;
        adjMat = new bool*[n];
        for (int i = 0; i < n; i++) {
            adjMat[i] = new bool[n];
            for (int j = 0; j < n; j++) {
                adjMat[i][j] = false;
            }       
        }
    }

    void addEdge(int i, int j) {
        adjMat[i][j] = true;
        adjMat[j][i] = true;
    }

    void removeEdge(int i, int j) {
        adjMat[i][j] = false;
        adjMat[j][i] = false;
    }

    void dfs(int start, vector<bool> &visited)
    {   
        cout << start << " ";
        visited[start] = true;
        for (int i = 0; i < n; i++) {
            if (adjMat[start][i] == 1 && (!visited[i])) {
                    dfs(i,visited);
            }
        }
    }

    void printGraph() {
        for (int i = 0; i < n; i++) {
            cout << i << " : ";
            for (int j = 0; j < n; j++) {
                cout << adjMat[i][j] << " ";
            }
            cout << "\n";
        }
    }

};

int main() {
  Graph g(4);

  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  g.printGraph();

  vector <bool> visited(4,false);
  g.dfs(1,visited);
}