#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <SDL2/SDL.h>

#include "SDLHeader.h"
#include "gameHeader.h"

void init(void)
{
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
        fprintf(stderr, "SDL_Init: %s\n", SDL_GetError());

    atexit(SDL_Quit); // set for clean-up on exit

    SDL_CreateWindowAndRenderer(600, 600, 0, &window, &renderer);
    SDL_SetWindowTitle( window, "Conway's Game Of Life");
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    square_surface = SDL_LoadBMP("images/black_square.bmp");
    square2_surface = SDL_LoadBMP("images/white_square.bmp");
    white_surface = SDL_LoadBMP("images/white.bmp");

    square_texture = SDL_CreateTextureFromSurface(renderer, square_surface);
    square2_texture = SDL_CreateTextureFromSurface(renderer, square2_surface);
    white_texture = SDL_CreateTextureFromSurface(renderer, white_surface);

    square.x = 0;
    square.y = 0;
    square2.x = 0;
    square2.y = 0;
    return;
}

bool update(void)
{
    unsigned (*universe)[h] = univ;
    for_i{
      for_j{
        if (universe[i][j] == 1){
          square.x = i;
          square.y = j;
          draw_object(square,square_texture);
        }
        if (universe[i][j] == 0){
          square2.x = i;
          square2.y = j;
          draw_object(square2,square2_texture);
        }
      }
    }
    SDL_Delay(100);
    render();
    return true;
}

void close(void){
  SDL_DestroyWindow(window);
}

void gameover(void)
{
    SDL_Quit();
    exit(0);
}

void render(void)
{
     // draw new square if required
    SDL_RenderPresent(renderer);
    return;
}

void draw_object( node object, SDL_Texture *texture )
{
    SDL_Rect rect;
    int TILE_SIZEX;
    int TILE_SIZEY;
    TILE_SIZEX = (600/w);
    TILE_SIZEY = (600/h);
    rect.h = TILE_SIZEY;
    rect.w = TILE_SIZEX;
    rect.x = object.x * TILE_SIZEX;
    rect.y = object.y * TILE_SIZEY;
    SDL_RenderCopy(renderer, texture, NULL, &rect);

    return;
}
