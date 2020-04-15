#include<stdio.h>
int main()
{
    int i,a[i];
    for(;;)
    {
        scanf("%d",&i);
        for(int j=0;j<i;j++)
        {
            scanf("%d",&a[j]);
        }
        int max=a[0];
        for(int k=0;k<i;k++)
        {
            if(max < a[k])
            {
                max=a[k];
            }
        }
        printf("%d",max);
    }
}
