#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

class A
{
public:
    std::string text;

    // note: no constructor needed in this case!
};

int main()
{
    // using aggregate initialization instead of calling constructor and push_back
    std::vector<A> elements = {{"hi1"}, {"hi2"}, {"hi3"}};

    std::vector<std::string> texts;
    texts.resize(elements.size());                   // create all std::string objects
    std::transform(elements.begin(), elements.end(), // input iterators
                   texts.begin(),                    // output iterator
                   [](const A &elem)
                   { return elem.text+"u"; }); // lambda which maps A to std::string

    for (auto x : texts)
    {
        std::cout << x << std::endl;
    }
}