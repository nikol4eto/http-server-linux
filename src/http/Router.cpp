#include "http/Router.hpp"

namespace http {

HttpResponse Router::text(int status, const char* reason, std::string body) {
    HttpResponse res;
    res.status = status;
    res.reason = reason;
    res.body = std::move(body);
    res.headers["Content-Type"] = "text/plain";
    return res;
}

HttpResponse Router::handle(const HttpRequest& req) const {
    if (req.method == "GET" && req.target == "/") {
        return text(200, "OK", "Hello, world\n");
    }

    return text(404, "Not Found", "not found\n");
}

}
