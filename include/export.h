#ifndef WWISE_AUDIO_TOOLS_EXPORT_H
#define WWISE_AUDIO_TOOLS_EXPORT_H

#if defined(_WIN32) && defined(WWTOOLS_LIBRARY)
#   define WWTOOLS_EXPORT __declspec(dllexport)
#   define WWTOOLS_CALL __cdecl
#else
#   define WWTOOLS_EXPORT
#   define WWTOOLS_CALL
#endif

#endif //WWISE_AUDIO_TOOLS_EXPORT_H