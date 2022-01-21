//Example of External storage class.
#include <stdio.h>
int count;
extern void write_extern();
int main()
{
   count = 5;
   write_extern();
   return 0;
}

#include <stdio.h>
extern int count;
void write_extern(void)
{
   printf("count is %d\n", count);
}