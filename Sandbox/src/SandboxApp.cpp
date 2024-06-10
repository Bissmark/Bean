#include <Bean.h>

class Sandbox : public Bean::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Bean::Application* Bean::CreateApplication()
{
	return new Sandbox();
}