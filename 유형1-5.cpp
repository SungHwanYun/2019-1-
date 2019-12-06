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
	if (n == 0) return 0;
	if (n < 10) return 1;
	int x = n;
	while (x >= 10) x /= 10;
	return f(n - x) + 1;
}
int main() {
	int i;
	for (i = 11; i <= 100; i++) {
		if (f(i) == 20) printf("%d\n", i);
	}
	return 0;
}