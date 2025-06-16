#include <GL/glew.h>            // Must come first for function loading
#include <GLFW/glfw3.h>
#include "platform/Window.h"
#include <iostream>

int main() {
    Window window(800, 600, "GameEngine v0.1");

    // Initialize GLEW (after context creation)
    if (glewInit() != GLEW_OK) {
        std::cerr << "Failed to initialize GLEW\n";
        return -1;
    }

    std::cout << "OpenGL " 
              << glGetString(GL_VERSION) 
              << " loaded via GLEW\n";

    while (!window.shouldClose()) {
        glClearColor(0.1f, 0.12f, 0.15f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        window.swapBuffers();
        window.pollEvents();
    }
    return 0;
}
