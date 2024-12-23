#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int a=0 ,count=0 ,guess; 
    srand(time(0));
    int randomint= rand() % 100 +1;
    while (1){
        printf("Enter your guess=");
        scanf("%d",&guess);
        if (guess==randomint){
            count++;
            printf("You entered the correct number in %d steps",count);
            break;
        }
        else if(guess<randomint){
            printf("Try a bigger number\n");
            count++;
        }
        else if(guess>randomint){
            printf("Try a smaller number\n");
            count++;
        }
    }
}