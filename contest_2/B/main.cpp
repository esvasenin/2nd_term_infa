#include <iostream>

bool check(int a)
{
    if (a%400 == 0)
        return true;
    if (a%4 == 0 && a%100!=0)
        return true;
    return false;
}

int main() {
    int a;
    std::cin >> a;
    if (check(a))
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}
