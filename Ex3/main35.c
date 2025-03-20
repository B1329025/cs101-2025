
#include <stdio.h>

int main()
{
   char v='A';
   int *p =NULL;
   p=&v;
   
   printf("address of v %x\n",v);
   printf("address stored in p %x\n",p);
   printf("address of p %x\n",&p);
   printf("address of *p %d\n",*p);
}
