#include <iostream>
#include <vector>
#include <cmath>


int main() {
    int depth = 0, high = 0, tmp;
    std::vector <int> stack;
    stack.push_back(0);
    std::cin >> tmp;
    while (tmp != 0)
    {
        if (tmp > 0)
        {
            stack.push_back(tmp);
            high = tmp;
            depth++;
        }
        if (tmp < 0 && depth!=0)
        {
            if ( abs(tmp) >= high )
            {
                stack.pop_back();
                high = stack[stack.size() - 1];
                depth--;
            }
            else
            {
                high = stack[stack.size() - 1] + tmp;
                stack[stack.size() - 1] = high;
            }
        }
        std::cin >> tmp;
    }
    if (depth == 0)
        high = -1;
    std::cout << depth << " " << high;

    return 0;
}
