/*
Solution:
(1) Relabel the tree in the pre-order traversal (so that subtrees form ranges)
Then, to answer updates/querys
- Type 1 (fill a range): We check, is the sum of our subtree is >= 1. 
  If yes, set our parent to 1.
  Regardless, set our entire subtree to 0 (i.e. unmark everything) -> Range update

- Type 2 (unfill a node and its ancestors): Set the value of the node to 1

- Type 3 (does a node have water?): Check if sum of subtree is >= 1 -> range query

*/


#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <set>


using namespace std;

#define N 500010

struct Node {
    bool value;
    bool needsProp;
};

Node nodes[N];

void propogate(int i, long long l, long long r) {
    if (nodes[i].needsProp) {
        // prop the left
        // pro the right
        nodes[i * 2].value = nodes[i * 2 + 1].value = nodes[i].value;
        nodes[i * 2].needsProp = nodes[i * 2 + 1].needsProp = true;

        // needs prop is now false
        nodes[i].needsProp = false;
    }
}

// update -> replace
void update(int uL, int uR, bool v, int i = 1, int cLeft = 0, int cRight = N) {
    // if we are outside of the bounds, then return false;
    if (cLeft >= uR || cRight <= uL) return;

    // are we completely inside the bounds
    if (cLeft >= uL && cRight <= uR) {
        nodes[i].needsProp = true;
        nodes[i].value = v;
    }


    // if we need to go further
    // propogation

    propogate(i, cLeft, cRight);

    // recurse to the left, and then the right if necessary
    int mid = (cLeft + cRight) / 2;

    update(uL, uR, v,  i * 2, cLeft, mid);
    update(uL, uR, v,  i * 2 + 1, mid, cRight);

}



bool query(int qL, int qR, int i = 1, int cLeft = 0, int cRight = N) {
    // if we are outside of the bounds, then return false;
    if (cLeft >= qR || cRight <= qL) return false;

    // are we completely inside the bounds
    if (cLeft >= qL && cRight <= qR) return nodes[i].value;


    // if we need to go further
    // propogation

    propogate(i, cLeft, cRight);

    // recurse to the left, and then the right if necessary
    int mid = (cLeft + cRight) / 2;

    if (query(qL, qR,  i * 2, cLeft, mid)) return true;
    
    if (query(qL, qR,  i * 2 + 1, mid, cRight)) return true;

    return false;
}

int range[N][2];
int upto;
bool seen[N];
int parent[N];
void dfs(int curr, int par) {
    if (seen[curr]) return;

    range[curr][0] = upto;
    upto++;
    parent[curr] = par;

    for (auto i : edges[curr]) {
        dfs(i, curr);
    }

    range[curr][1] = upto;
}


int n;
vector<int> edges[N];

int main(void) {
    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    dfs(1, -1);
    // precomputation
    // squish out tree to make it flat
    // figure out where the ranges start and end

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {

        int t, v;
        cin >> t >> v;

        // - Type 1 (fill a range): We check, is the sum of our subtree is >= 1. 
        //   If yes, set our parent to 1.
        //   Regardless, set our entire subtree to 0 (i.e. unmark everything) -> Range update
        if (t == 1) {
            if (query(range[v][0], range[v][1])) {
                update(range[parent[v]][0], range[parent[v]][0], 1);
            }
            update(range[v][0], range[v][1], 0);
        
        // - Type 2 (unfill a node and its ancestors): Set the value of the node to 1
        } else (t == 2) {
            update(range[v][0], range[v][0] + 1);
        
        // - Type 3 (does a node have water?): Check if sum of subtree is >= 1 -> range query
        } else {
            cout << !query(range[v][0], range[v][1]) << "\n";
        }
    }
}