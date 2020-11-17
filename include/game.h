#pragma once

#include "game_object.h"
#include "map.h"
#include <SDL2/SDL.h>

const int WIDTH{640};
const int HEIGHT{480};

class Game {
public:
  Game();
  ~Game();
  void init(const char *title, int xpos, int ypos, int width, int height,
            bool fullscreen);
  void handle_events();
  void update();
  void render();
  void clean();
  inline bool running() { return is_running; };
  static SDL_Renderer *renderer;
  static SDL_Event event;

private:
  bool is_running{false};
  SDL_Window *window;
  GameObject *player;
  Map *map;
};
