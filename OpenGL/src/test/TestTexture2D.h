#pragma once
#include "Test.h"

namespace test {
	class TestTexture2D:public Test
	{
	public:
		TestTexture2D();
		~TestTexture2D();

		void OnUpdate(float deltatime) override;
		void OnRender() override;
		void OnImGuiRender() override;
	private:
		float m_ClearColor[4];
	};
}