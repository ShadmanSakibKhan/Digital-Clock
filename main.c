#include <stdio.h>
#include <windows.h>

int main(){
    int hour, minute, second;
    int sleep = 1000; // We add a delay of 1000 milli-seconds & we will use it in the function sleep
    printf("...........................");
    printf("\nSet Time: HH:MM:SS\n");
    printf("...........................");
    printf("\nSet Your Hour: ");
    scanf("%d", &hour);
    printf("\nSet Your Minute: ");
    scanf("%d", &minute);
    printf("\nSet Your Second: ");
    scanf("%d", &second);
    if(hour>12 || minute>60 || second>60){
        printf("Error!\n");
        exit(0);
    }
    while(1){ // This is an infinite loop and anything inside will repeat itself to infinity
        second++;
        if(second>59){
            minute++;
            second=0;
        }
        if(minute>59){
            hour++;
            minute=0;
        }
        if(hour>12){
            hour=1;
        }
        printf("\nDigital Clock: ");
        printf("\n%02d:%02d:%02d", hour, minute, second); // This writes our time in this format 00:00:00
        Sleep(sleep); // The function sleep slows down the while loop & make it more like a real clock
        system("cls"); // This clears the screen
    }
}
