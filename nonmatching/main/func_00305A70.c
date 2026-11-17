/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591C09[];
extern char D_00591BBA[];
extern char D_00591BB0[];
extern char D_003C54C0[];
extern void func_00305E60(void *a, void *b);
extern void func_00304740(void);
extern void func_00304C00(void);
extern void func_00304A00(void);
extern void func_00303C40(s32 a, void *b);
extern s32 func_00151EA0(s32 a);
extern s32 func_001CDAA0(void);
s32 func_00305A70(u8 *obj) {
    u8 *p;
    s32 i;
    u8 mode = D_00591C09[0];
    if (mode == 7) {
        func_00305E60(obj, func_00304740);
    } else if (D_00591BBA[0] != 0 && mode != 5) {
        func_00305E60(obj, func_00304C00);
    } else {
        func_00305E60(obj, func_00304A00);
    }
    p = *(u8 **)(obj + 0x18);
    for (i = 0; i < 2; i++) {
        func_00303C40(((u16 *)D_00591BB0)[i], p + 0x2C + i * 4);
        if (*(s32 *)(p + 0x2C + i * 4) == 0x154)
            p[0x36 + i] = 10;
        else
            p[0x36 + i] = 5;
    }
    p[0x56] = 0;
    p[0x34] = (func_00151EA0(p[0x36]) & 0xFFFF) % p[0x36];
    p[0x35] = (func_00151EA0(p[0x37]) & 0xFFFF) % p[0x37];
    *(s32 *)(p + 0x3C) = 0;
    *(s32 *)(p + 0x38) = 0;
    p[0x57] = 0;
    {
        s32 a = (u8)D_003C54C0[func_001CDAA0()];
        *(s32 *)(p + 0x40) = a;
        *(s32 *)(p + 0x44) = a * 60;
    }
    return 1;
}
