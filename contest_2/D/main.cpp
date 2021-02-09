#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int tmp = 1;
    while (tmp < n)
    {
        tmp = tmp * 2;
    }
    if (tmp == n)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
