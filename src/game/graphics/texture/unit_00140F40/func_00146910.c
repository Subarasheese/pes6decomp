/* compiler: mwcc-3.0.1b198 */
#include "types.h"
typedef struct PoolNode {
    struct PoolNode *next;
    u32 payload[3];
} PoolNode;
typedef struct PoolLink {
    struct PoolLink *next;
    u32 payload[2];
} PoolLink;
typedef struct {
    PoolNode nodes[256];
    PoolLink links[256];
    PoolNode *freeNodes;
    PoolLink *freeLinks;
    u32 remainder[2];
} NodePool;
extern NodePool D_00509070;
extern void *memset(void *, int, unsigned int);
void func_00146910(void) {
    s32 i;
    memset(&D_00509070, 0, sizeof(NodePool));
    for (i = 0; i < 255; ++i)
        D_00509070.nodes[i].next = &D_00509070.nodes[i + 1];
    D_00509070.freeNodes = D_00509070.nodes;
    for (i = 0; i < 255; ++i)
        D_00509070.links[i].next = &D_00509070.links[i + 1];
    D_00509070.freeLinks = D_00509070.links;
}
