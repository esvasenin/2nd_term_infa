#include <iostream>

int main() {
    int n = 0;
    std::cin >> n;
    int count = 0;
    while (n!=0)
    {
        if (n%2==0)
            count++;
        std::cin >> n;
    }
    std::cout << count;
    return 0;
}
