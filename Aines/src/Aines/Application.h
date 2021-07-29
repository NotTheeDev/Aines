#pragma once

#include "Core.h"

namespace Aines {

	class AINES_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}


