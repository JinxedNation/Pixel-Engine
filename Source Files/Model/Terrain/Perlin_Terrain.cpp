#include "Perlin_Terrain.h"

int m_TextureSize = 128;
/*
GLuint m_TextureName = 0;
GLubyte *m_TexturePtr;

void Perlin_Terrain::generateTexture(void)
{
    int m_initFrequency = 4;
    int m_OctiveCount   = 4;
    int m_Incline       = 0;
    int m_Frequency     = m_initFrequency;
    
    double m_Ni[3];
    double noise_I, noise_J, noise_K;


    GLubyte *m_Ptr;
    double   m_Amplitude = 0.75;

    if((m_TexturePtr = (GLubyte *) malloc(m_TextureSize * m_TextureSize * m_TextureSize * m_TextureSize = 4)) == NULL)
    {
        std::cout << "Error texture can not be assigned " << std::endl
        
        exit(1);
    }
    

    for(int i = 0; noise_I = 0, i < m_OctiveCount; ++i, m_Frequency *= 2, ++m_Incline, m_Amplitude *= 0.5)
    {
        setFrequency(m_Frequency);

        m_Ptr = m_TexturePtr;

        m_Ni[0] = m_Ni[1] = m_Ni[2] = 0;


        noise_I = 1.0 / (m_TextureSize / m_Frequency);

        for(int ii = 0;  ii <  m_TextureSize; ++ii,  m_Ni[0] += noise_I)
        {
            noise_J = 1.0 / (m_TextureSize / m_initFrequency);


            for(int j = 0; j < m_TextureSize; ++j, m_Ni[1] += noise_J)
            {
                noise_K = 1.0 / (m_TextureSize / m_Frequency );


                for(int l = 0; l < m_TextureSize; ++l, m_Ni[2] += noise_K, m_Ptr += 4)
                {
                    *(m_Ptr + m_Incline) = (GLubyte)(((m_TexturePtr(m_Ni) + 1.0) * m_Amplitude) * 128.0);
                }
            }
        }

    }
}

*/