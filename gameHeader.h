#ifndef ED18SRC_GAMEHEADER_H
#define ED18SRC_GAMEHEADER_H

#define for_i for (int i = 0; i < w; i++)
#define for_j for (int j = 0; j < h; j++)
#define for_ij for_i for_j
int h;
int w;
int e;
void *univ;
void init(void);
bool update(void);
void gameover(void);
void render(void);
void close(void);
void menu();
void generate();
void import();
void export();
void evolve();
void display();


#endif //ED18SRC_GAMEHEADER_H
