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
int f(int n) {
	int ret = 0;
	while (n) {
		int x = n % 10;
		if (x == 3 || x == 6 || x == 9) {
			return 1;
		}
		n /= 10;
	}
	return 0;
}
int main() {
	int i, ans = 0;
	for (i = 301; i <= 1000; i++) {
		ans += f(i);
	}
	printf("%d\n", ans);
	return 0;
}