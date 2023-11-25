#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n;
vi as;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	as = vi(n);
	for (auto&& a : as) {
		cin >> a;
	}

	for (auto i = 0; i < n; ++i) {
		for (auto j = 0; j < n; ++j) {
			if (i == j) {
				continue;
			}

			for (auto k = 0; k < n; ++k) {
				if (i == k || j == k) {
					continue;
				}

				const auto p = as[i] - as[j];
				const auto q = as[k];
				const auto r = p % q;

				if (0 != r) {
					cout << "no";
					return 0;
				}
			}
		}
	}

	cout << "yes";

	return 0;
}