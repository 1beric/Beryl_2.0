#pragma once

#ifdef BL_PLATFORM_WINDOWS
	
extern Beryl::Application* Beryl::CreateApplication();

int main(int argc, char **argv) 
{
	Beryl::Log::Init();
	BL_CORE_WARN("Initialized Log!");
	int a = 5;
	BL_INFO("Initialized Log! {0}", a);

	Beryl::Application* app = Beryl::CreateApplication();
	app->Run();
	delete app;
}
#else
	#error Beryl only supports Windows for now.

#endif