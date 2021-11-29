#include<stdio.h>
int main()
{
    int a ,b,c;
    printf("Enter your three numbers  :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("The Biggest number is  : %d\n",a);
    }
    if(b>a)
    {
        if(b>c)
            printf("The highest number is : %d\n",b);
    }
    else
        printf("Other wise the high number is : %d",c);
    getch();
}
