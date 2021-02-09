#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector <int> a;
    for (int i = 0; i <= n; i++)
        a.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 1)
            for (int j = 2*i; j <= n; j+=i)
                a[j] = 0;
    }
    std::cout << a[n];
    return 0;
}
