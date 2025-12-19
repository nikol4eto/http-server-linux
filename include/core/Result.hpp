#pragma once
#include <optional>
#include <string>

namespace core {

struct Result {
    bool ok = true;
    std::optional<std::string> error;

    static Result success() { return Result{true, std::nullopt}; }
    static Result failure(std::string msg) { return Result{false, std::move(msg)}; }
};

} // namespace core
