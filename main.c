/*This is a sweet, text-based exploration of our solar system*/

#include <stdio.h>
#include <string.h>
int main(int argc, char** argv)  {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is your name?\n");
    char name[20];
    scanf("%s", name);
    printf("Nice to meet you, %s.\nMy name is Eliza. I'm an old friend of Alexa.\n", name);
    printf("Let's go on an adventure!\n");
    printf("Shall I randomly choose a planet for you to visit? (Y or N)\n");
    char randomPlanet[2];
    scanf("%s", randomPlanet);
    if  (strcmp(randomPlanet, "N") == 0 || strcmp(randomPlanet, "n") == 0)
    {
        printf("Name the planet you would like to visit.\n");
        char planet[20];
        scanf("%s", planet);
        printf("Traveling to Jupiter...\n");
        printf("Arrived at Jupiter. Welcome!\n");
    }
    else  
    {
        printf("Traveling to Mars...\n");
        printf("Arrived at Mars. King Elon welcomes you!");
    }
    return 0; 
    }
