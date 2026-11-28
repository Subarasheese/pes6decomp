/* compiler: mwcc-3.0.1b151 */
#include "pes6/goal_net.h"

extern u8 D_00CBA9EF[];

static inline void restoreNetNode(NetNode *node) {
    *node->target = node->rest;
    node->atRest = 1;
    node->velocity.x = 0.0f;
    node->velocity.y = 0.0f;
    node->velocity.z = 0.0f;
}

void func_009AB6D0(NetState *state, NetMesh *mesh) {
    s32 i;
    if (state->resetPending) {
        state->resetPending = 0;
        for (i = 0; i < NET_NODE_COUNT; ++i) {
            NetNode *node = mesh->nodes + i;
            restoreNetNode(node);
        }
        func_009B0610(mesh);
        state->moving = 0;
        state->motionFlags = 0;
        D_00CBA9EF[0] = 0;
    }
}
