#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=0;
    double b=0;
    double sum=0;
    char blackgoat=0;
    printf("first: ");
    scanf("%lf",&a);
    printf("second: ");
    scanf("%lf",&b);
    sum=a+b;
    printf("sum=%lf\n",sum);
    if(sum > 10){
        printf("WIN!!!!");
        }
        else printf("扎心了，老铁\n");

    printf("输入YGLNB可改变结果\n");
    scanf("%c",&"biackgoat");
    //if(biackgoat="YGLNB"){
       // printf("WIN!!!!\n");
    //}
    //else printf("FBI!Open the door");
    return 0;
}
