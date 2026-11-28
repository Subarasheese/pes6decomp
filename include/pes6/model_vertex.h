#ifndef PES6_MODEL_VERTEX_H
#define PES6_MODEL_VERTEX_H

#include "types.h"

typedef struct {
    f32 x, y, z;
} ModelVertexPosition;

typedef struct {
    ModelVertexPosition position;
    u8 reserved0C[0x18 - 0x0c];
} ModelVertex24;

typedef struct {
    ModelVertexPosition position;
    u8 reserved0C[0x30 - 0x0c];
} ModelVertex48;

typedef struct {
    u8 reserved00[0x0c];
    ModelVertex48 *vertices48;
    u8 reserved10[0x20 - 0x10];
    ModelVertex24 *vertices24;
} ModelVertexBuffers;

extern ModelVertexPosition *func_0018D4E0(u16 index);
extern ModelVertexPosition *func_0018D4F0(u16 index);
extern ModelVertexPosition *func_0019FCE0(ModelVertexBuffers *model, u16 index);
extern ModelVertexPosition *func_0019FD00(ModelVertexBuffers *model, u16 index);

#endif
