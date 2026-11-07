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

extern f32 D_003FB10C[];
extern f32 D_003FB110[];

void func_001EDAE0(void *obj, s32 on);
void func_001ED8F0(void *obj, u8 level);
s32 func_001BE790(void);
void func_001B4CB0(void *camera, f32 a, f32 b);
void func_001ED880(void *obj, f32 a);

static inline void FadeState_Show(FadeState *s, s32 on)
{
    if (s) {
        func_001EDAE0(s->obj, on);
        s->shown = on;
    }
}

static inline void FadeState_SetLevel(FadeState *s, s32 level)
{
    if (s) {
        func_001ED8F0(s->obj, level);
        s->level = level;
    }
}

void func_002D90A0(void)
{
    FadeState *s = D_003E9DB8;
    s32 level;
    f32 mid;

    if (s == 0) {
        return;
    }
    switch (s->mode) {
    case 1:
        if (s->shown == 0) {
            FadeState_Show(s, 1);
            FadeState_SetLevel(s, 0);
        }
        if (func_001BE790()) {
            s->target = 0;
        } else {
            s->target = 0x99;
        }
        break;
    case 0:
        if (s->shown == 1 && s->level == 0) {
            FadeState_Show(s, 0);
        }
        s->target = 0;
        break;
    }
    level = s->level;
    if (level < s->target) {
        level += 16;
        if (s->target < level) {
            level = s->target;
        }
    } else if (s->target < level) {
        level -= 16;
        if (level < s->target) {
            level = s->target;
        }
    }
    FadeState_SetLevel(s, level);
    mid = (D_003FB10C[0] + D_003FB110[0]) / 2.0f;
    func_001B4CB0(s->camera, 1.0f + mid, mid - 1.0f);
    func_001ED880(s->obj, mid);
}
