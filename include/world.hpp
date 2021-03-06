#ifndef WORLD_HPP
#define WORLD_HPP

#include <stdio.h>
#include <vector>
#include <algorithm>

#include "main.hpp"
#include "object.hpp"
#include "sphere.hpp"
#include "sea.hpp"
#include "particle.hpp"

#include <GLFW/glfw3.h>

#include <SFML/Audio.hpp>

using namespace std;

class World {
	public:
		World();
		~World();

		GLFWwindow *window;

		GLfloat cubeSide = 60.0f;
		GLfloat cubeHeight = 40.0f;

		Camera camera;

		Skybox skybox;
		Sea sea;

		sf::Music backgroundMusic, bubbleSound;

		bool canAddSphere = true;

		vector<Object*> objects;
		vector<Sphere*> spheres;

		vector<Particle*> explosion;
		void explode(GLfloat, GLfloat, GLfloat);

		double size = 1000;
		void load(const char* path, GLdouble x, GLdouble y, GLdouble z, GLfloat opacity);
		void load(const char* path, GLdouble x, GLdouble y, GLdouble z);
		void load(Object *obj, string type);
		void loadSpheres();
		void update();
		void render();
		void loadMusic();
		void playBubbleSound(GLfloat x, GLfloat y, GLfloat z);
};

#endif
