#include "Test.h"
#include "imgui/imgui.h"

namespace test {

	TestMenu::TestMenu(Test*& currentTestPointer)
		:m_CurrentTest(currentTestPointer)
	{

	}

	void TestMenu::OnImGuiRender()
	{
		for (auto& m_Test : m_Tests)
		{
			if (ImGui::Button(m_Test.first.c_str()))
				m_CurrentTest=m_Test.second();
		}
	}

}