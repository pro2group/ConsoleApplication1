#include <iostream>
using namespace std;
int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int ackermann(int m, int n) {
    if (m == 0) return n + 1;
    if (m == 1) return n + 2;
    if (m == 2) return 2 * n + 3;
    if (m == 3) return (1 << (n + 3)) - 3;
    return ackermann(m - 1, ackermann(m, n - 1));
}
int main() {
    int n = 5;
    cout << fib(n);
    int a, b;
    cin >> a >> b;
    cout << ackermann(a, b) << endl;

}
