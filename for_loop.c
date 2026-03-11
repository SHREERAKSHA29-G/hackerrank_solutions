#include <stdio.h>

int main() 
{
    int a, b,i;
    int even, odd;
    scanf("%d\n%d", &a, &b);
    for(i=a;i<=b;i++){
  	if(i==8)printf("eight\n");
    else if(i==9)printf("nine\n");
    else if(i%2==0)

            printf("even\n");
            else 
            printf("odd");
        
    }
    return 0;
}

