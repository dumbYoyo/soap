#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Soap {

	class SOAP_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// core log macros
#define SP_CORE_TRACE(...)   ::Soap::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SP_CORE_INFO(...)    ::Soap::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SP_CORE_WARN(...)    ::Soap::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SP_CORE_ERROR(...)   ::Soap::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SP_CORE_FATAL(...)   ::Soap::Log::GetCoreLogger()->critical(__VA_ARGS__)

// client log macros
#define SP_TRACE(...)        ::Soap::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SP_INFO(...)         ::Soap::Log::GetClientLogger()->info(__VA_ARGS__)
#define SP_WARN(...)         ::Soap::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SP_ERROR(...)        ::Soap::Log::GetClientLogger()->error(__VA_ARGS__)
#define SP_FATAL(...)        ::Soap::Log::GetClientLogger()->critical(__VA_ARGS__)