#ifndef MAIN_H
#define MAIN_H

#include <GL/glut.h>
#include <stdio.h>

void glUseProgram(unsigned int shader_program);
void glBindVertexArray(unsigned int vao);
unsigned int glCreateShader();
void glShaderSource();
void glCompileShader();
void glGetShaderiv();
void glGetShaderInfoLog();
int glCreateProgram();
void glAttachShader();
void glLinkProgram();
void glGetProgramInfoLog();
void glGetProgramiv();
void glDeleteShader();
void glGenBuffers();
void glBindBuffer();
void glBufferData();
void glVertexAttribPointer();
void glEnableVertexAttribArray();





#endif  // MAIN_H
