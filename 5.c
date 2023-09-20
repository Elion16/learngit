#include <stdio.h>
int main()
{
    int hour1,min1;
    int hour2,min2;
    int a,b;
    printf("请输入两个'几时几分',我们将会利用提前部署的VScode系统对其相差的时间进行一个直观的呈现:\n");
    scanf("%d%d %d%d",&hour1,&min1,&hour2,&min2);
    a=abs(hour1*60+min1-hour2*60-min2)/60;
    b=abs(hour1*60+min1-hour2*60-min2)%60;
    printf("相差%d时%d分",a,b);
    return 0;
}