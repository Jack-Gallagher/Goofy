#ifndef __NC_LOG_H__
#define __NC_LOG_H__

#if PRAGMA_ONCE
#pragma once
#endif

#include <spdlog/spdlog.h>

std::shared_ptr<spdlog::logger> GetLogger(void);

#define GOOFY_TRACE(...) SPDLOG_TRACE(GetLogger(), __VA_ARGS__)
#define GOOFY_DEBUG(...) SPDLOG_DEBUG(GetLogger(), __VA_ARGS__)
#define GOOFY_INFO(...)  SPDLOG_INFO(GetLogger(), __VA_ARGS__)
#define GOOFY_WARN(...)  SPDLOG_WARN(GetLogger(), __VA_ARGS__)
#define GOOFY_ERROR(...) SPDLOG_ERROR(GetLogger(), __VA_ARGS__)

#endif // !__NC_LOG_H__
