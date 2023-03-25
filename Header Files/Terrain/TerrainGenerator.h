
/*******************************************************************************************************************************
 * @class   : TerrainGenerator
 * @brief   : Used to generate a terrain by getting the verticies, getting the terrain indicies and calculating the normals
 * 
 * @author  : William Halling
 * @date    : 26 March
 * @version : 1.0
 * @bug     : unknown there may be some out there bring coffee just incase as engineer was tired when creating this. 
 *******************************************************************************************************************************/

#include <vector>
#include <glm/glm.hpp>
#include "TerrainData_Type.h"

namespace PixelEngine
{
    class TerrainGenerator
    {
        public:
                   
                /*************************************************************
                 * @brief  : getTerrainWidth()
                 * @brief  : used to get the terrain width
                 * @return : m_TerrainWidth - int const
                 *************************************************************/
 
            int getTerrainWidth() const;


                /*************************************************************
                 * @brief  : getTerrainHeight()
                 * @brief  : used to get the terrain height
                 * @return : m_TerrainHeight - int const
                 *************************************************************/

            int getTerrainHeight() const;


                /*************************************************************
                 * @brief : getTerrainVerts()
                 * @brief : used to create the vertexs of the terrain where two points meet, used for positon and textures
                 * @return : std::vector<>Verts from TerrainData_Type
                 *************************************************************/

            const std::vector<TerrainData_Type>& getTerrainVerts() const;


                /*************************************************************
                 * @brief : getTerrainIndexs()
                 * @brief : used to create the terrain index values for the verticies
                 * @brief : std::vector<unsigned ints>
                 *************************************************************/

            const std::vector<unsigned int>& getTerrainIndexs() const;


                /*************************************************************
                 * @brief  : setTerrainWidth()
                 * @brief  : used to set m_TerrainWidth with tempTerrainWidth
                 * @param  : int tempTerrainWidth
                 * @return : void
                 *************************************************************/

            void setTerrainWidth(int tempTerrainWidth); 


                /*************************************************************
                 * @brief  : setTerrainHeight()
                 * @brief  : used to set m_TerrainHeight with tempTerrainHeight
                 * @param  : int tempTerrainHeight
                 * @return : void
                 *************************************************************/

            void setTerrainHeight(int height);


                /*************************************************************
                 * @brief  : setTerrainVerts()
                 * @brief  : used to set 
                 * @param  : const std::vector<TerrainData_Type>& tempVert
                 * @return : void
                 *************************************************************/

            void setTerrainVerts(const std::vector<TerrainData_Type>& tempVert) {


                /*************************************************************
                 * @brief  : setTerrainIndexs()
                 * @brief  : used to set 
                 * @param  : const std::vector<unsigned int>&
                 * @return : void
                 *************************************************************/

            void setTerrainIndexs(const std::vector<unsigned int>& tempIndex);


                /*************************************************************
                 * // was torn between create and get you decide    // was torn between create and get you decide   // was torn between create and get you decide
            
            
                 * @brief : createTerrainVerts()
                 * @brief : used to create the vertexs of the terrain where two points meet, used for positon and textures
                 *************************************************************/

            static std::vector<TerrainData_Type> createTerrainVerts(const std::vector<std::vector<float>>& terrainMap); 
                
                /*************************************************************
                 * @brief : createTerrainIndices()
                 * @brief : used to get the terrains indicie values, allows reuse of verticies representing a positon of a vertex in the dynamic array of verts that make up our mesh.
                 * @brief : Expresses order in which verts are drawn for creation of triangles 
                 * @brief : Normals will be used for collision detection and potential physics simulation
                 *************************************************************/

            static std::vector<unsigned int> createTerrainIndices(const std::vector<std::vector<float>>& terrainMap); // was torn between create and get you decide
            
            
                /*************************************************************
                 * @brief : calculateNormals()
                 * @brief : used to calculate the normals within the terrain, used to map how light bounces off of the terrain including shading of the 3D terrains. 
                 * @brief : Normals will be used for collision detection and potential physics simulation
                 *************************************************************/

            static void calculateNormals(std::vector<TerrainData_Type>& vertices, const std::vector<unsigned int>& terrainMap);



        private:
            int m_TerrainWidth;
            int m_TerrainHeight;
            std::vector<TerrainData_Type> m_Verts;
            std::vector<unsigned int> m_Indicies;
    };
}




/********************
 * 
 * 
 * Notes for later implementing lod
 * class TerrainRenderer {
public:
    void render(const Terrain& terrain, const Camera& camera) {
        // Determine the distance between the camera and the terrain
        float distance = glm::distance(camera.getPosition(), terrain.getPosition());

        // Determine the level of detail based on the distance
        int lod = calculateLOD(distance);

        // Get the vertices and indices for the terrain based on the level of detail
        std::vector<TerrainVertexData> vertices = terrain.getVertices(lod);
        std::vector<unsigned int> indices = terrain.getIndices(lod);

        // Render the terrain using the vertices and indices
        renderTerrain(vertices, indices);
    }

private:
    int calculateLOD(float distance) {
        // Calculate the level of detail based on the distance
        // This can be done using a simple formula or a more complex algorithm
        // For example:
        // int lod = std::max(0, (int)(log2(distance / m_LODFactor)));
        // return std::min(lod, m_MaxLOD);
    }

    void renderTerrain(const std::vector<TerrainVertexData>& vertices, const std::vector<unsigned int>& indices) {
        // Render the terrain using the vertices and indices
    }

    float m_LODFactor;
    int m_MaxLOD;
};
*/