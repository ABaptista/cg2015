#ifdef __APPLE__
	#include <OpenGL/gl.h>
#else
	#include <GL/glew.h>
#endif

#include <GLFW/glfw3.h>
#include <math.h>
#include <map>
#include "math.hpp"

using namespace std;

class Camera {
	public:
		Camera();
		~Camera();
		GLfloat x = 0, y = 10, z = 55;
		GLfloat vcamX = 1, vcamY = 1, vcamZ = 1;
		GLfloat rcamX = 0, rcamY = 0, rcamZ = 0;
		GLfloat camSpeed = 4.0f;
		GLfloat mouseVSensitivity = 7.0f;
		GLfloat mouseHSensitivity = 7.0f;
		void move(double delta);
		void rotate(int horizontalMovement, int verticalMovement);
		void calcMovement(map<int, bool> keyState);
};
