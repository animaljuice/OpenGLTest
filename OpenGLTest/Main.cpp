#include <glad/gl.h>
#include <GLFW/glfw3.h>
#include <vector>
#include <iostream>
#include "Shader.h"

void errorHandler(int errCode, const char* errDesc) {
	std::cout << errDesc << std::endl;
}

int main(int argc, char* argv[])
{
	glfwInit();
	glfwSetErrorCallback(errorHandler);

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	auto window = glfwCreateWindow(800, 800, "TestGLWindow", nullptr, nullptr);
	if (window == nullptr) {
		std::cout << "no, window can't be created" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	gladLoaderLoadGL();

	auto vertexShaderSource = "asdqwe";
	{
		ShaderStage testStage(GL_VERTEX_SHADER, &vertexShaderSource);
	}
	
	glClearColor(.7f, .5f, .2f, 1.f);
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);
		glfwSwapBuffers(window);		
	}

	glfwDestroyWindow(window);
	gladLoaderUnloadGL();
	glfwTerminate();
	return 0;
}