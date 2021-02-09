#include <iostream>
#include <vector>

long long fibbonaci (int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return fibbonaci(n-2) + fibbonaci(n-1);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibbonaci(n);
    return 0;

}
