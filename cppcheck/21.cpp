#include <vector>
#include <iostream>

/* int main()
{
    std::vector<int> stream = {1, 2, 3};
    std::vector<int>::iterator it = stream.end(); // Past-the-end
    std::cout << *it << std::endl;                // Invalid dereference
    return 0;
} */

int main()
{
    std::vector<int> stream = {1, 2, 3};
    std::vector<int>::iterator it = stream.begin(); // Past-the-end
    std::cout << *it << std::endl;                // Invalid dereference
    return 0;
}
