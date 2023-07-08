#pragma once
#include "Core.h"

namespace leido {
	class LEIDO_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
