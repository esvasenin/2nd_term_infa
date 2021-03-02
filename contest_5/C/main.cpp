#include <iostream>
#include <vector>
#include <cmath>

void add_simple(int k, std::vector <int>& queue, int& number)
{
    queue.push_back(k);
    number++;
    return;
}
void add_lord(int k, std::vector <int>& queue, int& number)
{
    if (number % 2 == 0)
    {
        queue.insert(queue.begin() + (number / 2), k);
        number++;
    }
    else
    {
        queue.insert(queue.begin() + ((number / 2) + 1), k);
        number++;
    }
    return;
}
int go(std::vector <int>& queue, int &number)
{
    int goblin = queue[0];
    queue.erase(queue.begin());
    number--;
    return goblin;
}

int main()
{
    int n;
    std::cin >> n;
    std::vector <int> goblins;
    int number = 0;
    std::vector <int> answer;
    for (int i = 0; i < n; i++)
    {
        char tmp_c;
        int tmp_i;
        std::cin >> tmp_c;
        if (tmp_c == '-')
        {
            answer.push_back(go(goblins, number));
        }
        else
        {
            std::cin >> tmp_i;
            if (tmp_c == '+')
                add_simple(tmp_i, goblins, number);
            if (tmp_c == '*')
                add_lord(tmp_i, goblins, number);
        }
    }
    for (int i = 0; i < answer.size(); i++)
        std::cout << answer[i] << "\n";
    return 0;
}
