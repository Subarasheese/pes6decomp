/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00207BE0(s32);
void func_002096E0(s32, s32);
void func_00209820(s32);
void func_00209A00(s32, s32, s32);
void func_00930240(void *);
u16 func_009B3480(void *, f32, f32);
s32 func_00BBB7F0(s32);
s32 func_00BBB8C0(s32);
s32 func_00BC13A0(s32);
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591E4D[];
extern char D_00591E4E[];

void func_00B940B0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 t;
    s32 idx;
    s32 v;
    u32 a0;

    a0 = M2C_FIELD(arg0, u16 *, 0x18);
    if (a0 == 7) {
        func_00209820(M2C_FIELD(arg0, s32 *, 4));
        func_00207BE0(M2C_FIELD(arg0, s32 *, 4));
        func_00930240(arg0);
        return;
    }
    if (a0 != 0) {
        return;
    }
    a0 = M2C_FIELD(arg0, u8 *, 0);
    if (a0 == *(u8 *)D_00591E4D) {
        return;
    }
    if (a0 == *(u8 *)D_00591E4E) {
        t = func_00BBB8C0(5);
        if (t == 3) {
            v = func_00BC13A0(0x3F);
        } else if (t == 2) {
            v = func_00BC13A0(0x40);
        } else if (t == 1) {
            v = func_00BC13A0(0x3E);
        } else {
            v = func_00BC13A0(0x41);
        }
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), v & 0xFFFF, 0);
        M2C_FIELD(arg0, u16 *, 0x28) = M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(arg0, u16 *, 0x26) = M2C_FIELD(arg0, u16 *, 0x2A);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, u16 *, 0x18) = 7;
        return;
    }
    if (*(u8 *)D_00591E4E != 0xFF) {
        idx = *(u8 *)D_00591E4E % 23;
    } else {
        idx = 1;
    }
    if ((f32) M2C_FIELD(Pes6MatchPlayers + idx * 0x240, s16 *, 0x14) * M2C_FIELD(arg0, f32 *, 0xE0) <= -7961.0f) {
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), 0, 0);
    } else {
        func_00209A00(M2C_FIELD(arg0, s32 *, 4), 0x1BF, 0);
    }
    func_002096E0(M2C_FIELD(arg0, s32 *, 4), func_00BBB7F0(8));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x26) = func_009B3480(arg0, M2C_FIELD(Pes6Ball_Current, f32 *, 0x10), M2C_FIELD(Pes6Ball_Current, f32 *, 0x18));
    M2C_FIELD(arg0, u16 *, 0x28) = M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(arg0, s8 *, 0x16) = 7;
    M2C_FIELD(arg0, u16 *, 0x18) = 0;
}
