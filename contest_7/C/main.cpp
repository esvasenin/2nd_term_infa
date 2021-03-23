#include <iostream>
#include <cmath>


int main() {
    int tmp;
    int sum = 0, sum2 = 0, count = 0;
    std::cin >> tmp;
    while (tmp != 0)
    {
        count++;
        sum+= tmp;
        sum2+= tmp*tmp;
        std::cin >> tmp;
    }
    float m = sum / count;
    float d = sum2 / count - m*m;
    m = round(1000*m)/1000;
    d = round(1000*d)/1000;
    std::cout << m << " " << d;
    return 0;
}
