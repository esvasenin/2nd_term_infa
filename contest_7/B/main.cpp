#include <iostream>

void check(int tmp, int &count)
{
    if (tmp%4 == 0 && tmp/1000 != 4 && tmp/1000 != 5)
    {
        count++;
        std::cout << tmp << "\n";
        return;
    }
    if (tmp%7 == 0 && tmp/1000 != 7 && tmp/1000 != 1)
    {
        count++;
        std::cout << tmp << "\n";
        return;
    }
    if (tmp%9 == 0 && tmp/1000 != 9 && tmp/1000 != 8)
    {
        count++;
        std::cout << tmp << "\n";
        return;
    }
}

int main() {
    int n;
    std::cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int tmp = 0;
        std::cin >> tmp;
        check(tmp, count);
    }
    if (count == 0)
        std::cout << 0;
    return 0;
}
