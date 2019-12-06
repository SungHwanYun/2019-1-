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
int main() {
	int i, j, N = 0, n, d;
	for (i = 1; i <= (int)1e6; i++) {
		j = i; n = 0;
		while (j > 0) {
			n++; j /= 10;
		}
		if (N + n < (int)2e6) {
			N += n;
			continue;
		}

		d = (int)2e6 - N;
		int x = 1;
		for (j = 1; j < n; j++) x *= 10;
		j = i;
		while (1) {
			int a = j / x;
			d--;
			if (d == 0) {
				printf("%d\n", a);
				return 0;
			}
			j -= a * x; x /= 10;
		}
	}
	return 0;
}