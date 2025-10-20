//202510304103
//3565530270@qq.com
//刘栩池
#include<stdio.h>
 main(){
 int a;
 printf("请输入你的成绩(0-100分)：");
 scanf("%d",&a);
    if(a<0 || a>100)
        printf("请输入0——100的整数");
    else if(100>a>90)
        printf("A");
    else if(a>80)
        printf("B");
    else if(a>70)
        printf("C");
    else if(a>60)
        printf("D");
    else
        printf("E");
    return 0;
  }
