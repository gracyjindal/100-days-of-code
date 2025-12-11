#include <stdio.h>

enum TrafficLight {RED, YELLOW, GREEN};

int main() {
    enum TrafficLight signal = RED;

    if(signal == RED)
        printf("Stop\n");
    else if(signal == YELLOW)
        printf("Wait\n");
    else if(signal == GREEN)
        printf("Go\n");

    return 0;
}
