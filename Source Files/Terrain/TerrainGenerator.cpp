#include "TerrainGenerator.h"
//idk why this include isnt happy in vs code






std::vector<TerrainData_Type> PixelEngine::TerrainGenerator::createTerrainVerts(const std::vector<std::vector<float>>& terrainMap)
{
    std::vector<TerrainData_Type> m_Verts;
    int tempWidth  = terrainMap.size();
    int tempHeight = terrainMap[0].size();

}

void PixelEngine::TerrainGenerator::setTerrainWidth(int tempTerrainWidth)                           { m_TerrainWidth  = tempTerrainWidth;  }
void PixelEngine::TerrainGenerator::setTerrainHeight(int tempTerrainHeight)                         { m_TerrainHeight = tempTerrainHeight; }
void PixelEngine::TerrainGenerator::setTerrainVerts(const std::vector<TerrainData_Type> &tempVerts) { m_Verts         = tempVerts;         }
void PixelEngine::TerrainGenerator::setTerrainIndexs(const std::vector<unsigned int>& tempIndex)    { m_Indicies      = tempIndex;         }

int PixelEngine::TerrainGenerator::getTerrainWidth()  const { return m_TerrainWidth;  }
int PixelEngine::TerrainGenerator::getTerrainHeight() const { return m_TerrainHeight; }

const std::vector<TerrainData_Type>& PixelEngine::TerrainGenerator::getTerrainVerts() const { return m_Verts; }
const std::vector<unsigned int>& PixelEngine::TerrainGenerator::getTerrainIndexs() const { return m_Indicies;}

 
 /*** To be modified and implemented
  * 
  * 
    std::vector<TerrainData_Type> TerrainGenerator::generateVertices(const std::vector<std::vector<float>>& heightmap)
{
    std::vector<TerrainData_Type> vertices;
    int width = heightmap.size();
    int height = heightmap[0].size();

    for (int i = 0; i < width; ++i) {
        for (int j = 0; j < height; ++j) {
            TerrainData_Type vertex;
            vertex.position = glm::vec3(i, heightmap[i][j], j);
            vertex.normal = glm::vec3(0.0f, 1.0f, 0.0f); // Calculate normals later
            vertex.texCoords = glm::vec2(static_cast<float>(i) / (width - 1), static_cast<float>(j) / (height - 1));
            vertices.push_back(vertex);
        }
    }

    return vertices;
}

std::vector<unsigned int> TerrainGenerator::generateIndices(const std::vector<std::vector<float>>& heightmap)
{
    std::vector<unsigned int> indices;
    int width = heightmap.size();
    int height = heightmap[0].size();

    for (int i = 0; i < width - 1; ++i) {
        for (int j = 0; j < height - 1; ++j) {
            int topLeft = i * height + j;
            int topRight = topLeft + 1;
            int bottomLeft = (i + 1) * height + j;
            int bottomRight = bottomLeft + 1;

            indices.push_back(topLeft);
            indices.push_back(bottomLeft);
            indices.push_back(topRight);

            indices.push_back(topRight);
            indices.push_back(bottomLeft);
            indices.push_back(bottomRight);
        }
    }

    return indices;
}

void TerrainGenerator::calculateNormals(std::vector<TerrainData_Type>& vertices, const std::vector<unsigned int>& indices)
{
    for (size_t i = 0; i < indices.size(); i += 3) {
        unsigned int i0 = indices[i];
        unsigned int i1 = indices[i + 1];
        unsigned int i2 = indices[i + 2];

        glm::vec3 v1 = vertices[i1].position - vertices[i0].position;
        glm::vec3 v2 = vertices[i2].position - vertices[i0].position;
        glm::vec3 normal = glm::normalize(glm::cross(v1, v2));

        vertices[i0].normal += normal;
        vertices[i1].normal += normal;
        vertices[i2].normal += normal;
    }

    for (auto& vertex : vertices) {
        vertex.normal = glm::normalize(vertex.normal);
    }
}***/