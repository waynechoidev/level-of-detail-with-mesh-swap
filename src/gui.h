#pragma once

#include "imgui.h"
#include "imgui_impl_opengl3.h"
#include "imgui_impl_glfw.h"
#include "common.h"

class Gui
{
public:
	Gui(){};

	void initialise(GLFWwindow *window);
	void update(bool &useTexture, bool &wireFrame, float &translation, float &scaling, float &rotation, Material &material, Light &light);
	void render();

	~Gui(){};
};
