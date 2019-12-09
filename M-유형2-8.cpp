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
struct coord {
	int r, c;
	coord(int a1, int a2) {
		r = a1; c = a2;
	}
	coord() {
	}
};
int N = 10;
int A[10][10] = {
	{1,1,1,1,1,0,0,0,0,0},
	{0,0,1,1,1,0,0,0,0,0},
	{1,1,1,0,0,1,1,1,1,1},
	{1,1,1,0,0,1,1,1,1,1},
	{1,1,1,1,1,1,1,1,1,1},
	{1,1,1,1,1,0,0,1,1,1},
	{1,1,1,0,1,0,0,1,1,1},
	{1,1,0,0,1,1,1,1,1,1},
	{1,1,0,0,1,0,0,0,1,1},
	{1,1,0,0,1,0,0,0,1,1}
};
int D[10][10], S;
const coord X[7] = {
	{-1,-2},{-2,-1},{-1,2},{1,2},{2,1},{2,-1},{1,-2}
};
inline int inRange(int r, int c) {
	return 0 <= r && r < N && 0 <= c && c < N;
}
coord P[10];
int f(int r, int c, int idx) {
	if (idx > 8) return 0;
	if (idx == S && r == N - 1 && c == N - 1) {
		int i;
		for (i = 0; i < S; i++) {
			printf("%d %d\n", P[i].r, P[i].c);
		}
		printf("%d %d\n", N - 1, N - 1);
		return 1;
	}
	P[idx].r = r; P[idx].c = c;
	int i, nr, nc;
	for (i = 0; i < 7; i++) {
		nr = r + X[i].r; nc = c + X[i].c;
		if (!inRange(nr, nc) || A[nr][nc] == 0) continue;
		if (f(nr, nc, idx + 1)) return 1;
	}
	return 0;
}
int main() {
	queue<coord> Q;
	Q.push(coord(0, 0));
	D[0][0] = 1;
	while (!Q.empty()) {
		coord u, v; int i;
		u = Q.front(); Q.pop();
		if (u.r == N - 1 && u.c == N - 1) {
			S = D[N - 1][N - 1] - 1; break;
		}
		for (i = 0; i < 7; i++) {
			v.r = u.r + X[i].r; v.c = u.c + X[i].c;
			if (!inRange(v.r, v.c) || A[v.r][v.c]==0 || D[v.r][v.c]) continue;
			D[v.r][v.c] = D[u.r][u.c] + 1;
			Q.push(v);
		}
	}
	cout << S << endl;
	f(0, 0, 0);
	return 0;
}