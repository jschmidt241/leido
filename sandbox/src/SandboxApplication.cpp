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

int main()
{
	Sandbox* sandbox = new Sandbox();
	sandbox->Run();
	delete(sandbox);
}