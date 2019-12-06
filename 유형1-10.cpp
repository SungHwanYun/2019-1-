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
int E[6][2] = {
	{1,2},{1,2},{2,3},{2,3},{1,3},{1,3}
};
int N = 6, S[8];
int f(int u) {
	int ret = 0, i, a, b;
	if (u == 3) ret++;
	for (i = 0; i < N; i++) {
		if (S[i]) continue;
		a = E[i][0]; b = E[i][1];
		S[i] = 1;
		if (a == u) {
			ret += f(b);
		}
		else if (b == u) {
			ret += f(a);
		}
		S[i] = 0;
	}
	return ret;
}
int main() {
	int i;
	for (i = 1; i <= N; i++) S[i] = 0;
	printf("%d\n", f(1));
	return 0;
}