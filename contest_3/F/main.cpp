#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new)
{
    if (n_new == 0)
    {
        if (source == NULL)
        {
            return NULL;
        }
        else
        {
            delete [] source;
            return NULL;
        }
    }
    if (source == NULL)
    {
        return new int[n_new];
    }
    int* p = new int[n_new];
    int tmp = n_new;
    if (n_new > n_old)
        tmp = n_old;
    for (int i = 0; i < tmp; i++)
    {
        p[i] = source[i];
    }
    delete [] source;
    return p;
}

int main() {
    unsigned int n, i;
    cin >> n;
    int *a = my_slightly_dumb_reallocation(NULL, 0, n / 2);
    for (i = 0; i < n / 2; i++)
        cin >> a[i];
    a = my_slightly_dumb_reallocation(a, n / 2, n);
    for (; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    cout << sum << endl;
    a = my_slightly_dumb_reallocation(a, n, n / 2);
    a = my_slightly_dumb_reallocation(a, n / 2, 0);
    a = my_slightly_dumb_reallocation(a, 0, 0);
    return 0;
}