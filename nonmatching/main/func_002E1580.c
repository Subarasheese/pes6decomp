/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001EF120(void *, s32, void *);
void *func_001EDC80(void *, s32);                   /* extern */
extern s32 D_003B3678[3];
extern s32 D_003B3690[9];

void func_002E1580(void *arg0, char *arg1) {
    s32 sp60[9];
    s32 sp90[3];
    s32 i;
    s32 kind;
    u8 t;
    void *o;

    kind = 9;
    t = *(u8 *)arg0;
    sp90[0] = D_003B3678[0];
    sp90[1] = D_003B3678[1];
    sp90[2] = D_003B3678[2];
    for (i = 0; i < 9; i++) sp60[i] = D_003B3690[i];
    if (t == 3) kind = 3;
    else if (t == 1) kind = 3;
    else if (t == 15) kind = 1;
    if (kind == 9) {
        for (i = 0; i < 9; i++) {
            if (!(*(s32 *)arg0 & 0x100)) o = func_001EDC80(*(void **)((char *)arg0 + 0x1C), i);
            else o = func_001EDC80(*(void **)(*(char **)((char *)arg0 + 0x1C) + 0x48), i);
            func_001EF120(o, 0, arg1 + sp60[i] * 4);
            func_001EF120(o, 1, arg1 + (sp60[i] + 1) * 4);
            func_001EF120(o, 2, arg1 + (sp60[i] + 4) * 4);
            func_001EF120(o, 3, arg1 + (sp60[i] + 5) * 4);
        }
    } else if (kind == 3) {
        for (i = 0; i < 3; i++) {
            if (!(*(s32 *)arg0 & 0x100)) o = func_001EDC80(*(void **)((char *)arg0 + 0x1C), i);
            else o = func_001EDC80(*(void **)(*(char **)((char *)arg0 + 0x1C) + 0x48), i);
            func_001EF120(o, 0, arg1 + sp90[i] * 4);
            func_001EF120(o, 1, arg1 + (sp90[i] + 1) * 4);
            func_001EF120(o, 2, arg1 + (sp90[i] + 2) * 4);
            func_001EF120(o, 3, arg1 + (sp90[i] + 3) * 4);
        }
    }
}
