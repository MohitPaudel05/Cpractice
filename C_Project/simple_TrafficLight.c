#include <stdio.h>
#include <unistd.h>  // For sleep()

int main() {
   
    while (1) {

        printf("YELLOW LIGHT - SLOW DOWN!\n");
        sleep(2);  // Wait 2 seconds

        // printf("RED LIGHT - STOP!\n");
        printf("\033[1;31mRED LIGHT - STOP!\033[0m\n"); // Red color

        sleep(5);  // Wait 5 seconds

        printf("YELLOW LIGHT - Get Ready!\n");
        sleep(2);  // Wait 2 seconds

        

        printf("GREEN LIGHT - GO!\n");
        sleep(4);  // Wait 4 seconds

        
        
    }

    return 0;
}

// #include <stdio.h>
// #include <unistd.h>

// int main() {
//     int state = 0;  // 0 = Red, 1 = Green, 2 = Yellow

//     while (1) {
//         if (state == 0) {
//             printf("RED LIGHT - STOP!\n");
//             sleep(5);  // Red light for 5 seconds
//         } else if (state == 1) {
//             printf("GREEN LIGHT - GO!\n");
//             sleep(4);  // Green light for 4 seconds
//         } else {
//             printf("YELLOW LIGHT - SLOW DOWN!\n");
//             sleep(2);  // Yellow light for 2 seconds
//         }

//         state = (state + 1) % 3;  // Transition to the next state (0 -> 1 -> 2 -> 0)
//     }

//     return 0;
// }


















