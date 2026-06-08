#pragma once 

#include <iostream>
#include <SDL.h>

class Render{

public:

Render(){
		Init();

	}

~Render(){
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);		
	}


       SDL_Window* window = SDL_CreateWindow("Caboodle",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	void Draw();
	int Init();
};
