#include <Beryl.h>

class Sandbox : public Beryl::Application
{

public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}


};

Beryl::Application* Beryl::CreateApplication()
{
	return new Sandbox();
}