#include <iostream>

struct Human
{
    std::string name;
    bool knight;

    Human(std::string s, bool f)
    {
        name = s;
        knight = f;
    }
};

int main() {
    int n, m;
    bool news;
    std::vector <Human> v;
    std::cin >> n >> news;
    for (int i = 0; i < n; i++)
    {
        std::string s;
        bool f;
        std::cin >> s >> f;
        Human tmp = Human(s, f);
        v.push_back(tmp);
    }
    std::cin >> m;
    for (int i = 0; i < n; i++)
    {
        std::cout << v[i].name;
    }
    return 0;
}
