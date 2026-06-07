
#include <iostream>
#include <SDL.h>
// #include <SDL/SDL_vulkan.h>
#include <vulkan/vulkan.hpp>
#include "Render/Renderer.h"
#include <cstdlib>



bool isRunning = true;

	
// NEED TO FIX THIS SO IT RECOGNISES THESE COMMANDS OTHERWISE WE WILL BE STUCK IN THE PROGRAM :)

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
		Render::Draw();
		KeyMapping();
	}

if(isRunning == false){
	SDL_Quit();
}
}
