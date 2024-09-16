// @author :  Y Sai Koushik reddy
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define v vector<int>
#define f(i, k, n) for (int i = k; i < n; i++)
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define go(a, x) for (auto &a : x)
#define yn(a) cout << ((a) ? "yes\n" : "no\n")
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define umii unordered_map<int, int>
#define si set<int>
#define usi unordered_set<int>
#define msi multiset<int>

int NcR(int n, int r) {
    long long p = 1, k = 1;
    if (n - r < r) r = n - r;
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    } else p = 1;
    return p;
}

void solve(int low, int high, int mid, vector<int>& a, vector<int>& ans) {
    int n1 = mid - low + 1;
    int n2 = high - mid;
    v L(n1);
    v M(n2);
    f(i, 0, n1) L[i] = a[low + i];
    f(j, 0, n2) M[j] = a[mid + 1 + j];
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (L[i] > M[j]) {
            ans[k] = n2 - j;
            a[k] = L[i];
            i++;
        } else {
            a[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1) a[k++] = L[i++];
    while (j < n2) a[k++] = M[j++];
}

void merge(int low, int high, vector<int>& a, vector<int>& ans) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        merge(low, mid, a, ans);
        merge(mid + 1, high, a, ans);
        solve(low, high, mid, a, ans);
    }
}

void recur(v &a, int idx, int &n, set<vector<int>> &st, vector<int> &temp) {
    if (idx == n) {
        st.insert(temp);
        return;
    }
    temp.pb(a[idx]);
    recur(a, idx + 1, n, st, temp);
    temp.pop_back();
    recur(a, idx + 1, n, st, temp);
}

bool lcm(int a, int b, int x) {
    return (x == (a * b) / __gcd(a, b));
}
void run() {
    // Code here
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--) {
        run();
    }
    return 0;
}
