#include<stdio.h>
int main()
{
    //fill the code
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float d=b*c;
    float e=(d+a);
    float f=(d*2)/a;
    float g=(e-f);
    printf("%.2f\n",d);
    printf("%.2f\n",e);
    printf("%.2f\n",f);
    printf("%.2f\n",g);
    
    return 0;
}
