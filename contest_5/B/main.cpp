#include <iostream>
#include <vector>

std::string func(std::string oper, std::string a, std::string b)
{
    int x = std::stoi(a);
    int y = std::stoi(b);
    int res = 0;
    if (oper == "*")
    {
        res = x * y;
    }
    if (oper == "/")
    {
    res = x / y;
    }
    if (oper == "-")
    {
    res = x - y;
    }
    if (oper == "+")
    {
    res = x + y;
    }
    return std::to_string(res);
}

int main() {
    std::string s;
    std::getline(std::cin, s);
    std::vector <std::string> v;
    std::vector <std::string> stack;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' && i > j)
        {
            v.push_back(s.substr(j, i - j));
            j = i + 1;
        }
        if (s[j] == ' ')
            j++;

    }
    v.push_back(s.substr(j, s.size() - j));

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/")
            stack.push_back(v[i]);
        else
        {
            std::string tmp = func(v[i], stack[stack.size() - 2], stack[stack.size() - 1]);
            stack.pop_back();
            stack.pop_back();
            stack.push_back(tmp);
        }
    }

    std::cout << stack[0];
    return 0;
}
