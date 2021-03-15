#include<stdio.h>
int main()
{
    int n,i,min=0,max=0,x,y;
    scanf("%d",&n);
    int friend[n];
    for(i=0;i<n;i++)
    {
        friend[i]=0;
    }
    //input score
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        friend[x-1]+=1;
        friend[y-1]+=1;
        min=friend[0];
        max=friend[0];
    }

    for(i=0;i<n;i++)
    {
        if(friend[i]<min)
        {
            min=friend[i];
        }
        if(friend[i]>max)
        {
            max=friend[i];
        }
    }
    //show max
    for(i=0;i<n;i++)
    {
        if(friend[i]==max)
        {
            printf("%d",i+1);
            break;
        }
    }
    //show min
    for(i=0;i<n;i++)
    {
        if(friend[i]==min)
        {
            printf(" %d",i+1);
            break;
        }
    }
    return 0;
}
