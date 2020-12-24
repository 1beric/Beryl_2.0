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


#ifdef BL_ENABLE_ASSERTS
	#define BL_CORE_ASSERT(x, ...) { if (!(x))  { BL_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define BL_ASSERT(x, ...) { if (!(x))  { BL_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define BL_CORE_ASSERT(x, ...)
	#define BL_ASSERT(x, ...) 
#endif



#define BIT(x) (1 << x)