/*
 *  code taken from http://learnopengl.com/code_viewer.php?type=header&code=shader
 *  thanks to the author
 */

#ifndef SHADER_H
#define SHADER_H

#include <GL/glew.h> // Include glew to get all the required OpenGL headers

class Shader
{
public:
    GLuint Program; // The program ID
    Shader(const GLchar* vertexPath, const GLchar* fragmentPath); // Constructor reads and builds the shader
    void Use(); // Use the program
};


#endif
