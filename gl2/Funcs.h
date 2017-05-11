GL_FUNC(void, ActiveTexture, (GLenum))
GL_FUNC(void, AttachShader, (GLuint, GLuint))
GL_FUNC(void, BindAttribLocation, (GLuint, GLuint, const char *))
GL_FUNC(void, BindRenderbuffer, (GLenum, GLuint))
GL_FUNC(void, BindTexture, (GLenum, GLuint))
GL_FUNC(void, BlendFuncSeparate, (GLenum, GLenum, GLenum, GLenum))
GL_FUNC(void, BlendFunc, (GLenum, GLenum))
GL_FUNC(void, Clear, (GLbitfield))
GL_FUNC(void, ClearColor, (GLclampf, GLclampf, GLclampf, GLclampf))
GL_FUNC(void, CompileShader, (GLuint))
GL_FUNC(GLuint, CreateProgram, (void))
GL_FUNC(GLuint, CreateShader, (GLenum))
GL_FUNC(void, CullFace, (GLenum))
GL_FUNC(void, DepthMask, (GLboolean))
GL_FUNC(void, DetachShader, (GLuint, GLuint))
GL_FUNC(void, DeleteProgram, (GLuint))
GL_FUNC(void, DeleteShader, (GLuint))
GL_FUNC(void, DeleteTextures, (GLsizei, const GLuint *))
GL_FUNC(void, Disable, (GLenum))
GL_FUNC(void, DisableVertexAttribArray, (GLuint))
GL_FUNC(void, DrawArrays, (GLenum, GLint, GLsizei))
GL_FUNC(void, DrawArraysInstancedNV, (GLenum, GLint, GLsizei, GLsizei))
GL_FUNC(void, DrawElements, (GLenum, GLsizei, GLenum, const GLvoid*))
GL_FUNC(void, DrawElementsInstancedNV, (GLenum, GLsizei, GLenum, const GLvoid*, GLsizei))
GL_FUNC(void, Enable, (GLenum))
GL_FUNC(void, EnableVertexAttribArray, (GLuint))
GL_FUNC(void, Finish, (void))
GL_FUNC(void, Flush, (void))
GL_FUNC(void, FrontFace, (GLenum))
GL_FUNC(void, GenFramebuffers, (GLsizei, GLuint *))
GL_FUNC(void, GenTextures, (GLsizei, GLuint *))
GL_FUNC(void, GetActiveAttrib, (GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*))
GL_FUNC(void, GetActiveUniform, (GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*))
GL_FUNC(void, GetBooleanv, (GLenum, GLboolean *))
GL_FUNC(const GLubyte *, GetString, (GLenum))
GL_FUNC(GLenum, GetError, (void))
GL_FUNC(void, GetFramebufferAttachmentParameteriv, (GLenum, GLenum, GLenum, GLint*));
GL_FUNC(void, GetIntegerv, (GLenum, GLint *))
GL_FUNC(void, GetProgramiv, (GLuint, GLenum, GLint *))
GL_FUNC(void, GetRenderbufferParameteriv, (GLenum, GLenum, GLint*));
GL_FUNC(void, GetShaderInfoLog, (GLuint, GLsizei, GLsizei *, char *))
GL_FUNC(void, GetShaderiv, (GLuint, GLenum, GLint *))
GL_FUNC(GLint, GetUniformLocation, (GLuint, const char *))
GL_FUNC(GLboolean, IsEnabled, (GLenum))
GL_FUNC(void, LinkProgram, (GLuint))
GL_FUNC(void, PixelStorei, (GLenum, GLint))
GL_FUNC(void, ReadPixels, (GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid*))
GL_FUNC(void, Scissor, (GLint, GLint, GLsizei, GLsizei))
GL_FUNC(void, ShaderBinary, (GLsizei, const GLuint *, GLenum, const void *, GLsizei))
GL_FUNC(void, ShaderSource, (GLuint, GLsizei, const GLchar* const*, const GLint *))
GL_FUNC(void, TexImage2D, (GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))
GL_FUNC(void, TexParameteri, (GLenum, GLenum, GLint))
GL_FUNC(void, TexSubImage2D, (GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *))
GL_FUNC(void, Uniform1i, (GLint, GLint))
GL_FUNC(void, Uniform1f, (GLint, GLfloat))
GL_FUNC(void, Uniform4f, (GLint, GLfloat, GLfloat, GLfloat, GLfloat))
GL_FUNC(void, Uniform2fv, (GLint, GLsizei, const GLfloat *))
GL_FUNC(void, Uniform3fv, (GLint, GLsizei, const GLfloat *))
GL_FUNC(void, Uniform4fv, (GLint, GLsizei, const GLfloat *))
GL_FUNC(void, UniformMatrix4fv, (GLint, GLsizei, GLboolean, const GLfloat *))
GL_FUNC(void, UseProgram, (GLuint))
GL_FUNC(void, ValidateProgram, (GLuint))
GL_FUNC(void, VertexAttribPointer, (GLuint, GLint, GLenum, GLboolean, GLsizei, const void *))
GL_FUNC(void, VertexAttribDivisorNV, (GLuint, GLuint))
GL_FUNC(void, Viewport, (GLint, GLint, GLsizei, GLsizei))
GL_FUNC(void, BindFramebuffer, (GLenum, GLuint))
GL_FUNC(void, FramebufferTexture2D, (GLenum, GLenum, GLenum, GLuint, GLint))
GL_FUNC(GLenum, CheckFramebufferStatus, (GLenum))
GL_FUNC(void, DeleteFramebuffers, (GLsizei, const GLuint *))
GL_FUNC(GLint, GetAttribLocation, (GLuint, const GLchar *))
GL_FUNC(void, GetProgramInfoLog, (GLuint, GLsizei, GLsizei*, GLchar*))
GL_FUNC(void, GenBuffers, (GLsizei, GLuint *))
GL_FUNC(void, DeleteBuffers, (GLsizei, GLuint *))
GL_FUNC(void, BindBuffer, (GLenum, GLuint))
GL_FUNC(void, BufferData, (GLenum, GLsizeiptr, const GLvoid *, GLenum))
GL_FUNC(void, BufferSubData, (GLenum, GLintptr, GLsizeiptr, const GLvoid *))
GL_FUNC(void, PolygonOffset, (GLfloat, GLfloat))