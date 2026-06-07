#include <iostream>
#include "Render/Renderer.h"
#include <SDL.h>



int Render::Init(){


        if(SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError();
		return 1;
	}

	window = SDL_CreateWindow("Caboodle",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,640,480,0);
	renderer = SDL_CreateRenderer(window,NULL,0);

	SDL_SetRenderDrawColor(renderer,250,250,250,250);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

}

void Render::Draw(){

	SDL_SetRenderDrawColor(renderer,250,250,250,250);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
