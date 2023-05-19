#include "Log.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace Soap {

	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;

	void Log::Init()
	{
		// %^ = start color range
		// %T = time
		// %n = logger's name, i.e, core or client
		// %v = actual log message
		// %$ = end color range
		spdlog::set_pattern("%^[%T] %n: %v%$");
		s_CoreLogger = spdlog::stdout_color_mt("SOAP");
		s_CoreLogger->set_level(spdlog::level::trace);

		s_ClientLogger = spdlog::stdout_color_mt("APP");
		s_ClientLogger->set_level(spdlog::level::trace);
	}

}
