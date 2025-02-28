/*program  to simulates a traffic light system with Red, Green, and Yellow lights
-Used ANSI Escape Codes to change the text color - 33m for yellow, 31m for red, 32m for green
-Used sleep function to simulate the time delay between the lights
- state =0 for yellow light
- state =1 for red light
- state =2 for yellow light with different message
- state =3 for green light*/
#include<stdio.h> // for I/O function
#include<unistd.h>// for sleep function

// Function to simulate traffic light
void Traffic_light(int state){
    
    while(1){// infinite loop
        if(state==0){
            printf("\033[1;33mYellow Light - Slow Down!\n");
            sleep(3);
        }
        if (state ==1){
            printf("\033[31mRed Light - Stop!\n");
            sleep(2);
        }
        if(state==2){
            printf("\033[1;33mYellow Light - Start Your Engine!\n");
            sleep(3);
        }
        if (state==3){
            printf("\033[1;32mGreen Light - Go!\n");
            sleep(4);
        }
        state = (state+1)%4; //for state transistion
    }
}
//end of the traffic light function
// Starting of the main function
int main(){
    int state =0; //setting initial state to 0
    Traffic_light(state); //function call
    return 0;
}