#include <cstdio>

//buggy code
// cppcheck error ID: error: Resource leak: file [resourceLeak]
// cppcheck error details in concise (refer from cppcheck --doc)
// Error understanding in concise: File handle leak due to missing fclose.
// C/C++ concept involved to rectify error, specified concisely: 
/* void logData()
{
    FILE *file = fopen("log.txt", "r");
    if (file == nullptr)
    {
        return;
    }
    char buffer[100];
    fread(buffer, sizeof(char), sizeof(buffer), file);
    // File not closed
} */

void logData()
{
    FILE *file = fopen("log.txt", "r");
    if (file == nullptr)
    {
        return;
    }
    char buffer[100];
    fread(buffer, sizeof(char), sizeof(buffer), file);
    fclose(file);   // File not closed
}

int main()
{
    logData();
    return 0;
}
