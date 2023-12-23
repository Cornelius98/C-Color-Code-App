#include <stdio.h>
#include <stdlib.h>

int get_number()
{
    int n =0;
    printf("\n\nEnter a Number \n");
    scanf("%d",&n);
    color_code(n);
}
void color_code(int color)
{
    if(color>0 && color<10)
         printf("Blue\n");
    else if(color>10 && color<20)
        printf("Red\n");
    else if(color>20 && color<30)
        printf("Green\n");
    else
        printf("It is not a color code.\n");
}
int main()
{
    int n;
    while(n!=100)
    {
        get_number();
    }
    return 0;
}
