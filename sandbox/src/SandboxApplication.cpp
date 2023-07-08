#include <leido.h>

class Sandbox : public leido::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

leido::Application* leido::CreateApplication()
{
	return new Sandbox();
}