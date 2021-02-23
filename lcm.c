#include<stdio.h>
int lcm(int, int);
int main()
{
    int a,b,LCM;
    printf("Input First Number:\n");
    scanf("%d",&a);
    printf("Input Second Number:\n");
    scanf("%d",&b);
    LCM=lcm(a,b);
    printf("LCM of %d and %d=%d\n",a,b,LCM);
    return 0;
}
int lcm(int a,int b)
{
    static int temp=1;    
    if(temp%a==0&&temp%b==0)
    {
        return temp;
    }
    else
    {
        temp++;
        lcm(a,b);
        return temp;
    }
}
