#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1;//Generates Random no. b/w 1 to 100
    printf("The random number is %d", number);
    //Keep running the loop until the number is guessed
    return 0;
}