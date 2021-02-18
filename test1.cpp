#include<iostream>
using namespace std;

char *buffer = NULL;

int main(int argc, char **argv)
{
    int size1 = 5;
    int size2 = size1 + 5;
    char *dst = malloc(size1); // allocation size is 5 bytes
    char *src = malloc(size2); // allocation size is 10 bytes
    if (strcmp(argv, "change") == 0)
        size1 = 15;
        
    memcpy(dst, src, size1);
}


