/*This is a sweet, text-based exploration of our solar system*/

#include <stdio.h>

int main(int argc, char** argv)  {
    printf("Welcome to the Solar System!\n");
    printf("There are 9 planets to explore.\n");
    printf("What is youir name?\n");
    char name[20];
    scanf("%s", name);
    printf("Nice to meet you, %s.\nMy name is Eliza. I'm an old friend of Alexa.\n", name);
    return 0; 
    }
