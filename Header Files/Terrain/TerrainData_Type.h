
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

    /*******************************************************************************************************************************
     * @class   : TerrainData_Type
     * @brief   : Used to store relevant informationt o a terrain such as its current position, the normal positons, and holding the textureCooridnates
     * 
     * @author  : William Halling
     * @date    : 26 March
     * @version : 1.0
     * @bug     : unknown there may be some out there bring coffee just incase as engineer was tired when creating this. 
     *******************************************************************************************************************************/

typedef struct 
{
    glm::vec3 m_XYZ_Pos;
    glm::vec3 m_NormalPoints;
    glm::vec2 m_TexturePoints;
}
TerrainData_Type;