#ifndef PES6_GOAL_NET_H
#define PES6_GOAL_NET_H

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
extern void func_009A84B0(NetMesh *mesh, s32 profile);
extern s32 func_009A8670(NetNode *from, NetNode *to, const NetLink *edge, float stiffness);

#endif
