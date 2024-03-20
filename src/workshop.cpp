#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Display.h"
#include "Shader.h"
int main() {
	const char* my = "Hello";
	Display display(800, 600, my);
	Shader shader("C:\\Users\\Yusuf\\source\\OpenGl\\workshop1\\workshop1\\src\\Workshop1\\res\\basicShader");
	while (!display.IsClosed()) {
		display.Clear(1.0, 0.0, 0.0, 1.0);
		shader.Bind();
		display.Update();
	}
	return 0;
}