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
int E[4] = { -3,-5,2,7 }, D[20004], M = 10000;
queue<int> Q;
int main() {
	int i, u, v;
	for (i = -M; i <= M; i++) D[i + M] = -1;
	D[M] = 0; Q.push(0);
	while (1) {
		u = Q.front(); Q.pop();
		if (u == -2) {
			printf("%d\n", D[M + u]); break;
		}
		for (i = 0; i < 4; i++) {
			v = u + E[i];
			if (D[M + v] != -1) continue;
			D[M + v] = D[M + u] + 1;
			Q.push(v);
		}
	}
	return 0;
}