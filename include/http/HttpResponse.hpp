#include <sstream>
#include <string>
#include <unordered_map>
#pragma once

namespace http {

struct HttpResponse {
    int status = 200;
    std::string reason = "OK";
    std::unordered_map<std::string, std::string> headers;
    std::string body;

    std::string serialize() const {
        std::ostringstream out;

        // the "Hello" of the response
        out << "HTTP/1.1 " << status << " " << reason << "\r\n";

        // informing the client about the content

        out << "Content-Length: " << body.size() << "\r\n";

        // looping through specific map
        for (const auto& [k, v] : headers) {
            out << k << ": " << v << "\r\n";
        }

        // http requirs exactly 1 empty line between headers and body
        out << "\r\n";

        out << body;

        return out.str();
    }
};

}