#include <iostream>

void func(int n)
{
    if (n==1)
        return;
    int i = 2;
    while (n%i!=0 && i<=n)
        i++;
    if (n%i == 0)
    {
        std::cout << i << "\n";
        func(n/i);
    }
    else
    {
        std::cout << n;
        func(1);
    }
}

int main() {
    int n;
    std::cin >> n;
    func(n);
    return 0;
}
