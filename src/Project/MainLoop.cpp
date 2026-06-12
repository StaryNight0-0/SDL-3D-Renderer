#include <iostream>
#include "MainLoop.h"
#include "glad/glad.h"
#include "Window.h"
#include "Shaders/Shaders.h"


Shaders shader;


void MainLoop::preDraw(){

//glDisable(GL_DEPTH_TEST);
//glDisable(GL_CULL_FACE);

glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


//shader.gPipelineShader = shader.CreateShader(shader.gVertexShaderSource,shader.gFragmentShaderSource);	

}


void MainLoop::draw(){


//glUseProgram(shader.gPipelineShader);	
//glBindVertexArray(shader.gVertexArray);
//glBindBuffer(GL_ARRAY_BUFFER, shader.gVertexBuffer);

//glDrawArrays(GL_TRIANGLES,0,3);

SDL_GL_SwapWindow(win.window);
}



void MainLoop::loop(){

        win.init();

	while(!quit){
		
		Input();
		preDraw();
		draw();
		SDL_Delay(1);
	}

	win.cleanup();
}


void MainLoop::Input(){

while(SDL_PollEvent(&event) != 0){
		if(event.type == SDL_QUIT){
			std::cout << "Quitting" << std::endl;
			quit = true;
		}
	}
}
