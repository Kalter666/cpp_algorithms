#include <iostream>

using namespace std;

static const int N = 1000;

int main() {
  int i, a[N];
  for (i = 2; i < N; i++) {
    a[i] = 1;
  }

  for (i = 1; i < N; i++) {
    if (a[i]) {
      for (int j = 1; j * i < N; j++) {
        a[i * j] = 0;
      }
    }
  }

  for (i = 2; i < N; i++) {
    cout << " " << i;
  }

  cout << endl;
}