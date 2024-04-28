#include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 void main()
 {
FILE *f1,*f2,*f3,*f4,*f5,*f6;
char ch[100],chp[100];
f1=fopen("input1.txt","r");
f2=fopen("optab1.txt","w");
f3=fopen("littab1.txt","w");
f4=fopen("symtab1.txt","w");
f5=fopen("mot1.txt","r");
f6=fopen("pot1.txt","r");
 while (fscanf(f1,"%s",ch) !=EOF)
{
if(strcmp(ch,"db")==0)
{
fprintf(f4,"%s\n",chp);
}
else if(strcmp(chp,"LTORG")==0)
{
fprintf(f3,"%s\n",ch);
}
strcpy(chp,ch);
}
while(fscanf(f5,"%s",ch)!=EOF)
{
fprintf(f2,"%s\t",ch);
if(strcmp(ch,"-")==0)
fprintf(f2,"\n");
}
while(fscanf(f6,"%s",ch)!=EOF)
{
fprintf(f2,"%s\t",ch);
if(strcmp(ch,"-")==0)
fprintf(f2,"\n");
}
fclose(f5);
fclose(f4);
fclose(f3);
fclose(f2);
fclose(f1);
}