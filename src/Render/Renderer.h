#pragma once 

#include <iostream>


class Render{

Render(){
		Init();

	}
public:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;




};
