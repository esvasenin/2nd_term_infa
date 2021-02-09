#include <iostream>

int main() {
    int n = 0;
    int max = 0;
    std::cin >> n;
    while (n!=0)
    {
        if (n%2==0)
            if (n > max)
                max = n;
        std::cin >> n;
    }
    std::cout << max;
    return 0;
}
