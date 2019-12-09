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
	int x = 2019 * 2021, ans = 0;
	while (x) {
		if ((x & 0x1) == 0x0) break;
		ans++;
		x /= 2;
	}
	cout << ans << endl;
	return 0;
}