#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <string.h>
#include "gameHeader.h"

void display(){
    int (*universe)[w] = univ;
    printf("\n");
    for_i{
        for_j{
            printf(universe[j][i] ? "1" : "0");
        }
        printf("\n");
    }
}

void evolve(){
    unsigned (*universe)[h] = univ;
    unsigned new[w][h];
    for_ij{
        new[i][j] = 2;
    };
    int x2;
    int y2;
    for_ij{
        int n = 0; //counter for alive cells
        x2 = i + 1;
        y2 = j + 1;
        for (int x1 = i-1; x1<=x2;x1++) {
            for (int y1 = j-1; y1 <= y2; y1++) {
                if (x1 == i && y1 == j) {
                    continue;
                }
                if (x1 < 0 || x1 > w) {
                    continue;
                }
                if (y1 < 0 || y1 > h) {
                    continue;
                }
                if (universe[x1][y1] == 1)
                    n++;
            }
        }
        if (n <= 1)
            new[i][j] = 0;
        if (n == 3)
            new[i][j] = 1;
        if (n == 2)
            new[i][j] = universe[i][j];
        if (n > 3)
            new[i][j] = 0;
    }
    for_ij{
        universe[i][j] = new[i][j];
    }
}


void export(){
    FILE *fpt;
    fpt = fopen("Universe.txt", "w+");
    int (*universe)[w] = univ;
    printf("\n");
    for_i{
        for_j{
            fprintf(fpt,"%d", universe[j][i]);
        }
        fprintf(fpt,"\n");
    }
    fclose(fpt);
}

void import(){
    unsigned new[1000][1000];
    for_ij{
            new[i][j] = 2;
        }
    char c;
    FILE *fp;
    if((fp = fopen("Universe.txt", "r"))){
      char line[256];
      int k = 0;
      while (fgets(line, sizeof(line), fp)) {
          strtok(line, "\n");
          for (int x = 0; x < strlen(line);x++){
              w = strlen(line);
              c = line[x];
              new[x][k] = c - '0';
          }
          k++;
      }
      h = k;
      unsigned universe[h][w];
      fclose(fp);
      for_j{
          for_i{
              printf("%d",new[i][j]);
          }
          printf("\n");
      }
      for_ij{
        universe[i][j] = new[i][j];
      }
      univ = &universe;
      for (int x = 0; x<e;x++) {
          display();
          update();       // check if finished
          SDL_Delay( 50 ); // time between frames (ms)
          evolve();
          printf("------------------------------");
      }
      export();
    }
    else{
      printf("Save File Does Not Exist, Please Create A New Game...\n");
      menu();
    }
}

void generate(){
  unsigned universe[h][w];
  for_i{
      for_j {
          universe[j][i] = rand() < RAND_MAX / 10 ? 1 : 0; //universe generation code adapted from https://rosettacode.org/wiki/Conway%27s_Game_of_Life#C
      }
  }
  univ = &universe;
}

void game(){
  unsigned universe[h][w];
  for_i{
      for_j {
          universe[j][i] = rand() < RAND_MAX / 10 ? 1 : 0; //universe generation code adapted from https://rosettacode.org/wiki/Conway%27s_Game_of_Life#C
      }
  }
  univ = &universe;
    for (int x = 0; x<e;x++) {
        display();
        update();       // check if finished
        SDL_Delay( 50 ); // time between frames (ms)
        evolve();
        printf("------------------------------");
    }
    export();
}

void menu(){
  char g;
  char k;
  close();
  printf("Please Select An Option From The Menu: \n");
  printf("1: New Game \n");
  printf("2: Load Save \n");
  printf("3: Quit Game \n");
  scanf("%c",&g);
  switch(g){
    case '1':
      scanf("%c",&k);
      printf("Please Enter Grid Width: ");
      scanf("%d", &w);
      scanf("%c",&k);
      printf("\nPlease Enter Grid Height: ");
      scanf("%d", &h);
      scanf("%c",&k);
      printf("\nPlease Enter Number Of Evolutions: ");
      scanf("%d", &e);
      init();
      render();
      game();
      scanf("%c",&k);
      menu();
    case '2':
      scanf("%c",&k);
      printf("\nPlease Enter Number Of Evolutions: ");
      scanf("%d", &e);
      init();
      render();
      import();
      scanf("%c",&k);
      menu();
    case '3':
      printf("Goodbye!\n") ;
      gameover();
    default:
      printf("Invalid Input\n");
      scanf("%c",&k);
      menu();
  }
}
