#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

int main() {

	// Prep stuff (not important) (that's a lie)
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(800, 800, "fierce", NULL, NULL);
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();

	// Interesting stuff
	glViewport(0, 0, 800, 800);

	// Cool background color things (it takes 3 commands to tell cpp to change a color, wtf)
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glfwSwapBuffers(window);

	// Event handling because cpp go brr
	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}

	// Not important, it just ends the process and all that.
	// Kind of how I would end myself if there was an error in the tutorial i'm following, because I couldn't fix it
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}