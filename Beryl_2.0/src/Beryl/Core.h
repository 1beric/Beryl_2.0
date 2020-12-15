#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BERYL_API __declspec(dllexport)
	#else
		#define BERYL_API __declspec(dllimport)	
	#endif
#else
	#error Beryl only supports Windows for now.

#endif