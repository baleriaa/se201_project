#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void askName()
{
   printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is your name?\n");
    char name[20];
    scanf("%s", name); 
    printf("Nice to meet you, %s.\nMy name is Eliza. I'm an old friend of Alexa.\n", name);
}
void choosePlanet()
{
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
}

struct planets
{
    char name[10];
    char description[100];
};

