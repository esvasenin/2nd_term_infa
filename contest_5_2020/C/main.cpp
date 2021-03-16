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
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && i != n-1 )
        std::cout << (vect[i]+vect[i-1]+vect[i+1])/3 << " ";
        if (i == 0)
            std::cout << (vect[i]+vect[n-1]+vect[i+1])/3 << " ";
        if (i == n-1)
            std::cout << (vect[0]+vect[i]+vect[i-1])/3 << " ";
    }
    return 0;
}
