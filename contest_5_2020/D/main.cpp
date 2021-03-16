#include <iostream>
#include <vector>
#include <algorithm>

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
    std::sort(vect.begin(), vect.end());
    for (int i = 0; i < n; i++)
    {
        std::cout << vect[i] << " ";
    }
    return 0;
}
