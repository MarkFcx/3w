
#ifndef WANOSAUTOTUNING_GLOBAL_H
#define WANOSAUTOTUNING_GLOBAL_H

//#if defined (BUILD_DLL) && PLATFORM == WINDOWS
//#if defined(WANOSAUTOTUNING_LIBRARY)
//    #  define WANOSAUTOTUNING_EXPORT __declspec(dllexport)
//    #else
//    #  define WANOSAUTOTUNING_EXPORT __declspec(dllimport)
//#endif
//    #endif
#ifdef WIN32 // Windows

#ifdef WANOSAUTOTUNING_LIBRARY
# define WANOSAUTOTUNING_EXPORT __declspec(dllexport)
#else
# define WANOSAUTOTUNING_EXPORT __declspec(dllimport)
#endif

#else // Linux

#ifdef WANOSAUTOTUNING_LIBRARY
# define WANOSAUTOTUNING_EXPORT __attribute__((visibility("default")))
#else
# define WANOSAUTOTUNING_EXPORT
#endif
#endif // WANOSAUTOTUNING_GLOBAL_H





#endif
