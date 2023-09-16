#include <stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("请输入2个数字,我们将利用提前部署的VScode系统对它们进行比大小:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        c=a;
        a=b;
        b=c;
        printf("%d<%d",a,b);
    }
    else
    {
        printf("%d<=%d",a,b);
    }
    return 0;
}