/// #include <Eigen/Dense> NEW library file if we want two types of terrain if not just delete this class and the .h of this class
#include <random>




/***************
 
 
class HydraulicErosion {
public:
    HydraulicErosion(int tempWidth, int tempHeight, int tempItr, float tempRain, float tempEvapRate)
   
   
};


void Hydraulic_Errosion_Terrain::initializeMaps(){
        watermap.setZero();
        sedimentmap.setZero();
        terrain.setZero();
    }


class HydraulicTerrain : public Terrain {
public:
    HydraulicTerrain(int width, int height, int iterations, float rainAmount, float evaporationRate)
        : WIDTH(width), HEIGHT(height), ITERATIONS(iterations), RAIN_AMOUNT(rainAmount), EVAPORATION_RATE(evaporationRate) {}

    void generate() override {
        // code to generate the terrain
    }

    float getHeight(float x, float z) const override {
        // code to get height at a given position
    }

    void applyErosion() override {
        // code for hydraulic erosion
    }

    void evaporateWater() override {
        // code for water evaporation
    }

private:
    const int WIDTH, HEIGHT, ITERATIONS;
    const float RAIN_AMOUNT, EVAPORATION_RATE, ErosionValue = 0.01f, DepositedValue = 0.1f;

    Eigen::MatrixXf terrain;
    Eigen::MatrixXf watermap;
    Eigen::MatrixXf sedimentmap;

    std::default_random_engine gen;
    std::uniform_int_distribution<int> dis{ 0, WIDTH - 1 };
};

 constructor : WIDTH(width), HEIGHT(height), ITERATIONS(iterations), RAIN_AMOUNT(rainAmount), EVAPORATION_RATE(evaporationRate),
    ErosionValue(0.01f), DepositedValue(0.1f),
    terrain(width, height),
    watermap(width, height),
    sedimentmap(width, height)
    {
        gen = std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count());
        dis = std::uniform_int_distribution<>(0, width - 1);
    }
 void apply() {
        initializeMaps();

        for (int iter = 0; iter < ITERATIONS; ++iter) {
            simulateRain();
            calculateFlow();
            applyErosionAndDeposition();
            evaporateWater();
        }
    }

private:
    void initializeMaps(){
        watermap.setZero();
        sedimentmap.setZero();
        terrain.setZero();
    }

    void simulateRain() {
        int x = dis(gen);
        int y = dis(gen);
        watermap(x, y) += RAIN_AMOUNT;
    }

    void calculateFlow() {
        flow.setZero();

        for (int i = 0; i < WIDTH; ++i) {
            for (int j = 0; j < HEIGHT; ++j) {
                float totalHeight = terrain(i, j) + watermap(i, j);

                for (int dx = -1; dx <= 1; ++dx) {
                    for (int dy = -1; dy <= 1; ++dy) {
                        int nx = i + dx;
                        int ny = j + dy;

                        if (nx < 0 || nx >= WIDTH || ny < 0 || ny >= HEIGHT) continue;
                        float neighborHeight = terrain(nx, ny) + watermap(nx, ny);

                        if (totalHeight > neighborHeight) {
                            float delta = totalHeight - neighborHeight;
                            flow(i, j) += delta;
                            watermap(nx, ny) += delta * EVAPORATION_RATE;
                            watermap(i, j) -= delta * EVAPORATION_RATE;
                        }
                    }
                }
            }
        }
    }

    void applyErosionAndDeposition() {
        erosion = ErosionValue * flow;
        depositedLayer = DepositedValue * sedimentmap;
        terrain -= erosion;
        terrain += depositedLayer;
        sedimentmap += erosion;
        sedimentmap -= depositedLayer;
    }

    void evaporateWater() {
        watermap *= (1.0f - EVAPORATION_RATE);
    }

    const int WIDTH, HEIGHT, ITERATIONS;
    const float RAIN_AMOUNT, EVAPORATION_RATE, ErosionValue, DepositedValue;

    Eigen::MatrixXf terrain;
    Eigen::MatrixXf watermap;
    Eigen::MatrixXf sedimentmap;
    Eigen::MatrixXf flow;

    std::default_random_engine gen;
    std::uniform_int_distribution<> dis;
 * 
 * 
*/