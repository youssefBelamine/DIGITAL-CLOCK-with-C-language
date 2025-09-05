#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    time_t now = time(NULL);
    struct tm *timep = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (true)
    {
        time(&now);
        timep = localtime(&now);
        printf("\r%02d:%02d:%02d",timep->tm_hour, timep->tm_min, timep->tm_sec);
        
        Sleep(1000);
        
    }
    

    return 0;
}