/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s8 D_003EA76C;
extern char D_00591F12[];
extern char D_00591DB4[];
extern char D_00CBCD80[];
extern char D_00CBCCD0[];
extern char D_00CBCCF0[];
extern char D_00CBCD60[];
extern char D_00CBCD70[];
extern char D_00CBCD10[];
extern void func_001C48E8(void *, s32, s32);
extern s32 func_00BF6270(void);
extern void func_00BA92A0(s32);
extern s32 *func_00B2A420(s32);
extern void func_00B82670(void);
extern s32 func_00BBB8C0(s32);
extern void func_00AD0A20(void);
extern void func_00286A60(void);

void func_00BA51F0(void) {
    s32 *s0;
    s32 *s2;
    s32 i;
    f32 f;
    func_001C48E8(&D_003EA76C, 0, 4);
    *(u8 *)D_00591F12 = 0;
    *(u8 *)D_00591DB4 = 0;
    func_00BA92A0(func_00BF6270());
    s0 = func_00B2A420(func_00BF6270());
    func_00B82670();
    for (i = 0; i < 0x17; i++) {
        s2 = func_00B2A420(i);
        *(u8 *)(s2[0] + 0x66) = 3;
        if (*(u8 *)(s2[0] + 0x12) == *(u8 *)(s0[0] + 0x12)) {
            if (i == func_00BF6270()) {
                *(u8 *)(s2[1] + 0x53) = 1;
            } else {
                *(u8 *)(s2[1] + 0x53) = 2;
            }
        }
    }
    f = *(f32 *)(s0[0] + 0xE0) * *(f32 *)(s0[0] + 0xE8);
    if (f <= 0.0f) {
        D_003EA76C = 4;
    } else if (func_00BBB8C0(2) == 0) {
        D_003EA76C = 0;
    } else {
        D_003EA76C = 1;
    }
    if (D_003EA76C == 4) {
        *(u8 *)D_00CBCD80 = 1;
        *(s32 *)D_00CBCCD0 = 0x4033C6A8;
        *(s32 *)D_00CBCCF0 = 0xBEBEF9DB;
        *(s16 *)D_00CBCD60 = 0;
        *(s16 *)D_00CBCD70 = 16;
        *(s16 *)D_00CBCD10 = 0xED82;
    }
    func_00AD0A20();
    func_00286A60();
}
