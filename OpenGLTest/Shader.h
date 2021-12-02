#pragma once
#include <glad/gl.h>

class ShaderStage {
	GLenum _m_type;
	GLuint _m_programStage;

public:
	ShaderStage(GLenum stageType, const char** source);
	~ShaderStage();

};

class Pipline
{
	GLuint _m_piplineObject;
};

