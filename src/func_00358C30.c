/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(void *, s32, void *);
void func_003139F0(void *, s32);
void Pes6BitSet_Write(void *, s32, s32);
void func_003414D0(void *, s32, s32);
s32 func_0030E6C0(s32);
s32 func_00333710(s32, s32);
s32 func_00335370(void);
s32 func_00333440(s32, void *, s32);
extern u8 D_00591E19[];

s32 func_00358C30(void *arg0) {
    u8 buf[0x20];
    u8 *b;
    s32 s0;
    s32 s1;
    s32 s2;
    u8 *p;

    p = (u8 *)arg0;
    b = buf;
    Pes6BitSet_Initialize(b, 3, b + 0x18);
    func_003139F0(b, p[0x30]);
    s0 = *(s32 *)(p + 0x44);
    func_003414D0(b + 0x1F, 2, 0xFF);
    s2 = func_0030E6C0(D_00591E19[0]);
    s1 = func_00333710(s0, s2) < 0xD;
    s0 = s2 == b[0x1F];
    Pes6BitSet_Write(b, 1, s0 && (s2 == *(s32 *)(p + 0x30)) && !s1);
    Pes6BitSet_Write(b, 2, s0 && (s2 != *(s32 *)(p + 0x30)) && s1);
    *(s32 *)((u8 *)func_00335370() + 0x1020) = s2;
    func_00333440(0x9D, b, 1);
    return 1;
}
