#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::vector <int> vect;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        vect.push_back(tmp);
    }
    for (int i = 0; i < m; i++)
        vect.push_back(vect[i]);
    for (int i = m; i < n+m; i++)
    {
        std::cout << vect[i] << " ";
    }
    return 0;
}
