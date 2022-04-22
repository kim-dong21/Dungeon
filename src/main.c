#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "res.h"
#include "game.h"
#include "ui.h"
#include "prng.h"

#define DBG 1

#ifdef DBG
#include <assert.h>
#endif
extern char tilesetPath[TILESET_SIZE][PATH_LEN];

int main(int argc, char** args) {
  
  printf("starting main\n");
  
  //strcpy(tilesetPath[34],"res/drawable/expert_druid");
  
  
  prngSrand(time(NULL));
  // Start up SDL and create window
  if (!init()) {
    printf("Failed to initialize!\n");
  } else {
    // Load media
    if (!loadMedia()) {
      printf("Failed to load media!\n");
    } else {
      mainUi();//메인 화면
    }
  }
  cleanup();
}
