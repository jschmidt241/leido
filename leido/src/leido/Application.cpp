
#include "Application.h"
#include "../libs/loguru.cpp"

namespace leido 
{

	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run(int argc, char** argv)
	{
		loguru::init(argc, argv);
		loguru::add_file("everything.log", loguru::Append, loguru::Verbosity_MAX);
		LOG_F(INFO, "Hello log file!");
		while (true);
	}

}