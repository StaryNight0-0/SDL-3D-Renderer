#pragma once 

#include <iostream>
#include <SDL.h>

class Render{

Render(){
		Init();

	}

~Render(){
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);		
	}

public:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	void Draw();
	int Init();
};
