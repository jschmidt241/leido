#include "log.h"

namespace leido {
	log::log(int& argc, char* argv[])
	{
		loguru::init(argc, argv);
		loguru::add_file("core.log", loguru::Append, loguru::Verbosity_MAX);
		loguru::add_file("client.log", loguru::Append, loguru::Verbosity_WARNING);
	}
	int log::core_logger(int priority, std::string fmt)
	{
		char* formatted_string = const_cast<char*>(fmt.c_str());
		switch (priority) {
		case 0:
			LOG_F(INFO, formatted_string);
		case 1:
			LOG_F(WARNING, formatted_string);
		case 2:
			LOG_F(ERROR, formatted_string);
		case 3:
			LOG_F(MAX, formatted_string);
		}
		return 0;
	}

	int log::client_logger(int priority, std::string fmt)
	{
		char* formatted_string = const_cast<char*>(fmt.c_str());
		switch (priority) {
		case 0:
			LOG_F(INFO, formatted_string);
		case 1:
			LOG_F(WARNING, formatted_string);
			return 0;
		}
	}
}