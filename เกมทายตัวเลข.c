#include<stdio.h>
int main()
{
    int n,i,correct=0,incorrect=0;
    scanf("%d",&n);
    char num1[n],num2[n];
    scanf("%s",num1);
    scanf("%s",num2);
    for(i=0; i<n; i++)
    {
        if(num1[i]==num2[i])
        {
            correct++;
        }
    }
    incorrect = n-correct ;
    printf("%d %d",correct,incorrect);
    return 0;
}
