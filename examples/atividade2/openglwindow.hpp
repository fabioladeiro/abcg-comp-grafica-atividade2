#ifndef OPENGLWINDOW_HPP_
#define OPENGLWINDOW_HPP_

#include <array>

#include "abcg.hpp"

class OpenGLWindow : public abcg::OpenGLWindow {
 protected:
  void initializeGL() override;
  void paintGL() override;
  void paintUI() override;
  void resizeGL(int width, int height) override;
  void terminateGL() override;

 private:
  GLuint m_vao{};
  GLuint m_vboVertices{};
  GLuint m_vboColors{};
  GLuint m_program{};

  GLint m_translationLoc{};
  GLint m_scaleLoc{};
  GLint m_rotationLoc{};

  float m_rotation{0.0f};
  float m_scale{1.0f};
  glm::vec2 m_translation{glm::vec2(0.0f, 0.0f)};

  int m_viewportWidth{};
  int m_viewportHeight{};

  std::array<float, 4> m_clearColor{0.906f, 0.910f, 0.918f, 1.00f};
};

#endif