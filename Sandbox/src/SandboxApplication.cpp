#include <Soap.h>

class Sandbox : public Soap::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Soap::Application* Soap::CreateApplication()
{
	return new Sandbox();
}