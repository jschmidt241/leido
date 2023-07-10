#pragma once
#include "Core.h"

namespace leido {
	class LEIDO_API log
	{
	public:
		log(int& argc, char* argv[]);
		~log();
		int core_logger(int priority, std::string fmt);
		int client_logger(int priority, std::string fmt);
	};
}
