#include "GameWindow.h"


void PixelEngine::GameWindow::clear()
{
    m_ProjectTitle = "";
    m_WindowHeight = 0;
    m_WindowHeight = 0;
    m_GameWindow   = nullptr;
}


PixelEngine::GameWindow::GameWindow(int tempWidth, int tempHeight, const char* tempTitle) : m_GameWindow(nullptr), m_WindowWidth(tempWidth), m_WindowHeight(tempHeight), m_ProjectTitle(tempTitle)
{
    m_GameWindow = launchGameWindow(m_WindowWidth, m_WindowHeight, m_ProjectTitle);
    
    glfwMakeContextCurrent(m_GameWindow);
    glfwSwapInterval(1);
}


PixelEngine::GameWindow::~GameWindow()
{
    glfwDestroyWindow(m_GameWindow);
    glfwTerminate();
}


void PixelEngine::GameWindow::getGLFWSettings()
{
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}


GLFWwindow* PixelEngine::GameWindow::getGameWindow()   const { return m_GameWindow;   }
const char* PixelEngine::GameWindow::getProjectTitle() const { return m_ProjectTitle; }
int         PixelEngine::GameWindow::getWindowWidth()          const { return m_WindowWidth;  }
int         PixelEngine::GameWindow::getWindowHeight()         const { return m_WindowHeight; }



void PixelEngine::GameWindow::setProjectTitle(const char* tempTitle) { m_ProjectTitle = tempTitle;  } 
void PixelEngine::GameWindow::setWindowWidth(int tempWidth)          { m_WindowWidth  = tempWidth;  }
void PixelEngine::GameWindow::setWindowHeight(int tempHeight)        { m_WindowHeight = tempHeight; }


void PixelEngine::GameWindow::testIsGLFWWorking()
{
    if (!glfwInit())
    {
        std::cout << "Error: Failed to load GLFW libraries" << std::endl;
        glfwTerminate();
        exit(EXIT_FAILURE);
    }
}


void PixelEngine::GameWindow::testBuildWindow(GLFWwindow* m_GameWindow)
{
    if (!m_GameWindow)
    {
        std::cout << "Error: Failed to create GLFW window " << std::endl;
        
        glfwTerminate();

        exit(EXIT_FAILURE);
    }
}



void PixelEngine::GameWindow::testIsGLADWorking()
{
    if (!gladLoadGLLoader( (GLADloadproc) (glfwGetProcAddress) ) )
    {
        std::cout << "Failed to load GLAD libraries" << std::endl;
        
        exit(EXIT_FAILURE);
    }
}


GLFWwindow* PixelEngine::GameWindow::launchGameWindow(int tempWidth, int tempHeight, const char* tempTitle)
{
    testIsGLFWWorking();

    getGLFWSettings();

    GLFWwindow* m_GameWindow = glfwCreateWindow(tempWidth, tempHeight, tempTitle, NULL, NULL);

    testBuildWindow(m_GameWindow);


    return m_GameWindow;
}