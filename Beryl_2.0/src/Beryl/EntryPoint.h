#pragma once

#ifdef BL_PLATFORM_WINDOWS
	
extern Beryl::Application* Beryl::CreateApplication();

int main(int argc, char **argv) 
{
	auto app = Beryl::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Beryl only supports Windows for now.

#endif