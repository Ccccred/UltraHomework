//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
 main(){
    int a,b,c;
    printf("请输入三角形的三边长(整数)：");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    printf("能构成三角形");
    else
        printf("不能构成三角形");
        return 0;
 }
