#include "Shader.h"

ShaderStage::ShaderStage(GLenum stageType, const char** source):
	_m_type(stageType)
{
	_m_programStage = glCreateShaderProgramv(stageType, 1, source);
}

ShaderStage::~ShaderStage()
{
	glDeleteProgram(_m_programStage);
}
