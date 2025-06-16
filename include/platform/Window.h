#pragma once

// Forward-declare GLFW window type (we'll include the real header in the .cpp)
struct GLFWwindow;

class Window {
public:
    Window(int width, int height, const char* title);
    ~Window();

    bool shouldClose() const;
    void pollEvents() const;
    void swapBuffers() const;
private:
    GLFWwindow* _window;
};