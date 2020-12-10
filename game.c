#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,attempt=1;
    srand(time(0));
    number = rand()%100 + 1;//Generates Random no. b/w 1 to 100
    // printf("The random number is %d", number);
    //Keep running the loop until the number is guessed
   
  
    

    do
    {
        printf("Enter the number you Guessed = \n");
        scanf("%d",&guess);
        
        if(guess<number)
        {
            printf("Higher Number Please!\n");
        }
        else if (guess>number)
        {
            printf("Lower Number Please!\n");
        }
        else
        {
            printf("You Guessed the number in %d attempts!",attempt);
        }
               attempt++;
    } while (guess!=number);
    
    
    return 0;
}