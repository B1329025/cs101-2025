#include <stdio.h>

int main()
{
   FILE* fp;
   fp=fopen("bin","wb+");
   int a[]={0,1,2,};
   char b[]="ABC";
   float c[]={1.1,1.2,1.3};
   int ra[3];
   char rb[3];
   float rc[3];
   
   fwrite(a,sizeof(a),1,fp);
   fseek(fp,0,SEEK_SET);
   fread(ra,sizeof(ra),1,fp);
   fseek(fp,0,SEEK_SET);
   fwrite(b,sizeof(b),1,fp);
   fseek(fp,0,SEEK_SET);
   fread(rb,sizeof(rb),1,fp);
   fseek(fp,0,SEEK_SET);
   fwrite(c,sizeof(a),1,fp);
   fseek(fp,0,SEEK_SET);
   fread(rc,sizeof(rc),1,fp);
   fclose(fp);
   for(int i=0;i<3;i++){
       printf("%d ",a[i]);
   }
   printf("\n");
   for(int i=0;i<3;i++){
       printf("%c ",b[i]);
   }
   printf("\n");
   for(int i=0;i<3;i++){
       printf("%f ",c[i]);
   }
   
  
}
