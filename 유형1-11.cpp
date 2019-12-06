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
char S[10];
int N = 0;
int palindrome() {
	int i = 0, j = 8;
	while (i < j) {
		if (S[i] != S[j]) return 0;
		i++; j--;
	}
	return 1;
}
int f(int idx) {
	if (idx == 9) {
		if (palindrome()) {
			N++;
			if (N == 200) {
				printf("%s\n", S);
				return 1;
			}
		}
		return 0;
	}
	S[idx] = 'a';
	if (f(idx + 1)) return 1;
	S[idx] = 'b';
	if (f(idx + 1)) return 1;
	S[idx] = 'c';
	if (f(idx + 1)) return 1;
	return 0;
}
int main() {
	S[9] = '\0';
	f(0);
	return 0;
}