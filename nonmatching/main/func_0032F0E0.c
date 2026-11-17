/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u8 func_0030E540(s32 a);
extern u8 func_0030FAB0(s32 a);
extern char *Pes6Job_GetManager(void);
extern char *Pes6OptionData_GetBlock2F5(void);
extern s32 func_0030FE30(void *out, s32 b);
extern char Pes6MatchPlayers[];
extern char D_00CB5F44[];

s32 func_0032F0E0(s32 *out, s32 unused, s32 s2, u32 mode)
{
    s32 s0, s1;
    u32 x;
    s32 idx;
    char *p;
    char *e;
    void *local;
    u32 t;

    if (mode == 1 || mode == 2 || mode == 3 || mode == 4 || mode == 7) {
        if (mode == 1) {
            x = func_0030E540(0);
        } else if (mode == 2) {
            x = func_0030E540(1);
        } else if (mode == 7) {
            x = *(u8 *)(Pes6Job_GetManager() + 0x101C);
            if (x == 0xFF) {
                *out = -1;
                return 0;
            }
        } else if (mode == 3) {
            x = func_0030FAB0(func_0030E540(0));
        } else {
            x = *(u8 *)D_00CB5F44;
        }
        if (x == 0xFF) idx = 1;
        else idx = x % 23;
        e = Pes6MatchPlayers + idx * 576;
        s1 = *(u8 *)(e + 0x11);
        s0 = *(u8 *)(e + 0x12);
    } else if (mode == 5) {
        s0 = *(s32 *)(Pes6Job_GetManager() + 0xFFC);
        s1 = *(s32 *)(Pes6Job_GetManager() + 0x101C);
    }

    t = *(u8 *)(Pes6OptionData_GetBlock2F5() + 6);
    if (t == 2 || t == 1) {
        *out = -1;
    } else if (t == 0) {
        if (s0 != *(s32 *)(Pes6Job_GetManager() + 0xFFC)) {
            *out = -1;
        } else if (s2 == 0x1D) {
            *out = -1;
        } else {
            *out = *(s32 *)(Pes6Job_GetManager() + s1 * 112 + s2 * 4 + 0x124);
        }
    }

    if (s2 != 0x1C && s2 != 0x1B && s2 != 0x1A) {
        if (s2 == *(u8 *)(Pes6Job_GetManager() + 0x1001)) {
            *out = -1;
            return 0;
        }
    }

    if (s2 == 0x15) {
        if (func_0030FE30(&local, 0) == 0) *out = -1;
        else if (*(u8 *)((char *)local + 5) != 0xC) *out = -1;
        s1 = *out;
    } else if (s2 == 0x14) {
        if (func_0030FE30(&local, 0) == 0) *out = -1;
        else if (*(u8 *)((char *)local + 5) != 0xD) *out = -1;
        s1 = *out;
    } else {
        s1 = *out;
    }
    s1 = (s1 != -1);
    if (s1) {
        *(u8 *)(Pes6Job_GetManager() + 0x1001) = (u8)s2;
    }
    return s1;
}
