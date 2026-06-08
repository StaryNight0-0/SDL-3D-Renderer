#include <iostream>
#include "Render/Renderer.h"
#include <SDL.h>



int Render::Init(){


        if(SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError();
		return 1;
	}

    return 0;

}

void Render::Draw(){

	
	SDL_SetRenderDrawColor(renderer,250,250,250,250);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
