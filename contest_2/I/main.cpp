#include <iostream>
#include <string>

int main() {
    int vel;
    std::string number;
    std::cin >> vel >> number;
    int count = 0;
    while (number!="A999AA")
    {
        if (vel > 60)
        {
            char a = number[1];
            char b = number[2];
            char c = number[3];
            if (a != b && b != c && a != c)
            {
                count +=100;
            }
            if ((a == b && b != c) || (a == c && b != c) || (b == c && a != c))
            {
                count +=500;
            }
            if (a == b && b == c)
            {
                count += 1000;
            }
        }
        std::cin >> vel >> number;
    }
    std::cout << count;
    return 0;
}
