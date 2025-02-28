#include <stdio.h>
#include <unistd.h>  // For sleep function
#include <stdlib.h>

// Define traffic light states using an enum
typedef enum {
    RED,
    GREEN,
    YELLOW
} TrafficLight;

void displayLight(TrafficLight light) {
    switch (light) {
        case RED:
            printf("\033[1;31mRED LIGHT - STOP!\033[0m\n");   // Red color
            break;
        case GREEN:
            printf("\033[1;32mGREEN LIGHT - GO!\033[0m\n");  // Green color
            break;
        case YELLOW:
            printf("\033[1;33mYELLOW LIGHT - SLOW DOWN!\033[0m\n"); // Yellow color
            break;
    }
}

int main() {
    TrafficLight light = RED; // Start with RED light

    while (1) {
        displayLight(light);

        // Delay based on the current light state
        switch (light) {
            case RED:
                sleep(5);  // Red stays for 5 seconds
                light = GREEN;
                break;
            case GREEN:
                sleep(4);  // Green stays for 4 seconds
                light = YELLOW;
                break;
            case YELLOW:
                sleep(2);  // Yellow stays for 2 seconds
                light = RED;
                break;
        }
    }

    return 0;
}
