#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct en
{
    int a;
    float b;
};

int main()
{
    FILE *file;
    file = fopen("note.txt", "w");
    if (file == NULL)
    {
        printf("Error while opening the file");
    }
    else
    {
        printf("File opened successfully");

        //write to file
        char c[100] = "Hello World!\nFrom world!!!";

        int l = strlen(c);
        en e1{10, 12.3};
        fwrite(&e1, sizeof(e1), 1, file);

        fputs(c, file);
        fputc('Q', file);
        

        //Read from file
        char buf[100];
        fgets(buf, 10, file);
        printf("%s", buf);

        en e2;
        fread(&e2, sizeof(en), 1, file);
        printf("%d %f", e2.a, e2.b);

        char c1 = fgetc(file);
        printf("%c", c1);
        
        printf("%s", buf);
        fseek(file, 5, SEEK_END);
        fputs("hai", file);
        fscanf(file, buf);
    }
    fclose(file);

    return 0;
}