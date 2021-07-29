#pragma once

#ifdef AN_PLATFORM_WINDOWS

extern Aines::Application* Aines::CreateApplication();

int main(int argc,char** argv)
{
	printf("Aines Engine Initialization"); // Easter Egg
	auto app = Aines::CreateApplication();
	app->Run();
	delete app;
}

#endif