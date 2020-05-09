#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    const int pageSize = 4096;

    unsigned int address;

    unsigned int pageNum;

    unsigned int offset;

    address = atoi(argv[1]);

    pageNum = address/pageSize;

    offset = address % pageSize;

    printf("The address %d contains:\n", address);
    printf("Page Number = %d\n", pageNum);
    printf("Offset = %d\n", offset);


    return 0;
}
