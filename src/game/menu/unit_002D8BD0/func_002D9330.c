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

void *Pes6Heap_Alloc(s32 n, s32 size);
void func_002D9400(FadeState *s, s32 a);
void *func_001B4D80(f32 a, f32 b);
void func_001B4B90(void *camera, s32 a);
void *Pes6Process_Create(s32 a, void (*fn)(void), s32 b, s32 c, s32 d, void *e);
void Pes6Process_Start(void *task);
void init_obj(void);

/* Create the state with part variant 0: its object, a camera and the task that runs init_obj. */
void func_002D9330(void)
{
    FadeState *s;
    void *task;

    D_003E9DB8 = Pes6Heap_Alloc(1, sizeof(FadeState));
    if (D_003E9DB8 != 0) {
        func_002D9400(D_003E9DB8, 0);
        s = D_003E9DB8;
        s->camera = func_001B4D80(3001.0f, 2999.0f);
        func_001B4B90(s->camera, 1);
        s = D_003E9DB8;
        task = Pes6Process_Create(0, init_obj, 0, 0, 0, D_003DBFD8);
        Pes6Process_Start(task);
        s->task = task;
    }
}
