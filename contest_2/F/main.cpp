#include <iostream>

int main() {
    int n = 0;
    int max = 0;
    int count = 0;
    std::cin >> n;
    while (n!=0)
    {
        if (n > max)
        {
            max = n;
            count = 0;
        }
        if (n == max)
            count++;
        std::cin >> n;
    }
    std::cout << count;
    return 0;
}
