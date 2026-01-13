# HTTP Server in C++

This is a simple HTTP/1.1 server written in C++ for Linux.
The project is built with CMake and tested using WSL2 on Windows.

The main goal of the project is to learn how HTTP works and how a basic
server can be implemented using sockets and epoll.

---

## What the server does

- Accepts TCP connections
- Reads and parses basic HTTP/1.1 requests
- Handles simple GET requests
- Sends correct HTTP responses
- Uses non-blocking sockets and epoll

---

## Project structure

- `core/` – common helper code (config, logging)
- `net/` – networking code (sockets, epoll, connections)
- `http/` – HTTP-related logic (parser, router, response)
- `src/` – source files

---

## Build

Requirements:
- Linux / WSL2
- C++ compiler (C++20)
- CMake

```bash
cmake -S . -B build
cmake --build build
