//Example of a void pointer (Using brfore, it assigned data type).
#include <stdio.h>
void main()
{
    int x = 10;
    float y = 4.0;
    char ch ='A';
    void *ptr;
    
    ptr = &x;
    printf("x=%d\n", *((int *)ptr));
    printf("Adress of int %x\n",ptr);

    ptr = &y;
    printf("y=%f\n", *((float *)ptr));
    printf("Adress of float %x\n",ptr);

    ptr = &ch;
    printf("ch=%c\n", *((char *)ptr));
    printf("Adress of char %x\n",ptr);
}