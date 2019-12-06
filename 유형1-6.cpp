#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib> 
#include <ctime>
#include <unordered_map>
using namespace std;
typedef long long ll;

int X[6][2] = { {1,2},{1,3},{1,4},{2,3},{2,4},{3,4} };
int E[6][6], ans = 0;
void g() {
	int x[5], i, j;
	for (i = 1; i <= 4; i++) x[i] = 0;
	for (i = 1; i <= 4; i++) for (j = i + 1; j <= 4; j++) {
		if (E[i][j]) x[i] = x[j] = 1;
	}
	for (i = 1; i <= 4; i++) if (x[i] == 0) break;
	if (i == 5) ans++;
}
void f(int idx) {
	if (idx == 6) {
		g();
		return;
	}
	f(idx + 1);
	int u, v;
	u = X[idx][0]; v = X[idx][1];
	E[u][v] = 1;
	f(idx + 1);
	E[u][v] = 0;
}
int main() {
	int i;
	f(0);
	printf("%d\n", ans);
}