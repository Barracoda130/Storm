#pragma once

#include "Core.h"

namespace Storm {

	class STORM_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}

