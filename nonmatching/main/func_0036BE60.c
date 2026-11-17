/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003EA040;
extern char D_00CBD3B0[];
void func_001C48E8(void *p, s32 v, s32 n);
s32 func_00C59EE0(u32 id);
s32 func_00C59F70(u32 id);
void func_00368E60(void *a, void *b, s32 c, s32 d, u32 e);
void func_003414D0(void *a, s32 b, s32 c);
s32 func_00BC8B90(u32 id);
void func_00368980(void *a, u32 b, u32 c, u32 d);
void func_00368850(void *a, void *b, u32 c, u32 d);
void func_00368FE0(void *a, void *b, void *c, u32 d, s32 e, s32 f, void *g);
s32 func_00C5D100(s32 a, s32 b, u32 c);
s32 func_002C4740(s32 a, u32 b);
void func_00368AD0(void *a, s32 b, s32 c, u32 d);
void func_003687A0(void *a);
void func_00368150(void *a, s32 b, s32 c, u32 d, u32 e);
void func_00367E90(void *a, s32 b, s32 c, u32 d, u32 e);
s32 func_0032E8D0(s32 a);

s32 func_0036BE60(u8 *a) {
    u8 *p = a + 0x18;
    u32 s3;
    s32 s4;
    s32 s2;
    s32 x;
    s32 v;
    u32 id;
    func_001C48E8(p, 0, 0x3C);
    D_003EA040 = 0xFF;
    *(s32 *)(p + 0x2C) = 0;
    p[0] = a[a[2] + 7];
    id = p[0];
    s3 = ((u8 *)D_00CBD3B0)[id * 52 + 9];
    s4 = func_00C59EE0(id);
    s2 = func_00C59F70(id);
    p[5] = ((u8 *)D_00CBD3B0)[p[0] * 52 + 0];
    p[6] = ((u8 *)D_00CBD3B0)[p[0] * 52 + 0xB];
    func_00368E60(p + 1, p + 0x10, s4, s2, p[0]);
    p[8] = (p[1] >> 5) & 1;
    func_003414D0(p + 4, 2, 0xFF);
    v = func_00BC8B90(p[0]);
    if (v != 0) {
        x = 1;
    } else if (s3 < 0x18) {
        if (s3 == 3 || s3 == 4 || s3 == 5 || s3 == 17 || s3 == 18 || s3 == 23) {
            x = 3;
        } else {
            x = 2;
        }
    } else {
        x = 2;
    }
    *(s32 *)(p + 0xC) = x;
    *(u16 *)(p + 0x28) = ((u8 *)D_00CBD3B0)[p[0] * 52 + 0x22];
    *(u16 *)(p + 0x2A) = ((u8 *)D_00CBD3B0)[p[0] * 52 + 0x23];
    func_00368980(p + 0x14, s3, p[0], p[0]);
    func_00368850(p + 0x1C, p + 0x28, p[8], p[0]);
    func_00368FE0(p + 0x2C, p + 0x18, p + 0x19, p[0], s4, s2, a);
    p[3] = func_00C5D100(s4, s2, p[0x18]);
    p[0x1A] = a[6];
    if (p[0x18] == 0xFF) {
        p[2] = 0xFF;
    } else if (*(s32 *)(p + 0x10) == 1) {
        p[2] = func_002C4740(s2, p[0x18]);
    } else {
        p[2] = func_002C4740(s2, (p[0x18] ^ 1) & 0xFF);
    }
    func_00368AD0(p + 0x24, *(s32 *)(p + 0x14), *(s32 *)(p + 0x2C), p[0]);
    func_003687A0(p);
    func_00368150(p, s4, s2, p[1], p[2]);
    func_00367E90(p, s4, s2, p[1], p[2]);
    if (p[0x31] != 0) {
        if (p[0x32] != 0) {
            if (func_0032E8D0(0x28) != 0) {
                p[0x30] = 1;
            } else {
                p[0x30] = 2;
            }
        } else {
            p[0x30] = 1;
        }
    } else if (p[0x32] != 0) {
        p[0x30] = 2;
    } else {
        p[0x30] = 3;
    }
    return 1;
}
