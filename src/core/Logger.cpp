#include "core/Logger.hpp"
#include <iostream>

namespace core {

static const char* levelToStr(LogLevel lvl) {
    switch (lvl) {
        case LogLevel::Info: return "INFO";
        case LogLevel::Warn: return "WARN";
        case LogLevel::Error: return "ERROR";
    }
    return "UNKNOWN";
}

void Logger::log(LogLevel lvl, std::string_view msg) {
    std::cerr << "[" << levelToStr(lvl) << "] " << msg << "\n";
}

} // namespace core
