/*This is a sweet, text-based exploration of our solar system*/

#include <stdio.h>
#include <string.h>
#include "header.h"

struct Planet mercury = {"Mercury", "A very hot planet, closest to the sun."};
struct Planet venus = {"Venus", "It's very cloudy here!"};
struct Planet earth = {"Earth", "There is something very familiar about this planet."};
struct Planet mars = {"Mars", "Known as the red planet."};
struct Planet jupiter = {"Jupiter", "A gas giant, with a noticeable red spot."};
struct Planet saturn = {"Saturn", "This planet has beautiful rings around it."};
struct Planet uranus = {"Uranus", "Strangely, this planet rotates around on its side."};
struct Planet neptune = {"Neptune", "A very cold planet, furthest from the sun."};
struct Planet pluto = {"Pluto", "I don't care what they say - it's a planet."};



int main(int argc, char** argv)  {
    askName();
    choosePlanet();
    return 0;
}


