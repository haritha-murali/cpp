#include <vector>
#include <iostream>


// This causes undefined behavior because you're dereferencing an invalid iterator.
// ⛔️ What can happen?- Crash (segmentation fault), Garbage value, No output, Seemingly "correct" output (but still dangerous!)
/* void resetBuffer()
{
    std::vector<int> buffer = {1, 2, 3};
    auto it = buffer.begin();
    buffer.clear();   // Invalidates iterator
    std::cout << *it; // Dereferencing invalid iterator
} */

void resetBuffer()
{
    std::vector<int> buffer = {1, 2, 3};
    auto it = buffer.begin();
    std::cout << *it; // Dereferencing invalid iterator
    buffer.clear();   // Invalidates iterator
}

int main()
{
    resetBuffer();
    return 0;
}