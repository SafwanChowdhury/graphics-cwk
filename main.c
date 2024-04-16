#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <string.h>
#include "gameHeader.h"

int main(int argc, char* args[]){
    printf("\nWelcome To Conway's Game Of Life\n");
    menu();
    free(univ);
    return 0;
}
