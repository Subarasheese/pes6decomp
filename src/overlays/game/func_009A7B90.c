/* compiler: mwcc-3.0.1b151 */
#include "pes6/goal_net.h"
static inline s32 solveEdges(NetMesh *mesh, s32 profile) {
    NetLink *edge;
    s32 count;
    s32 sum;
    float stiffness;
    stiffness = D_00CAA42C[profile].stiffness;
    edge = mesh->edges;
    sum = 0;
    for (count = 0; count < 413; count++) {
        sum += func_009A8670(&mesh->nodes[edge->from], &mesh->nodes[edge->to], edge, stiffness);
        ++edge;
    }
    return sum;
}
s32 func_009A7B90(NetMesh *mesh, s32 settling, s32 profile) {
    NetLink *edge;
    NetNode *node;
    s32 count;
    s32 i;
    s32 sum;
    float stiffness;
    if (!(settling & 255)) {
        func_009A84B0(mesh, profile);
        return solveEdges(mesh, profile);
    } else {
        for (node = mesh->nodes, i = 0; i < 239; ++i) {
            node->velocity.x *= 0.0f;
            node->velocity.y *= 0.0f;
            node->velocity.z *= 0.0f;
            node->velocity.x = node->velocity.x + 0.0f - (node->target->x - node->rest.x) * 0.07f;
            node->velocity.y = node->velocity.y + 0.0f - (node->target->y - node->rest.y) * 0.07f;
            node->velocity.z = node->velocity.z + 0.0f - (node->target->z - node->rest.z) * 0.07f;
            ++node;
        }
        stiffness = D_00CAA42C[profile].stiffness;
        edge = mesh->edges;
        sum = 0;
        for (count = 0; count < 413; count++) {
            sum += func_009A8670(&mesh->nodes[edge->from], &mesh->nodes[edge->to], edge, stiffness);
            ++edge;
        }
        return sum;
    }
}
