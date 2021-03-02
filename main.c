#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    int size1 = 5;
    int size2 = size1 + 5;
    char *dst = (char*)malloc(size1); // allocation size is 5 bytes
    char *src = (char*)malloc(size2); // allocation size is 10 bytes
    if (strcmp(argv[1], "change") == 0)
        size1 = 15;
        
    memcpy(dst, src, size1);
    
    return 0;
}
