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
int D[12];
int f(int n) {
	if (n <= 2) return D[n];
	int &ret = D[n]; if (ret != -1) return ret;
	ret = f(n - 2) + f(n - 1);
	return ret;
}
int main() {
	D[0] = 1; D[1] = 1; D[2] = 2;
	for (int i = 3; i <= 10; i++) D[i] = -1;
	cout << f(10) << endl;
	return 0;
}