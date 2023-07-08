#pragma once

#ifdef LE_PLATFORM_WINDOWS
	#ifdef LE_BUILD_DLL
		#define LEIDO_API __declspec(dllexport)
	#else
		#define LEIDO_API __declspec(dllimport)
	#endif
#else
	#error must be on windows
#endif