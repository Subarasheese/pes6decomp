/* compiler: ee-gcc-2.9 */
#include "types.h"

typedef struct {
    u8 pad0[0x828];
    s32 x828;
    s32 x82C;
    u8 pad830[0x850 - 0x830];
    s32 x850;
    s32 x854;
} S;

extern s32 func_008F86F8(S *, s32);
extern void func_008FAA38(S *);
extern void func_00900500(S *, char *);
extern char D_00901E98[];
extern char D_00901EC0[];

void func_008FA558(S *p) {
    p->x850 = func_008F86F8(p, 1);
    if (p->x850 != 0) {
        func_008FAA38(p);
        *(volatile u32 *)0x10002000 = 0x50000000;
        p->x82C = 0x50000000;
        p->x828 = 1;
        func_008FAA38(p);
    }
    p->x854 = func_008F86F8(p, 1);
    if (p->x854 != 0) {
        func_008FAA38(p);
        *(volatile u32 *)0x10002000 = 0x58000000;
        p->x82C = 0x50000000;
        p->x828 = 1;
        func_008FAA38(p);
    }
    if (func_008F86F8(p, 1) != 0) {
        func_00900500(p, D_00901E98);
    }
    if (func_008F86F8(p, 1) != 0) {
        func_00900500(p, D_00901EC0);
    }
}
