#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    printf("请输入3个数字,我们将会利用提前部署的VScode系统计算以之为三边的三角形的面积:\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a){
        double p=(a+b+c)/2.0;
        double s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("面积为%lf\n",s);
    }
    else{
        printf("此三个数字不能构成三角形！\n");
    }
    return 0;
}