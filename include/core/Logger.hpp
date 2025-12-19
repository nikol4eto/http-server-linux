#pragma once
#include <string_view>

namespace core {

enum class LogLevel { Info, Warn, Error };

class Logger {
public:
    static void log(LogLevel lvl, std::string_view msg);
};

} // namespace core
