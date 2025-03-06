#include<stdio.h>
#include<string.h>


int main()
{
    char a [9];
    int b,c,total=0,d=8;
    
    scanf("%8s",a);
    int length =strlen(a);
    if(strcmp(a,"00000000")==0){
        printf("%X",0);
        return(0);
    }
    else if((a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])=="0"){
        for(int i=4;i<length;i++){
            int b=(int)a[i]-48;
            total+=b*d;
            d/=2;
            c++;
        }
        printf("%X",total);

        
    }
    for(int i=0;i<length/4;i++){
        total =0,d=8;
        for(int j=1;j<=4;j++){
            int b=(int)a[c]-48;
            total+=b*d;
            d/=2;
            c++;
        }
        printf("%X",total);
        
    }
    
    
}
