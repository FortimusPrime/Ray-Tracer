#pragma once
// #include "../Source_Code/Constants.h"
#include "../Linear_Algebra/Vector3D.h"
#include "Primitive.h"

array<Primitive, 4> buildTetrahedron(Vector3D color, Vector3D pointA, Vector3D pointB, Vector3D pointC, Vector3D pointD, int specular, double reflective);
 
array<Primitive, 12> buildCube(Vector3D center, double width, Vector3D color);

