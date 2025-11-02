#include<stdio.h>

int main()
{
    int num=54,count=0,rem,no=0,copy=num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        printf("%d\n",rem);
        no+=rem*rem;
        no;
            printf("%d",no);
    }
    printf("%d count ",count);
    printf("%d %d",no,copy); 
    return 0;
}