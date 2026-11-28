/* compiler: mwcc-3.0.1b210 */
#include "pes6/goal_net.h"

static inline void placeNetVertex(NetVector *dest, f32 x, f32 y, f32 z) {
    dest->x = x;
    dest->y = y;
    dest->z = z;
}

void func_009B0610(NetMesh *mesh) {
    NetVector *left, *right;
    left = mesh->nodes[0].target;
    placeNetVertex(mesh->edgeVertices[2], left->x, left->y, left->z);
    placeNetVertex(mesh->edgeVertices[3], left->x, 12.0f + left->y, left->z);

    left = mesh->nodes[236].target;
    right = mesh->nodes[35].target;
    placeNetVertex(mesh->edgeVertices[5], left->x, 12.0f + left->y, left->z);
    placeNetVertex(mesh->edgeVertices[6], right->x, right->y, right->z);
    placeNetVertex(mesh->edgeVertices[7], right->x, 12.0f + right->y, right->z);

    left = mesh->nodes[237].target;
    right = mesh->nodes[77].target;
    placeNetVertex(mesh->edgeVertices[9], left->x, 12.0f + left->y, left->z);
    placeNetVertex(mesh->edgeVertices[10], right->x, right->y, right->z);
    placeNetVertex(mesh->edgeVertices[11], right->x, 12.0f + right->y, right->z);

    left = mesh->nodes[112].target;
    placeNetVertex(mesh->edgeVertices[14], left->x, left->y, left->z);
    placeNetVertex(mesh->edgeVertices[15], left->x, 12.0f + left->y, left->z);

    left = mesh->nodes[236].target;
    placeNetVertex(mesh->edgeVertices[18], left->x, left->y, left->z);
    placeNetVertex(mesh->edgeVertices[19], left->x, 12.0f + left->y, left->z);

    left = mesh->nodes[236].target;
    right = mesh->nodes[237].target;
    placeNetVertex(mesh->edgeVertices[20], left->x, left->y, left->z);
    placeNetVertex(mesh->edgeVertices[21], left->x, 12.0f + left->y, left->z);
    placeNetVertex(mesh->edgeVertices[22], right->x, right->y, right->z);
    placeNetVertex(mesh->edgeVertices[23], right->x, 12.0f + right->y, right->z);

    left = mesh->nodes[237].target;
    placeNetVertex(mesh->edgeVertices[24], left->x, left->y, left->z);
    placeNetVertex(mesh->edgeVertices[25], left->x, 12.0f + left->y, left->z);
}
