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
int AB[5][2] = { {2,3},{15,18},{5,23},{31,47},{14,21} };
// ax+by=48
void f(int a, int b) {
	int x, y, z;
	for (x = -10000; x <= 10000; x++) {
		z = 48 - a * x;
		if (z%b == 0) {
			y = z / b;
			printf("(a,b,x,y) = (%d, %d, %d, %d)\n", a, b, x, y);
			break;
		}
	}
}
int main() {
	int i;
	for (i = 0; i < 5; i++) {
		f(AB[i][0], AB[i][1]);
	}
}