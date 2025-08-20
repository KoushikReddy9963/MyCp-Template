#include <bits/stdc++.h>
using namespace std;

typedef long long i64;
typedef unsigned long long ui64;
typedef long double i64d;

#define debug(x)        \
   cerr << #x << " = "; \
   dbg(x);              \
   cerr << endl;

// Basic dbg overloads
void dbg(int t) { cerr << t; }
void dbg(i64 t) { cerr << t; }
void dbg(ui64 t) { cerr << t; }
void dbg(double t) { cerr << t; }
void dbg(i64d t) { cerr << t; }
void dbg(char t) { cerr << t; }
void dbg(string t) { cerr << t; }

// Templates
template <class T, class V>
void dbg(pair<T, V> p) {
   cerr << "{";
   dbg(p.first);
   cerr << ", ";
   dbg(p.second);
   cerr << "}";
}
template <class T>
void dbg(vector<T> v) {
   cerr << "[";
   bool first = true;
   for (const auto& i : v) {
      if (!first) cerr << ", ";
      first = false;
      dbg(i);
   }
   cerr << "]";
}
template <class T>
void dbg(unordered_set<T> v) {
   cerr << "{";
   bool first = true;
   for (const auto& i : v) {
      if (!first) cerr << ", ";
      first = false;
      dbg(i);
   }
   cerr << "}";
}
template <class T>
void dbg(multiset<T> v) {
   cerr << "{";
   bool first = true;
   for (const auto& i : v) {
      if (!first) cerr << ", ";
      first = false;
      dbg(i);
   }
   cerr << "}";
}
template <class T, class V>
void dbg(map<T, V> v) {
   cerr << "{";
   bool first = true;
   for (const auto& i : v) {
      if (!first) cerr << ", ";
      first = false;
      dbg(i.first);
      cerr << ": ";
      dbg(i.second);
   }
   cerr << "}";
}

void Solve() {
   
   return;
}

int main() {
   cin.tie(nullptr)->sync_with_stdio(false);
   int t = 1;
   cin >> t;
   while (t--) {
      Solve();
   }
   return 0;
}