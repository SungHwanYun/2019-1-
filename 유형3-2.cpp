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
map<pair<ll,ll>,int> mp;
int f(ll ss, ll ee) {
	if (ss == 0 && ee == 0) return 0;
	if (mp.find({ ss,ee }) != mp.end()) return mp[{ss, ee}];
	ll s, e, sum1 = 0, sum2 = 0; int i, ret = 0;
	for (i = 0; i < 40; i++) {
		ll d = (1ll) << i;
		sum2 = sum1 + d;
		if (sum2 - 1 < ss || ee < sum1) {
			sum1 = sum2;
			continue;
		}
		s = max(ss - sum1, 0ll);
		if (ee >= sum2) {
			e = d - 1;
		}
		else {
			e = ee - sum1;
		}
		ret = max(ret, f(s, e) + i);
		sum1 = sum2;
	}
	return mp[{ss, ee}] = ret;
}
int main() {
	int T, s, e;
	scanf("%d\n", &T);
	while (T-- > 0) {
		scanf("%d%d", &s, &e);
		printf("%d\n", f(s, e));
	}
	return 0;
}