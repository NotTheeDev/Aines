#pragma once

#ifdef AN_PLATFORM_WINDOWS
	#ifdef AN_BUILD_DLL
		#define AINES_API __declspec(dllexport)
	#else
		#define AINES_API __declspec(dllimport)
	#endif
#else
	#error Aines only supoort Winddows!
#endif
