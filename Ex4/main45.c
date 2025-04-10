#include <stdio.h>

void TowerOfHanoi(int n,char from , char to ,char aux){
    if(n==1){
        printf("\nmove disk 1 from %c to %c",from,to);
        return;
    }
    TowerOfHanoi(n-1,from,aux,to);
    printf("\nmove disk %d from %c to %c",n,from,to);
    TowerOfHanoi(n-1,aux,to,from);
    
    
}

int main()
{
  int n=3;
  TowerOfHanoi(n,'A','B','C');
}
