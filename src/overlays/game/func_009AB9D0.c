/* compiler: mwcc-3.0.1b151 */
#include "pes6/goal_net.h"

s32 func_009AB9D0(NetMesh *mesh) {
    s32 i;
    NetNode *node = mesh->nodes;
    for (i = 0; i < NET_CLOTH_NODES; ++i, ++node) {
        u8 movable = 1;
        node->target = func_0018D4F0((u16)i);
        if (!node->target)
            return 0;
        node->rest = *node->target;
        if (i < 119) {
            if (i % 7 == 6)
                movable = 0;
        } else if (i < 187) {
            if ((i - 119) % 4 == 0)
                movable = 0;
        } else if (i < 211) {
            s32 cell = i - 187;
            if (cell % 4 == 0 || cell / 4 == 0)
                movable = 0;
        } else {
            s32 cell = i - 211;
            if (cell % 4 == 0 || cell / 4 == 0)
                movable = 0;
        }
        node->movable = movable;
    }
    for (i = 0; i < 4; ++node, ++i) {
        node->target = func_0018D4E0((u16)(i * 4));
        if (!node->target)
            return 0;
        node->rest = *node->target;
        if (i == 0 || i == 3)
            node->movable = 0;
        else
            node->movable = 1;
    }
    for (i = 0; i < NET_EDGE_VERTICES; ++i)
        mesh->edgeVertices[i] = func_0018D4E0((u16)i);
    func_009ABC10(mesh->edges);
    return 1;
}
