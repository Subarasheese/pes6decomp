/* compiler: mwcc-3.0.1b151 */
#include "pes6/goal_net.h"
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
