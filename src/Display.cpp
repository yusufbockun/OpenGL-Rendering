#include "Display.h"

Display::Display(int width, int height, const char* title) {
    std::cout << "Constructor working " << std::endl;
    m_IsClosed = false;
    if (!glfwInit()) {
        std::cout << "Glfw library has an error. Please fix that." << std::endl;
        return;
    }
    window = glfwCreateWindow(width, height, title, NULL, NULL);
    if (!window) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return;
    }
    glfwMakeContextCurrent(window);
    if (glewInit() != GLEW_OK) {
        std::cout << "Glew library has an error. Please fix that." << std::endl;
        return;
    }
}
void Display::Clear(float r, float g, float b, float a) {
    glClearColor(r, g, b, a);
    glClear(GL_COLOR_BUFFER_BIT);
}
bool Display::IsClosed() {
    if (glfwWindowShouldClose(window)) {
        m_IsClosed = true;
    }
    return m_IsClosed;
}

Display::~Display() {
    std::cout << "Destructor working" << std::endl;
    glfwDestroyWindow(window);
    glfwTerminate();
}

void Display::Update() {
    glfwSwapBuffers(window);
    glfwPollEvents();
}
