#pragma once

#include "Core.h"

namespace Soap {

	class SOAP_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// defined in client
	Application* CreateApplication();

}
