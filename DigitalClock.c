#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>

int main() {
    time_t now = time(NULL);
    struct tm *timep = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        sleep();
        
    }
    

    return 0;
}