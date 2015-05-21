#include <stdio.h>

#ifdef __APPLE__
	#include <OpenGL/gl.h>
#else
	#include <GL/gl.h>
#endif

#define BACK "back"
#define FRONT "front"
#define LEFT "left"
#define RIGHT "right"
#define BOTTOM "bottom"
#define TOP "top"
#define EXTENSION "bmp"
#define MIN_BRIGHTNESS 0.1

using namespace std;

class Skybox {
	public:
		Skybox();
		~Skybox();
		GLuint textures[6];
		float rSun = 0, sunX = 0, sunY = 500, sunZ = 200;
		float dayDuration = 10000; //seconds
		bool load(const char* path);
		void draw(double dist);
		void renderSun(double delta);
};
