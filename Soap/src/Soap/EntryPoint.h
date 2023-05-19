#pragma once

#ifdef SP_PLATFORM_WINDOWS

extern Soap::Application* Soap::CreateApplication();

int main(int argc, char** argv)
{
	//shouldnt be called here
	Soap::Log::Init();
	SP_CORE_ERROR("fuk u!");
	SP_CORE_WARN("yo!");
	SP_INFO("hiie, {0}", 5);

	auto app = Soap::CreateApplication();
	app->Run();
	delete app;
}

#endif
