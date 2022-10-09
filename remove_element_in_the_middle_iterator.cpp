#include <vector>
#include <string>
#include <iostream>

int main()
{
    std::vector<int> values = {1, 23, 4, 4, 5, 6};

    int counter = 0;

    for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
    {
        if (counter == 3)
        {
            it = values.erase(it);
        }
        counter++;
    }

    for (auto x : values)
    {
        std::cout << x << std::endl;
    }

    std::string name = "vitor";
    
    counter = 0;

    for (std::string::iterator it = name.begin(); it != name.end(); it++)
    {
        if (counter == 3)
        {
            it = name.erase(it);
        }
        counter++;
    }

    for (auto x : name)
    {
        std::cout << x << std::endl;
    }
}