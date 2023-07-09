#pragma once
#include "Core.h"

namespace leido {
	class LEIDO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run(int argc, char **argv);
	};

	Application* CreateApplication();
}
