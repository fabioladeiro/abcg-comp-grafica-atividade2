# Computação Gráfica - Atividade 2

Esta atividade tem como objetivo manipular poligonos, com seu visualizador usando OpenGL. O código foi feito usando a biblioteca ABCg, com OpenGL.

Aluna: Fabiola Filgueira Deiró dos Santos

RA: 11201721084

## Explicação

Nesta foi utilizada a biblioteca ABCg para construção da inteface. A atividade está contida na pasta `./examples/polygons`, e contém 4 arquivos principais:

- main.cpp
- window.cpp
- window.hpp
- CMakeLists.txt

## Página web

Essa atividade está disponível em uma página web com a aplicação rodando em WebAssembly:

## Requerimentos

- [CMake](https://cmake.org/) 3.21.
- Um compilador C++ com suporte pelo menos parcial para C++20 (testado with GCC 11, Clang 13, MSVC 17, e emcc 3.1).
- Um sistema com suporte para OpenGL 3.3 (OpenGL backend) or Vulkan 1.3 (Vulkan backend).

Para WebAssembly:

- [Emscripten](https://emscripten.org/).
- Um browser com suporte para WebGL 2.0.

Para criar aplicações de desktop:

- [SDL](https://www.libsdl.org/) 2.0.
- [SDL_image](https://www.libsdl.org/projects/SDL_image/) 2.0.
- [GLEW](http://glew.sourceforge.net/) 2.2.0 (required for OpenGL-based applications).
- [Vulkan](https://www.lunarg.com/vulkan-sdk/) 1.3 (required for Vulkan-based applications).

---

## Instalação e uso

Clonando o repositório:

    git clone https://github.com/fabioladeiro/abcg-comp-grafica-atividade2.git
    cd abcg-comp-grafica-atividade2

### Windows

- Execute `build-vs.bat` para build com o Visual Studio 2022.
- Execute `build.bat` para build com GCC (MinGW-w64).

### Linux and macOS

Execute `./build.sh`.

### WebAssembly

1.  Execute `build-wasm.bat` (Windows) ou `./build-wasm.sh` (Linux/macOS).
2.  Execute `runweb.bat` (Windows) or `./runweb.sh` (Linux/macOS) para executar o servidor web local.
3.  Abra <>.
