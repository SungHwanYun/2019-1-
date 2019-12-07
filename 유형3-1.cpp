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
typedef pair<int, int> pii;
struct customer {
	int id, w, counter_id;
};
priority_queue<pii> pq; // (end_time, counter id)
int N, K;
vector<customer> V;
int main() {
	int i;
	scanf("%d%d\n", &N, &K);
	V = vector<customer>(N);
	for (i = 0; i < N; i++) {
		scanf("%d%d\n", &V[i].id, &V[i].w);
	}
	for (i = 1; i <= K; i++) {
		pq.push({ 0, -i });
	}
	for (i = 0; i < N; i++) {
		int t = -pq.top().first, id = -pq.top().second;
		pq.pop();
		V[i].w += t; V[i].counter_id = id;
		pq.push({ -V[i].w, -id });
	}
	sort(V.begin(), V.end(), [&](const struct customer &lhs, const struct customer &rhs) {
		return lhs.w < rhs.w || (lhs.w == rhs.w && lhs.counter_id > rhs.counter_id);
	});
	ll ans = 0, k = 1;
	for (i = 0; i < N; i++, k++) {
		ans += k * (ll)V[i].id;
	}
	printf("%lld\n", ans);
	return 0;
}
