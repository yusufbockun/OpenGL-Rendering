#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <string>
#include <iostream>
class Display
{
private:
//	Display(const Display& other) {}
	Display& operator=(const Display other) {}
	GLFWwindow* window;
	bool m_IsClosed;
public:
	Display(int width, int height, const char* title);
	void Clear(float r, float g, float b, float a);
	void Update();
	bool IsClosed();
	virtual ~Display();


};

