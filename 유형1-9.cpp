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
int A[4] = { 3,4,5,6 }, N = 4;
int f(int n) {
	int i, j, k, a, b, c, ret = 0;
	for (i = 0; i < N; i++) for (j = i + 1; j < N; j++) {
		a = A[i]; b = A[j];
		int found = 0;
		k = 1;
		while (1) {
			c = n - a * k;
			if (c <= 0) break;
			if (c%b == 0) {
				found = 1; break;
			}
			k++;
		}
		if (found == 0) return 0;
	}
	return 1;
}
int main() {
	int i=11;
	while (1) {
		if (f(i)) {
			printf("%d\n", i);
			break;
		}
		i++;
	}
	return 0;
}