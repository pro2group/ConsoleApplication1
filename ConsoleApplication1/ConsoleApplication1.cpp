#include <iostream>
#include <vector>
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
pair<int, int> search(const vector<vector<int>>& array, int target, int row, int col) {
    if (row >= array.size()) return { -1, -1 };
    if (col >= array[row].size()) return search(array, target, row + 1, 0);
    if (array[row][col] == target) return { row + 1, col + 1 };
    return search(array, target, row, col + 1);
}
int main() {
    int n = 5;
    cout << fib(n);
    int a, b;
    cin >> a >> b;
    cout << ackermann(a, b) << endl;
    vector<vector<int>> array = {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, 9 }
    };
    int target = 5;
    auto result = search(array, target, 0, 0);
    if (result.first != -1)
        cout << "Число " << target << " найдено в (" << result.first << ", " << result.second << ")" << endl;
    else
        cout << "Число " << target << " не найдено" << endl;
}
