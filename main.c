/*This is a sweet, text-based exploration of our solar system*/

#include <stdio.h>

int main(int argc, char** argv)  {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is youir name?\n");
    char name[20];
    scanf("%s", name);
    printf("Nice to meet you, %s.\nMy name is Eliza. I'm an old friend of Alexa.\n", name);
    printf("Let's go on an adventure!\n");
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    char randomPlanet[2];
    scanf("%s", randomPlanet);
    printf("Traveling to Mars...\n");
    printf("Arrived at Mars. President Musk welcomes you!");
    return 0; 
    }
