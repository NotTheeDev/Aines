#include <Aines.h>

class Sandbox : public Aines::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

Aines::Application* Aines::CreateApplication()
{
	return new Sandbox();
}