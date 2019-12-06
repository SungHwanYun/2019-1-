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
	int p = 0;
	while (n) {
		int c = n % 2;
		if (p == 1 && c == 1) return 0;
		p = c;
		n /= 2;
	}
	return 1;
}
int main() {
	int i, ans = 0;
	for (i = 1; i <= 255; i++) {
		if (f(i)) ans++;
	}
	printf("%d\n", ans);
	return 0;
}