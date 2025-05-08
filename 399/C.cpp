#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;


vector<bool>seen;
int ans;

// v = 現在の頂点， p = 親の頂点
int dfs(const Graph&G, int v, int p) {
	seen[v] = true;
	for(auto next_v : G[v]) {
// 未訪問の場合は再帰関数を実行
        if(!seen[next_v]) {
            dfs(G, next_v, v);
        }
// 訪問済みかつ親でない場合は閉路であるためansをインクリメント
        else if(next_v != p) {
            ans++;
        }
		seen[next_v] = true;
	}
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;

    Graph G(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        G[a].push_back(b);
        G[b].push_back(a);
    }
// bool型配列のseenをfalseで初期化
    seen.assign(n, false);

    for(int i = 0; i < n; i++) {
        if(!seen[i]) {
            dfs(G, i, -1);
        }
    }
    cout << ans / 2 << endl;
    return 0;
}