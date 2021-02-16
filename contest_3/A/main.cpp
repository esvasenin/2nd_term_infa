#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    int sum = 0;
    std::vector <int> v;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        std::cin >> tmp;
        sum += tmp;
        v.push_back(tmp);
    }
    int avg = sum / n;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > avg)
            sum+=v[i];
    }
    std::cout << sum;
    return 0;
}
