#include <stdio.h>
int main()
{
    printf("请输入'英尺 英寸',我们将会利用提前部署的VScode系统把它们转化为国际单位\n");
    double foot;
    double inch;
    scanf("%lf %lf",&foot,&inch);
    printf("转化结果为%f米。",
    ((foot+inch/12)*0.3048));
    return 0;
}