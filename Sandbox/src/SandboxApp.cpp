
#include <Storm.h>

class Sandbox: public Storm::Application
{
public:
	Sandbox()
	{
		// Initialization code for the sandbox application
	}
	~Sandbox()
	{
		// Cleanup code for the sandbox application
	}
};

Storm::Application* Storm::CreateApplication()
{
	return new Sandbox();
}