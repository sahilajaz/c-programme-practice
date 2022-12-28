#include <stdio.h>
int main()
{
    float sp , cp , profit , loss;

    printf("enter the selling price of the item :");
    scanf("%f" , &sp);
    
    printf("enter the cost price of the item");
    scanf("%f" , &cp);

    if(sp > cp)
    {
        profit = sp - cp ;
        printf("the profit is %f " , profit );
    }

    else if (cp>sp)
    {
        loss = cp - sp;
        printf("the loss is %f" , loss);
    }
     
     else{
        printf("nor any loss nor any profit on the item");
     }
     return 0;
}