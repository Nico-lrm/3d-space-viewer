#include "Application.hpp"
#include "Renderer/OpenGL/Buffer/SSBO.hpp"
#include "Renderer/RenderWindow.hpp"

int main(int argc, char** argv)
{
    auto app{ Application::getInstance(FULLSCREEN) };
    app->Run();
    return EXIT_SUCCESS;
} 