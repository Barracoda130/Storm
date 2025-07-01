#pragma once

#ifdef SM_PLATFORM_WINDOWS

extern Storm::Application* Storm::CreateApplication();

int main (int argc, char** argv)
{
	auto app = Storm::CreateApplication();
	app->Run();
	delete app;
}

#else
	#error Storm only supports Windows!
#endif