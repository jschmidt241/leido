#pragma once

#ifdef LE_PLATFORM_WINDOWS

extern leido::Application* leido::CreateApplication();

int main(int argc, char** argv)
{	
	auto app = leido::CreateApplication();
	app->Run(argc, argv);
	delete(app);
}

#endif