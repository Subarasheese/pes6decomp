/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct FadeState {
    void *obj;    /* 0x00 */
    void *camera; /* 0x04 */
    s32 level;    /* 0x08 */
    s32 target;   /* 0x0C */
    s32 shown;    /* 0x10 */
    s32 mode;     /* 0x14 */
    void *task;   /* 0x18 */
} FadeState;

extern FadeState *D_003E9DB8;

typedef struct FadePart {
    s32 texture;     /* 0x00 */
    f32 offset[4];   /* 0x04 */
    u8 x14[8];       /* 0x14 */
} FadePart;

typedef struct FadePartList {
    FadePart *parts;
    s32 count;
} FadePartList;

typedef struct Vec4 {
    f32 v[4];
} Vec4;

extern FadePartList D_003B31B0[2];

void *func_001EE0D0(void);
void func_001EDA30(void *obj, s32 a);
void func_001EDAE0(void *obj, s32 on);
void func_001ED880(void *obj, f32 a);
void func_001ED840(void *obj, s32 a);
s32 func_001E6E10(s32 texture);
void func_001B5350(Vec4 *pos, void *a, void *obj, s32 tex, f32 b, f32 c);

/* Build the state's object from part list variant (0 or 1; anything else is 0). */
void func_002D9400(FadeState *s, u32 variant)
{
    FadePart *part;
    f32 *off;
    s32 tex;
    s32 v;
    s32 i;
    void *obj;

    if (variant >= 2) {
        v = 0;
    } else {
        v = variant;
    }
    obj = func_001EE0D0();
    func_001EDA30(obj, 1);
    func_001EDAE0(obj, 0);
    func_001ED880(obj, 3000.0f);
    func_001ED840(obj, 1);
    for (i = 0; i < D_003B31B0[v].count; i++) {
        Vec4 pos = {0};

        part = &D_003B31B0[v].parts[i];
        off = part->offset;
        tex = func_001E6E10(part->texture);
        pos.v[0] += off[0];
        pos.v[1] += off[1];
        pos.v[2] += off[2];
        pos.v[3] += off[3];
        func_001B5350(&pos, part->x14, obj, tex, 0.0f, 0.0f);
    }
    s->obj = obj;
}
