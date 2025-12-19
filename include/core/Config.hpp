#pragma once
#include <cstdint>

namespace core {

struct Config {
    uint16_t port = 8080;
    int backlog = 128;
    int max_events = 64;
};

} // namespace core
