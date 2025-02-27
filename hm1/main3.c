#include<stdio.h>

int main()
{
    char a []="10001111";
    int b,c;
    int length =(int)sizeof(a)-1;
    for(int i=0;i<length/4;i++){
        int total =0,d=8;
        for(int j=1;j<=4;j++){
            int b=(int)a[c]-48;
            total+=b*d;
            d/=2;
            c++;
        }
        printf("%X",total);
        
    }
   
}
