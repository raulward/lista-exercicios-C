#include <stdio.h>

int main() {

    int secondsUser, hours, minutes, seconds;

    printf("Insert the value in seconds: ");
    scanf("%d", &secondsUser);

    hours = secondsUser / 3600;
    minutes = (secondsUser / 60) - (hours * 60);
    seconds = secondsUser % 60;

    printf("Duration: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}