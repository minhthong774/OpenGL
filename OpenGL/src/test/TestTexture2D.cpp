#include "TestTexture2D.h"

#include "GL/glew.h"
#include "Renderer.h"
#include "imgui/imgui.h"

namespace test {
	TestTexture2D::TestTexture2D()
	{
	}

	TestTexture2D::~TestTexture2D()
	{
	}

	void TestTexture2D::OnUpdate(float deltatime)
	{
	}

	void TestTexture2D::OnRender()
	{
		GLCALL(glClearColor( 0.0f, 0.0f, 0.0f, 1.0f ));
		GLCALL(glClear(GL_COLOR_BUFFER_BIT));
	}

	void TestTexture2D::OnImGuiRender()
	{
	}

}