

#ifndef LOGGER_H
#define LOGGER_H

#include <android/log.h>


#ifndef NDEBUG
#define TAG "日志"
#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, TAG, __VA_ARGS__))
#define LOGD(...) ((void)__android_log_print(ANDROID_LOG_DEBUG, TAG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, TAG, __VA_ARGS__))

#else
#define LOGI(...) NULL
#define LOGW(...) NULL
#define LOGD(...) NULL
#define LOGE(...) NULL

#endif

#endif
