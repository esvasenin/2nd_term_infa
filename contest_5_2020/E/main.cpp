#include <iostream>
#include <vector>

void show(std::vector <int>& vect, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    int n;
    std::vector <int> vect;
    std::cin >> n;
    for (int i = 0; i < n ; i++)
    {
        int tmp;
        std::cin >> tmp;
        vect.push_back(tmp);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int j = 0;
        while (j < n - 1 - i)
        {
            if (vect[j] >= 0)
            {
                int k = j+1;
                while (vect[k] < 0 && k < n - i - 1)
                    k++;
                if (vect[j] >= 0 && vect[k] >= 0 && vect[j] > vect[k])
                {
                    int tmp = vect[j];
                    vect[j] = vect[k];
                    vect[k] = tmp;
                    show(vect, n);
                }
            }
            else
            {
                int k = j+1;
                while (vect[k] >= 0 && k < n - i - 1)
                    k++;
                if (vect[j] < 0 && vect[k] < 0 && -vect[j] > -vect[k])
                {
                    int tmp = vect[j];
                    vect[j] = vect[k];
                    vect[k] = tmp;
                    show(vect, n);
                }
            }
            j++;
        }
    }
    return 0;
}
