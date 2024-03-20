#pragma once
#include <glm/glm.hpp>
#include <GL/glew.h>
class Vertex {
private:
	glm::vec3 pos;
public:
	Vertex(const glm::vec3& pos)
	{
		this->pos = pos;
	}
};
class Mesh
{
private:
	GLuint m_vertexArrayObject;
public:
	Mesh(Vertex* vertices,unsigned int numVertices);

	void Draw();
	virtual~Mesh();

};

