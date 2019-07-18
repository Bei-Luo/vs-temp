//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <string>
//#include <string.h>
//#include <vector>
//#include <set>
//#include <queue>
//#include <map>
//#include <stack>
//#include <sstream>
//#include <utility>
//const int N = 1e4 + 10;
//using namespace std;
//int n, m;
//struct node { int x, y; char c; }a[2 * N];
//int fa[N]; vector<int>g[N]; int in_[N], tot;
//void init() {
//	for (int i = 1; i <= n; i++) fa[i] = i, in_[i] = 0, g[i].clear();
//}
//int find(int x) {
//	if (fa[x] == x) return x;
//	else return fa[x] = find(fa[x]);
//}
//void unite(int x, int y) {
//	x = find(x), y = find(y);
//	if (x != y) fa[x] = y, tot--;
//}
//int main() {
//	while (~scanf("%d%d", &n, &m)) {
//		init(); tot = n;
//		for (int i = 1; i <= m; i++) {
//			scanf("%d %c %d", &a[i].x, &a[i].c, &a[i].y);
//			a[i].x++, a[i].y++;
//			if (a[i].c == '=') unite(a[i].x, a[i].y);
//		}
//		for (int i = 1; i <= m; i++) {
//			int x = find(a[i].x), y = find(a[i].y);
//			if (a[i].c == '>') g[x].push_back(y), in_[y]++;
//			else if (a[i].c == '<') g[y].push_back(x), in_[x]++;
//		}
//		//????????????1-n????,????,????
//		//??????????????????
//		queue<int>q; int flag = 1;
//		for (int i = 1; i <= n; i++)
//			if (in_[i] == 0 && find(i) == i) q.push(i);
//		while (!q.empty()) {
//			if (q.size() > 1) flag = 0;
//			int u = q.front(); q.pop(); tot--;
//			for (int i = 0; i < g[u].size(); i++) {
//				int v = g[u][i]; in_[v]--;
//				if (in_[v] == 0)  q.push(v);
//			}
//		}
//		if (tot > 0) printf("CONFLICT\n");
//		else if (!flag) printf("UNCERTAIN\n");
//		else printf("OK\n");
//	}
//	return 0;
//}