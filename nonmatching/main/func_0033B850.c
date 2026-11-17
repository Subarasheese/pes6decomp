/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00313B30(void *, int, int);
extern s32 func_003389D0(s32, s32);

s32 func_0033B850(void *arg0, void *arg1) {
    char *base;
    s32 idx;
    s32 v2;
    u8 s1;
    s32 a2;
    s32 t;

    base = M2C_FIELD(arg1, char **, 0x44);
    idx = func_003389D0((s32) arg1, 0) & 0xFF;
    v2 = func_003389D0((s32) arg1, 2);
    if (*(s32 *)base != 6) {
        return 0;
    }
    base = base + idx;
    s1 = *(u8 *)(base + 0x8EC);
    func_00313B30(arg0, 0xD0, v2 >= 0xE);
    func_00313B30(arg0, 0xD1, *(u8 *)(base + 0x8EC));
    a2 = 0;
    if (*(u8 *)(base + 0x8F2) == 1 && *(u8 *)(base + 0x8F0) == 0) {
        a2 = 1;
    }
    func_00313B30(arg0, 0xD2, a2);
    a2 = *(u8 *)(base + 0x8F2) == 2;
    if (a2 != 0) {
        a2 = *(u8 *)(base + 0x8F0) == 0;
    }
    func_00313B30(arg0, 0xD3, a2);
    a2 = *(u8 *)(base + 0x8F2) == 3;
    if (a2 != 0) {
        a2 = *(u8 *)(base + 0x8F0) == 0;
    }
    func_00313B30(arg0, 0xD4, a2);
    a2 = 0;
    if (*(u8 *)(base + 0x8EE) == 1 && s1 == 0) {
        a2 = 1;
    }
    func_00313B30(arg0, 0xD5, a2);
    a2 = *(u8 *)(base + 0x8EE) == 2;
    if (a2 != 0) {
        a2 = s1 == 0;
    }
    func_00313B30(arg0, 0xD6, a2);
    a2 = *(u8 *)(base + 0x8EE) == 3;
    if (a2 != 0) {
        a2 = s1 == 0;
    }
    func_00313B30(arg0, 0xD7, a2);
    a2 = *(u8 *)(base + 0x8EE) == 4;
    if (a2 != 0) {
        a2 = s1 == 0;
    }
    func_00313B30(arg0, 0xD8, a2);
    t = *(u8 *)(base + 0x8EE);
    a2 = 0;
    if (t >= 5 && t < 0xE && s1 == 0) {
        a2 = 1;
    }
    func_00313B30(arg0, 0xD9, a2);
    a2 = *(u8 *)(base + 0x8EE) >= 0xE;
    if (a2 != 0) {
        a2 = s1 == 0;
    }
    func_00313B30(arg0, 0xDA, a2);
    return 1;
}
