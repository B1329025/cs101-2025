#include<stdio.h>

int main()
{
    char a[]="AAAAAAAAAAAAABBBBBBBBBBBBBCCccDDDDdd";
    int length= sizeof(a)-1;
    for (int i=0;i<length;i++){
        int count=1;
        while(a[i]==a[i+1]){
            count++;
            i++;
            if(count==9){
                break;
            }    
        }
        printf("%c%d", a[i],count);
    
    }
}
