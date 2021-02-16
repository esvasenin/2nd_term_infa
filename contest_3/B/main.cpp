#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    std::vector <std::vector <int>> v;
    for (int i = 0; i < n; i++)
    {
        std::vector <int> tmp;
        for (int j = 0; j < m; j++)
        {
            tmp.push_back(0);
        }
        v.push_back(tmp);
    }
    for (int i = 0; i < k; i++)
    {
        int x,y;
        std::cin >> x >> y;
        v[x-1][y-1] = -1;

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] != -1)
            {
                if (i > 0 && j > 0 && v[i - 1][j - 1] == -1)
                    v[i][j]++;
                if (i > 0 && v[i - 1][j] == -1)
                    v[i][j]++;
                if (i > 0 && j < m - 1 && v[i - 1][j + 1] == -1)
                    v[i][j]++;
                if (j > 0 && v[i][j - 1] == -1)
                    v[i][j]++;
                if (j < m - 1 && v[i][j + 1] == -1)
                    v[i][j]++;
                if (i < n - 1 && j > 0 && v[i + 1][j - 1] == -1)
                    v[i][j]++;
                if (i < n - 1 && v[i + 1][j] == -1)
                    v[i][j]++;
                if (i < n - 1 && j < m - 1 && v[i + 1][j + 1] == -1)
                    v[i][j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << v[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
