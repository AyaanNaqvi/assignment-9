#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void bfs(int start, vector< vector<int>>&l) {
    int n=l.size();
queue<int> Q;
    vector <bool> visited(n,false);
    visited[start] = true;

Q.push(start);

while (Q.size()>0) {
    int u= Q.front();
    Q.pop();
    cout<<u;
    for ( int v: l[u]) {
        if (!visited[v]) {
            visited[v]=true;
            Q.push(v);

        }
    }
}


}
int main() {

    vector<vector<int>> l = {
        {1, 2},
        {0, 3},
        {0, 3},
        {1, 2}
    };


    bfs(0, l);
}

