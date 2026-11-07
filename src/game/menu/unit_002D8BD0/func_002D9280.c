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

extern u8 D_003DBFD8[];

void *func_00154060(s32 n, s32 size);
void func_002D9400(FadeState *s, s32 a);
void *func_001B4D80(f32 a, f32 b);
void func_001B4B90(void *camera, s32 a);
void *func_001BBEC0(s32 a, void (*fn)(void), s32 b, s32 c, s32 d, void *e);
void func_001BBC60(void *task);
void func_002D93E0(void);

/* Create the state: its object, a camera and the task that runs func_002D93E0. */
void func_002D9280(void)
{
    FadeState *s;
    void *task;

    D_003E9DB8 = func_00154060(1, sizeof(FadeState));
    if (D_003E9DB8 != 0) {
        func_002D9400(D_003E9DB8, 1);
        s = D_003E9DB8;
        s->camera = func_001B4D80(3001.0f, 2999.0f);
        func_001B4B90(s->camera, 1);
        s = D_003E9DB8;
        task = func_001BBEC0(0, func_002D93E0, 0, 0, 0, D_003DBFD8);
        func_001BBC60(task);
        s->task = task;
    }
}
