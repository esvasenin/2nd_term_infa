#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector <int> vect;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        vect.push_back(tmp);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        std::cout << vect[i] << " ";
    }
    return 0;
}
