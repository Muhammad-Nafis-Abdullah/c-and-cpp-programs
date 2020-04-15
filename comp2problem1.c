#include<stdio.h>
int main()
{
    int a,b;
    for(;;)
    {scanf("%d %d",&a,&b);
    if(a%2==0 && b%2==0)
        printf("NONE\n");
    else if(a%2!=0 && b%2!=0)
        printf("BOTH\n");
    else
        printf("ONE\n");
    }
    return 0;
}
