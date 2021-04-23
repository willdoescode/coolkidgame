#ifndef COOLKIDGAME_CALLBACKS_H
#define COOLKIDGAME_CALLBACKS_H

#include <GLFW/glfw3.h>

#include <cstdio>
#include <iostream>

static void close_callback(GLFWwindow* window) {
  glfwSetWindowShouldClose(window, GLFW_FALSE);
}

static void error_callback(int error, const char* description) {
  fprintf(stderr, "Error: %s\n", description);
}

static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {
  if (action == GLFW_PRESS) {
    std::cout << (char) key;
    fflush(stdout);
  }

  if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
    glfwSetWindowShouldClose(window, GLFW_TRUE);
}

#endif //COOLKIDGAME_CALLBACKS_H
