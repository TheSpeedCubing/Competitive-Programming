#include <iostream>

using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    int bruh = 2 , i = 2;
    for (; i < a + b; i++)
      bruh += i;
    printf("%d\n", bruh - (((a + b) %2==1) ? a : b));
  }
}