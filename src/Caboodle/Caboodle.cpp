
#include <iostream>
#include <SDL.h>
// #include <SDL/SDL_vulkan.h>
#include <vulkan/vulkan.hpp>
#include "Render/Renderer.h"
#include <cstdlib>

Render render;
SDL_Event event;
const Uint8* state = SDL_GetKeyboardState(NULL);
bool isRunning = true;

	
// NEED TO FIX THIS SO IT RECOGNISES THESE COMMANDS OTHERWISE WE WILL BE STUCK IN THE PROGRAM :)

  void KeyMapping(){
		while(SDL_PollEvent(&event)){
			if(event.type == SDL_WINDOWEVENT_CLOSE){
				isRunning = false;
			}
		}

          if (state[SDL_SCANCODE_ESCAPE]){
		isRunning = false;
	}
	else if(state[SDL_SCANCODE_SPACE]){
		std::cout << "Space is being pressed" << std::endl;
	}
	}


int main(int argc, char* argv[]) {

while(isRunning){
		render.Draw();
		KeyMapping();
	}

if(isRunning == false){
	SDL_Quit();
}
}
