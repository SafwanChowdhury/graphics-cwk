#ifndef ED18SRC_SDLHEADER_H
#define ED18SRC_SDLHEADER_H

typedef struct game_node {
    int x;
    int y;
} node;

node square;
node square2;


SDL_Renderer* renderer = NULL;
SDL_Window* window = NULL;
SDL_Surface*  white_surface = NULL;
SDL_Surface*  square_surface = NULL;
SDL_Surface*  square2_surface = NULL;

SDL_Texture*  white_texture = NULL;
SDL_Texture*  square_texture = NULL;
SDL_Texture*  square2_texture = NULL;
void draw_object( node object, SDL_Texture *texture );

#endif //ED18SRC_SDLHEADER_H
