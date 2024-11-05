#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
1 - 2 - 4
| / | 
0   3
*/

void DFSRec(vector<vector<int>>& adjv, vector<bool>& visited, int s) {
	visited[s] = true;

	cout << s << " ";
	for (int i : adjv[s]) {
		if (visited[i] == false) {
			DFSRec(adjv, visited, i);
		}
	}
}

void BFS(vector<vector<int>>& adjv, int s) {
	vector<bool> visited(adjv.size(), false);
	visited[s] = true;

	queue<int> q;
	q.push(s);
	while (!q.empty()) {
		int c = q.front();
		q.pop();
		cout << c << " ";
		for (int i : adjv[c]) {
			if (visited[i] == false) {
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

// DFS function that initializes the visited array and call DFSRec
void DFS(vector<vector<int>>& adjv, int s) {
	vector<bool> visited(adjv.size(), false);
	DFSRec(adjv, visited, s);
}

void addEdge(vector<vector<int>>& adjv, int l, int r) {
	adjv[l].push_back(r);
	adjv[r].push_back(l);
}

int main(void) {
	vector<vector<int>> edges;
	vector<vector<int>> adjv(7); // 5 is the number of vertexes
	int s; // starting vertex for DFS

	edges =  {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
	for (auto& e : edges) {
		addEdge(adjv, e[0], e[1]);
	}
	cout << "DFS/BFS from source[0-6]: ";
	cin >> s; 

	DFS(adjv, s);
	cout << endl;
	BFS(adjv, s);

	return 0;
}