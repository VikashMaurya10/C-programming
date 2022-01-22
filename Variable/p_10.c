//Example of static storage class.
#include <stdio.h>
void print(void);

int main()
{
    printf("First call of print()\n");
    print();
    printf("Second call of print()\n");
    print();
    printf("Third call of print()\n");
    print();
    return 0;
}
void print()
{
    static int x = 1;
    int y = 0;
    printf("Static integer varibale x=%d\n", x);
    printf("Intger variable y=%d\n", y);
    x++;
    y++;
}