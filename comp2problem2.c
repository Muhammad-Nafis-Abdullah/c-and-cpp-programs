#include<stdio.h>
int main()
{
    int i,j,k;
    for(;;)
    {
        scanf("%d",&i);
        for(j=0;j<i;j++)
        {
            for(k=0;k<i;k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
