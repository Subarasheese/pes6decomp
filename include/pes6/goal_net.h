#ifndef PES6_GOAL_NET_H
#define PES6_GOAL_NET_H

#include "pes6/model_vertex.h"

enum { NET_CLOTH_NODES = 235, NET_NODE_COUNT = 239, NET_EDGE_VERTICES = 28, NET_LINK_COUNT = 413 };

typedef ModelVertexPosition NetVector;
typedef struct {
    NetVector *target;
    NetVector rest, velocity;
    u8 movable, atRest, reserved1e[2];
} NetNode;
typedef struct {
    u16 from, to;
    float length, lengthSquared;
} NetLink;
typedef struct {
    NetVector *edgeVertices[NET_EDGE_VERTICES];
    NetNode nodes[NET_NODE_COUNT];
    NetLink edges[NET_LINK_COUNT];
} NetMesh;
typedef struct {
    float damping, anchorDamping, stiffness;
    u8 reserved0C[28];
} NetProfile;

typedef struct {
    s8 side;
    u8 event, reserved02, moving, reserved04[3], packedState;
    u8 reserved08[0xd5 - 8];
    u8 resetPending, motionFlags;
} NetState;

typedef char check_net_mesh_size[sizeof(NetMesh) == 0x31ac ? 1 : -1];

extern s32 func_009AB9D0(NetMesh *mesh);
extern void func_009ABC10(NetLink *edges);
extern void func_009B0610(NetMesh *mesh);
extern void func_009AB6D0(NetState *state, NetMesh *mesh);
extern const NetProfile D_00CAA42C[];
extern void func_009A84B0(NetMesh *mesh, s32 profile);
extern s32 func_009A8670(NetNode *from, NetNode *to, const NetLink *edge, float stiffness);

#endif
