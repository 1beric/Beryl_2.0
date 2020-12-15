#pragma once

#include "Core.h"

namespace Beryl {

	class BERYL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// define in client
	Application* CreateApplication();

}