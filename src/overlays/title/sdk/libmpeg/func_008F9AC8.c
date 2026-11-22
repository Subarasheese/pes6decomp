/* compiler: ee-gcc-2.9-G0 */
/* MPEG decoder source adapted from OpenRAC/rac-deadlocked-decomp, src/core/00140198.c.
 * See THIRD_PARTY.md for provenance and terms. */
/* C adapted from rac3-decomp func_00133C58 (NTSC-U func_00133C58, commit 403f30a9) */
#include "types.h"

typedef struct {
    u8 pad0[0x12C];
    int f12C;
    u8 pad130[0x13C - 0x130];
    int f13C;
    u8 pad140[0x1C0 - 0x140];
    int f1C0;
    int f1C4;
    u8 pad1C8[0x878 - 0x1C8];
    int f878;
} Type1;
void func_008FABD8(void *s);
void func_008FABD0(void *s);
int func_008F87E0(void *s, int n);
int func_008F86F8(void *s, int n);
void func_008FAA70(void *s, int n);
int func_008F8298(void *s);
void func_00900558(void *s, char *fmt, int x);
extern s32 func_00900500();
extern char D_00901DE8[];
extern char D_00901E10[];

int func_008F9AC8(Type1 *s, int a1, int *arg0, int *arg1, int *arg2) {
    int var1;
    int v;

    s->f12C = 0;
    func_008FABD8(s);
    while (func_008F87E0(s, 0x18) != 1 && s->f878 == 0) {
        func_008FAA70(s, 8);
    }
    var1 = func_008F87E0(s, 0x20);
    if ((u32)(var1 - 0x101) >= 0xAF) {
        func_00900558(s, D_00901DE8, var1);
        return 2;
    }
    func_008FABD0(s);
    s->f1C4 = func_008F86F8(s, 5);
    if (func_008F86F8(s, 1)) {
        func_008F86F8(s, 1);
        func_008FAA70(s, 7);
        while (func_008F86F8(s, 1)) {
            func_008FAA70(s, 8);
        }
    }
    v = func_008F8298(s);
    *arg1 = v;
    if (s->f12C) {
        func_00900500(s, D_00901E10);
        return 1;
    }
    *arg0 = ((var1 & 0xFF) - 1) * s->f13C + v - 1;
    *arg1 = 1;
    s->f1C0 = 1;
    arg2[5] = 0;
    arg2[4] = 0;
    arg2[1] = 0;
    arg2[0] = 0;
    arg2[7] = 0;
    arg2[6] = 0;
    arg2[3] = 0;
    arg2[2] = 0;
    return 0;
}
