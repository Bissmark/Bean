#pragma once

#ifdef BN_PLATFORM_WINDOWS
	#ifdef BN_BUILD_DLL
		#define BEAN_API __declspec(dllexport)
	#else
		#define BEAN_API __declspec(dllimport)
	#endif
#else
	#error Bean only supports Windows!
#endif