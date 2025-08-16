#include <vector>
#include <algorithm>
#include <iostream>

void removeCommand(std::vector<int> &queue, int cmd)
{
    //std::remove(queue.begin(), queue.end(), cmd); // Return value ignored
    queue.erase(std::remove(queue.begin(),queue.end(),cmd),queue.end());
}

int main()
{
    std::vector<int> queue = {1, 2, 3, 2, 4, 2, 5};
    std::cout << "Before: ";
    for (int c : queue)
        std::cout << c << " ";
    std::cout << std::endl;
    removeCommand(queue, 2);
    std::cout << "After: ";
    for (int c : queue)
        std::cout << c << " ";
    std::cout << std::endl;
    return 0;
}