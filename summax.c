#include<stdio.h>
int main()
{
    int a,size,b,sum,max,y,i;
    printf("输入行：");
    scanf("%d",&a);
    printf("输入列：");
    scanf("%d",&size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("输入数组:");
        scanf("%d", &b);
        arr[i] = b;
    }
    max = arr[0];
    sum = 0;
    for (y = 0; y < size;y++)
    {
        sum += arr[y];
        if(sum>max)
        {
            max = sum;
        }
        if(sum<0)
        {
            sum = 0;
        }

}
printf("最大子数组的和为:%d",max);
}