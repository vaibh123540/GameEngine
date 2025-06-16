#include "platform/Window.h"
#include <GLFW/glfw3.h>    // now safe, no GL headers conflict
#include <iostream>

Window::Window(int w, int h, const char* title) {
    if (!glfwInit()) {
        std::cerr << "Failed to init GLFW\n";
        std::exit(-1);
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    _window = glfwCreateWindow(w, h, title, nullptr, nullptr);
    if (!_window) {
        std::cerr << "Failed to create GLFW window\n";
        glfwTerminate();
        std::exit(-1);
    }
    glfwMakeContextCurrent(_window);
}

Window::~Window() {
    glfwDestroyWindow(_window);
    glfwTerminate();
}

bool Window::shouldClose() const { return glfwWindowShouldClose(_window); }
void Window::pollEvents()   const { glfwPollEvents(); }
void Window::swapBuffers()  const { glfwSwapBuffers(_window); }