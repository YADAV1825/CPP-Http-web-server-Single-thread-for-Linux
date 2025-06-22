# c++-Http-web-server-Multi-thread-for-Linux-
A multi thread http web server built from scratch in cpp. (PROJECT)
# 🚀 Multi-threaded HTTP Web Server in C++

> Created by **Rohit Yadav**  
> 3rd Year | NIT Jalandhar | IT Branch

This is a **multi-threaded HTTP web server** built entirely from scratch using **C++ and low-level Linux socket programming**. It handles raw HTTP requests, parses them manually, and responds with HTML or plain text — all without using any external libraries or frameworks.

---

## 🌟 Features

- ✅ Manual socket creation, binding, listening, accepting
- ✅ Parses raw HTTP GET requests
- ✅ Multi-threaded: handles multiple browser clients in parallel
- ✅ Clean object-oriented architecture
- ✅ Serves static HTML files or plain responses
- ✅ 100% written in C++ with no external dependencies

---

## 🔧 Requirements

Works on any **Linux** system with `g++`.

### Install g++ if not already installed:
```bash
sudo apt update
sudo apt install g++
```
##🧩 Project Structure

.
├── simplesocket.hpp / cpp       # Base socket class (create socket, test connection)
├── bindingsocket.hpp / cpp      # Adds bind() functionality
├── connectingsocket.hpp / cpp   # Adds connect() (for client-side use)
├── listeningsocket.hpp / cpp    # Adds listen() for server-side
├── simpleserver.hpp / cpp       # Abstract class for a server
├── testserver.hpp / cpp         # Final server logic (multi-threaded)
├── test.cpp                     # Entry point to run the server
├── main.cpp                     # Optional: used for testing socket classes
├── index.html                   # Optional: static HTML file to serve
└── README.md                    # This file


##⚙️ How It Works
The server uses:

socket(), bind(), listen(), accept(), read(), and write()

Each incoming browser request is handled in its own thread

testserver implements accepter, handler, and responder

##🚀 Running on Linux
1. 📁 Clone or Extract the Project
   ```bash
   git clone https://github.com/your-username/http-web-server.git
   cd http-web-server

   ```
2. Compile
   ```bash
   g++ -std=c++17 -pthread -o server \
    test.cpp \
    testserver.cpp \
    simpleserver.cpp \
    listeningsocket.cpp \
    bindingsocket.cpp \
    connectingsocket.cpp \
    simplesocket.cpp

   ```
3.Run the server
```bash
./server

```
you will see
```bash
---waiting---

```
4. 🌐 Open in Browser
   go to:
   ```bash
   http://localhost:3000

   ```
🧠 Learning Outcomes
This project teaches:

Socket programming in C++

How HTTP actually works (manual request parsing)

Threading with std::thread

Building backend infrastructure from scratch

Clean OOP design and class architecture

💡 Next Goals
 Serve multiple files like /about.html, /style.css

 Add logging of requests

 Support POST requests

 Add a thread pool for efficiency

🙌 Credits
Made by Rohit Yadav
NIT Jalandhar, India
2025

