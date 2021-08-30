#include<stdio.h>

int main()
{
    int num;

    //user will be asked to enter 5 numbers, as the user inputs
    //each entry, it will be assessed as to whether the number is
    //divisible by 3 or 8 or both
    for (int i = 1; i < 6; i++)
    {
        printf("Enter %d number:", i);
        scanf("%d", &num);

        if (num % 3 == 0 && num % 8 == 0) //if divisible by 3 and 8, prints "Fuzzbuzz"
        {
            printf("Fuzzbuzz\n");
        }
        else { 
            if (num % 3 == 0){ //if divisible by 3, prints "Fuzz"
                printf("Fuzz\n");
            }
            if (num % 8 == 0){ //if divisible by 8, prints "buzz"
                printf("buzz\n");
            }
        }
        
   
   }
   
    return 0;
    
}