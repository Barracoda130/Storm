#pragma once

#ifdef SM_PLATFORM_WINDOWS
	#ifdef SM_BUILD_DLL
		#define STORM_API __declspec(dllexport)
	#else
		#define STORM_API __declspec(dllimport)
	#endif
#else
	#error Storm only supports Windows!
#endif