#include <iostream>

int do_some_awesome_work(int* a, int* b);

int main()
{
    int a,b;
    std::cin >> a >> b;
    std::cout << do_some_awesome_work(&a, &b);
    return 0;
}
