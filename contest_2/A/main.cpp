#include <iostream>

int evklid(int a, int b)
{
    while (b!=0)
    {
        a = a%b;
        int tmp = a;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << evklid(a,b);
    return 0;
}
