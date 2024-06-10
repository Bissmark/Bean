#pragma once

#include "Core.h"

namespace Bean {
	class BEAN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();
}

