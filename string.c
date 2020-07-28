#include<stdio.h>
#include<string.h>
#define rot(f) scanf("%c",&f)
#define pop(r,v) printf("%d:%s\n",r,v)
int main()
{
 char str[101];
char xechange,char1,char2,char3;
int n,m,k;
while(~scanf("%s",&str))
{
    k=0;
    getchar();
    while(1)
    {
        k++;
        rot(xechange);
        getchar();
        if(xechange=='S')
        {
         scanf("%d %d %c",&n,&m,&char1);
         getchar();
         for(int i=n-1; i<m; i++)
            {str[i]=char1;}
         pop(k,str);
        }
        else if(xechange=='T')
        {
         scanf("%c %c",&char2,&char3);
         getchar();
          for(int j=0; j<strlen(str); j++)
          {
              if(str[j]==char2)
              str[j]=char3;
          }
          pop(k,str);
        }
        else
        {
        scanf("%s",&str);
        getchar();
        printf("\n");
        break;
        }
    }

}
}
