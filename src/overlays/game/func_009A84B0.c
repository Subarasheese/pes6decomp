/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    float x, y, z;
} NetVector;
typedef struct {
    const NetVector *target;
    NetVector rest, velocity;
    u32 flags;
} NetNode;
typedef struct {
    u16 from, to;
    float length, lengthSquared;
} NetLink;
typedef struct {
    u8 reserved00[0x70];
    NetNode nodes[239];
    NetLink edges[413];
} NetMesh;
typedef struct {
    float damping, anchorDamping, stiffness;
    u8 reserved0C[28];
} NetProfile;
extern const NetProfile D_00CAA42C[];
extern const float D_00CAA4F0[2];
void func_009A84B0(NetMesh *mesh, s32 profile) {
    s32 i;
    NetNode *node = mesh->nodes;
    float damping = D_00CAA42C[profile].damping;
    for (i = 0; i < 235; ++i) {
        node->velocity.x *= damping;
        node->velocity.y *= damping;
        node->velocity.z *= damping;
        node->velocity.x -= D_00CAA4F0[node->target->x - node->rest.x < 0.0f];
        node->velocity.y -= D_00CAA4F0[node->target->y - node->rest.y < 0.0f];
        node->velocity.z -= D_00CAA4F0[node->target->z - node->rest.z < 0.0f];
        ++node;
    }
    damping = D_00CAA42C[profile].anchorDamping;
    for (i = 235; i < 239; ++i) {
        mesh->nodes[i].velocity.x = mesh->nodes[i].velocity.x * damping;
        mesh->nodes[i].velocity.y = mesh->nodes[i].velocity.y * damping;
        mesh->nodes[i].velocity.z = mesh->nodes[i].velocity.z * damping;
    }
}
