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
int A[30] = { 4,-1,3,0,1,-2,5,-2,4,-1,2,-2,4,-1,3,0,1,-2,5,-2,4,-1,2,-2 }, N = 12;
int main() {
	int i, j, ans = INT_MIN;
	for (i = 0; i < N; i++) {
		int x = 0;
		for (j = i; j < i + N; j++) {
			x += A[j];
			ans = max(ans, x);
			if (x < 0) x = 0;
		}
	}
	cout << ans << endl;
	return 0;
}