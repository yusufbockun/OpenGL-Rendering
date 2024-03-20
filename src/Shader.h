#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include<string>
#include <fstream>
#include <cstring>
class Shader
{
public:
	Shader(const std::string& fileName);
	void Bind();
	virtual ~Shader();
private:
	static const unsigned int NUM_SHADERS = 2;
	Shader(const Shader& other){}
	Shader& operator=(const Shader& other){}
	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
};

