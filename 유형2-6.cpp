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
int A[5][4] = {
	{2,1,4,3},{1,2,4,3},{1,4,2,3},{1,2,3,4},{4,1,2,3}
};
int R, C, S[5];
int f(int r) {
	if (r == 5) {
		int sum = 0, i;
		for (i = 0; i < R; i++) {
			sum += A[i][S[i]];
		}
		return sum;
	}
	int ret = INT_MAX, i;
	for (i = 0; i < C; i++) {
		if (r != 0 && S[r - 1] == i) continue;
		S[r] = i;
		ret = min(ret, f(r + 1));
	}
	return ret;
}
int main() {
	R = 5; C = 4;
	printf("%d\n", f(0));
	return 0;
}