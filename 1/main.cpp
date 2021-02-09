#include <iostream>
#include <vector>

int main() {
    int a,n;
    std::cin >> a >> n;
    std::vector <int> vect;
    for (int i = 0; i < n; i++)
    {
        vect.push_back(a*(i+1));
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << vect[i] << " ";
    }
    return 0;
}
