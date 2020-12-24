#include <Beryl.h>




class ExampleLayer : public Beryl::Layer
{
public:
	ExampleLayer()
		: Layer("Example") {}

	void OnUpdate() override
	{
		BL_INFO("ExampleLayer::OnUpdate");
	}

	void OnEvent(Beryl::Event& event) override
	{
		BL_TRACE("{0}", event);
	}

};

class Sandbox : public Beryl::Application
{

public:
	Sandbox()
	{
		PushLayer(new ExampleLayer());
	}

	~Sandbox()
	{

	}


};

Beryl::Application* Beryl::CreateApplication()
{
	return new Sandbox();
}