#pragma once
#ifndef __PLUGIN_SETTINGS__
#define __PLUGIN_SETTINGS__
	#ifdef PLUGIN_EXPORTS 
	#define PLUGIN_API __declspec(dllexport)
	#elif PLUGIN_IMPORTS
	#define PLUGIN_API __declspec(dllimport)
	#else
	#define PLUGIN_API
	#endif 
#endif /* defined (__PLUGIN_SETTINGS__) */

