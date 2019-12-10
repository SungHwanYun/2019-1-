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
int N, S, A[20], X[2600004];
void f(int idx, int l, int r) {
	if (idx == N) {
		X[abs(l - r)] = 1;
		return;
	}
	f(idx + 1, l, r); f(idx + 1, l + A[idx], r); f(idx + 1, l, r + A[idx]);
}
int main() {
	freopen("C:\\알고리즘\\코딩\\google\\a.txt", "r", stdin);
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++) scanf("%d", A + i);
	for (int i = 0; i < N; i++) S += A[i];
	f(0, 0, 0);
	int ans = 0;
	for (int i = 1; i <= S; i++) {
		if (X[i] == 0) ans++;
	}
	printf("%d\n", ans);
	return 0;
}