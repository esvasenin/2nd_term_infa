#include <iostream>

int main() {
    int f_int = 1;
    int n_int = 1;
    while (f_int  < INT_MAX / n_int)
    {
        f_int = f_int * n_int;
        n_int++;
    }
    std::cout << f_int << " " << --n_int << std::endl;


    long f_long = 1;
    long n_long = 1;
    while (f_long < LONG_MAX / n_long)
    {
        f_long = f_long * n_long;
        n_long++;
    }
    std::cout << f_long << " " << --n_long << std::endl;


    long long f_ll= 1;
    long long n_ll = 1;
    while (f_ll < LLONG_MAX / n_ll)
    {
        f_ll = f_ll * n_ll++;
    }
    std::cout << f_ll << " " << --n_ll << std::endl;


    long long f = 1;
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++)
        f = f * i;
    std::cout << f;
    return 0;
}
