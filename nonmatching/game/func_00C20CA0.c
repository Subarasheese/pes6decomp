/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
extern void func_001A58E0(void *, s32);
extern u8 func_00BF6270(void);
extern void func_00209A00(void *, s32, s32);
extern void func_009E1CB0(s32);
extern u8 *func_00B2A420(s32);
extern s8 D_003EA7E8;
extern s16 D_003EA7EA;
extern char D_00591E14[];

void func_00C20CA0(void) {
    s32 i;
    u8 *p;
    u8 *a;
    u8 *b;
    u8 c;

    *(s32 *)D_00591E14 = 0;
    D_003EA7E8 = 0;
    D_003EA7EA = 0;
    p = func_00B2A420(0);
    for (i = 0; i < 0x17; i++, p += 8) {
        a = *(u8 **)p;
        c = *a;
        if (c == func_00BF6270()) {
            *(s8 *)(*(u8 **)(a + 4) + 0x2C) = 1;
            func_001A58E0(**(void ***)(*(u8 **)p + 4), 1);
        } else {
            *(s8 *)(*(u8 **)(p + 4) + 0x4D) = 0;
            *(s8 *)(*(u8 **)(p + 4) + 0x4C) = 0;
            b = *(u8 **)(*(u8 **)p + 4);
            if (*(u16 *)(b + 0x30) >= 0x59A) {
                func_00209A00(b, 0x1BF, 0);
                *(s8 *)(*(u8 **)(*(u8 **)p + 4) + 0x50) = 0;
            }
            *(s8 *)(*(u8 **)(*(u8 **)p + 4) + 0x2C) = 0;
            func_001A58E0(**(void ***)(*(u8 **)p + 4), 0);
        }
    }
    func_002727C0(0xF);
    func_009E1CB0(3);
}
