//Example of Extern storage class.
//File1.c
#include <stdio.h>
int x;
void print(void);
int main()
{
    x = 10;
    printf(" x in File1.c=%d\n", x);
    print();
    return 0;
} //End of file1.c

// File2.c
#include <stdio.h>
extern int x;
void print()
{
    printf(" x in File2.c=%d\n", x);
}
