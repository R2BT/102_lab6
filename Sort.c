#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char name[n][100];
    char stcp[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",name[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(strcmp(name[i],name[j]) == 1)
           {
               strcpy(stcp,name[i]);
               strcpy(name[i],name[j]);
               strcpy(name[j],stcp);
           }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}
