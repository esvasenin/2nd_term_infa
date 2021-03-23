#include <iostream>
#include <math.h>

int main() {
    int m = 0, n = 2;
    int a, b, c, d, x;
    std::cin >> a >> b >> c >> d >> x;
    if (x == (b - a))
        m++;
    if (x == d/c && d%c == 0)
        m++;
    if (x == 1024 && m == 0)
        n = 3;
    if (m == 1)
        n = 4;
    if (m == 2)
        n = 5;
    std::cout << n;

    return 0;
}
