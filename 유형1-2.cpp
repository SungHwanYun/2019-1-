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
int A[12] = { 1,1,2,3,8,12,24,42,77,145,267,496 }, N = 12;
int triangle(int a, int b, int c) {
	if (a >= b && a >= c && a < b + c) return 1;
	if (b >= a && b >= c && b < a + c) return 1;
	if (c >= a && c >= b && c < a + b) return 1;
	return 0;
}
int f(int x[4]) {
	int i, j, k, l;
	for (i = 0; i < 4; i++) for (j = i + 1; j < 4; j++) {
		for (k = 0; k < 4; k++) if (k != i && k != j) break;
		for (l = 0; l < 4; l++) if (l != i && l != j && l != k) break;
		if (x[i] == x[j] && x[k] == x[l]) return 1;
		if (x[i] != x[j] && triangle(abs(x[i] - x[j]), x[k], x[l])) return 1;
	}
	return 0;
}
int main() {
	int i, j, k, l, ans = 0;
	for (i = 0; i < N; i++) for (j = i + 1; j < N; j++) for (k = j + 1; k < N; k++) for (l = k + 1; l < N; l++) {
		int x[4] = { A[i],A[j],A[k],A[l] };
		if (f(x)) {
			ans = max(ans, A[i] + A[j] + A[k] + A[l]);
		}
	}
	printf("%d\n", ans);
}