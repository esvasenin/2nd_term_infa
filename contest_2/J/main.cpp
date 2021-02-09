#include <iostream>

int main() {
    int number;
    std::cin >> number;
    std::string s;
    while (number > 0)
    {
        int tmp = number%60;
        int ten = tmp/10;
        int one = tmp%10;
        for (int i = 0; i < one; i++)
            s+='v';
        for (int i = 0; i< ten; i++)
            s+='<';
        s+='.';
        number = number/60;
    }
    for (int i = s.length() - 2; i>=0; i--)
        std::cout << s[i];
    return 0;
}
