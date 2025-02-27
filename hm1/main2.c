#include<stdio.h>

int main()
{
    char a []="A4B1C3f3";
    int length =(int)sizeof(a)-1;
    for(int i=0;i<length;i++){
        for(int j=1;j<=(int)a[i+1]-48;j++){
            printf("%c",a[i]);
        }
        i++;
    }
}
