#pragma once

// _declspec(dllexport/dllimport) are windows thingy

#ifdef SP_PLATFORM_WINDOWS
	#ifdef SP_BUILD_DLL // we are trying to build the dll
		#define SOAP_API _declspec(dllexport)
	#else
		#define SOAP_API _declspec(dllimport)
	#endif
#else
	#error Soap only supports Windows..
#endif

