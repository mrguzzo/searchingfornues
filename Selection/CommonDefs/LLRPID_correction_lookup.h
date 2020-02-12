#ifndef CORRECTION_LOOKUP_H
#define CORRECTION_LOOKUP_H
#include <stdlib.h>
#include <vector>

namespace searchingfornues
{
  struct CorrectionLookUpParameters
  {
    std::vector<std::vector<float>> parameter_correction_edges_pl_0 = {{0.000, 0.524, 0.785, 1.047, 1.309, 1.571,}, {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571,}};

    std::vector<float> correction_table_pl_0 = {
    1.055, 1.053, 1.038, 1.045, 0.997, 1.020, 1.073, 1.017, 1.060, 1.048, 1.059, 1.025, 1.072, 1.025, 1.164, 1.000, 1.025, 1.053, 1.057, 1.046,
    1.063, 1.057, 1.047, 1.046, 1.017, 1.099, 1.074, 1.107, 1.102, 1.081, 1.065, 1.053, 1.000, 0.895, 1.233, 1.218, 1.102, 1.150, 1.137, 1.084,
    };



    std::vector<std::vector<float>> parameter_correction_edges_pl_1 = {{0.000, 0.524, 0.785, 1.047, 1.309, 1.571,}, {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571,}};

    std::vector<float> correction_table_pl_1 = {
    1.014, 0.993, 1.006, 0.986, 1.026, 0.991, 1.075, 1.000, 1.054, 1.026, 1.004, 0.985, 1.033, 1.044, 1.051, 0.984, 1.033, 1.044, 1.055, 1.073,
    1.078, 1.080, 1.011, 1.100, 1.105, 1.092, 1.058, 1.103, 1.138, 1.084, 1.071, 1.036, 1.000, 0.998, 1.000, 1.092, 1.062, 1.076, 1.069, 1.028,
    };



    std::vector<std::vector<float>> parameter_correction_edges_pl_2 = {{0.000, 0.524, 0.785, 1.047, 1.309, 1.571,}, {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571,}};

    std::vector<float> correction_table_pl_2 = {
    1.000, 1.000, 1.066, 1.074, 1.019, 1.104, 1.003, 1.117, 1.000, 1.000, 1.061, 0.977, 0.988, 0.995, 1.003, 1.013, 0.892, 0.920, 0.976, 0.976,
    0.981, 0.989, 0.995, 1.012, 1.000, 0.900, 0.921, 0.965, 0.987, 0.989, 0.962, 0.937, 1.000, 0.830, 0.985, 0.962, 1.005, 1.023, 0.996, 1.002,
    };
  };
}


#endif