
#include <iostream>
#include <SDL.h>
// #include <SDL/SDL_vulkan.h>
#include <vulkan/vulkan.hpp>
//#include "Render/Renderer.h"
#include <cstdlib>

bool isRunning = True;


   void  Render(){

        if(SDL_Init(SDL_INIT_VIDEO) != 0){
		std::cout << "SDL_Init Error: " << SDL_GetError();
		return 1;
	}



	SDL_Window* window = SDL_CreateWindow("Caboodle",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 640, 480, 0);
	if(window == NULL){
		std::cout << "SDL_CreateWindow Error: " << SDL_GetError();
		return 1;
	}	

	SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
	if(renderer == NULL){
		std::cout << "SDL_CreateRenderer Error: " << SDL_GetError();
		return 1;
	}


	SDL_SetRenderDrawColor(renderer , 250 ,250, 250, 250);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
	}


  void KeyMapping(){
		while(SDL_PollEvent(&event)){
			if(event.type == SDL_EVENT_QUIT){
				isRunning = false;
			}
			else if(event.key.key == SDLK_ESCAPE){
				isRunning = false;
			}
		}
	}


int main(int argc, char* argv[]) {

while(isRunning){

		Render();
		KeyMapping();
	}

if(isRunning == false){
        SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}
}
