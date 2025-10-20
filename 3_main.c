/202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
 main(){
    int a,b,c;
    int input;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    printf("加法为1\n");
    printf("减法为2\n");
    printf("乘法为3\n");
    printf("除法为4\n");
    printf("请输入相应的数字(1——4):");
    scanf("%d",&input);

    switch (input)
    {
    case 1:
    c=a+b;break;
    case 2:
    c=a-b;break;
    case 3:
    c=a*b;break;
    default:
    c=a/b;break;
    }
    printf("%d",c);
    return 0;
 }
