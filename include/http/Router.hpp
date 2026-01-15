#pragma once

#include "http/HttpRequest.hpp"
#include "http/HttpResponse.hpp"
#include <string>

namespace http {

class Router {
public:
    HttpResponse handle(const HttpRequest& req) const;

private:
    static HttpResponse text(int status, const char* reason, std::string body);
};

} // namespace http
