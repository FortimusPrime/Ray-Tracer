#include "linearAlgebraFunctions.h"

Vector3D getCrossProduct(Vector3D a, Vector3D b){
    double cx = a.getY() * b.getZ() - a.getZ() * b.getY();
    double cy = a.getZ() * b.getX() - a.getX() * b.getZ();
    double cz = a.getX() * b.getY() - a.getY() * b.getX();
    return Vector3D(cx, cy, cz);
}

double generateRandomNumber(double min, double max){
    // Set up random number generator
    random_device rd; // Seed
    mt19937 gen(rd()); // Mersenne Twister engine for generating random numbers
    uniform_int_distribution<> distrib(min, max); // Uniform distribution within [min, max]

    // Generate a random number within the range [min, max]
    double random_number = distrib(gen);
    return random_number;
}

Vector3D ColorMax(Vector3D color){
    array<double, 3> colorArray = {color.getX(), color.getY(), color.getZ()};
    for (int i = 0; i < 3; i++){
        if (colorArray[i] > 255){
            colorArray[i] = 255;
        }
        else if (colorArray[i] < 0){
            colorArray[i] = 0;
        }
    }
    Vector3D newColor = Vector3D(colorArray[0], colorArray[1], colorArray[2]);
    return newColor;
}