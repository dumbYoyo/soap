#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Soap::Application* Soap::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Soap::CreateApplication();
	app->Run();
	delete app;
}

#endif
