/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154490(s32, s32);
extern void func_009B4660(u32);
extern void func_009B45B0(u32);
extern void func_00182B20(int);
extern int func_002DCA30(void);
extern int func_0029A0A0(void);
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
M2C_UNK func_009B4630(M2C_UNK);                     /* extern */
s32 func_009B4700();                                /* extern */
s32 func_00B29C50(u8);                              /* extern */
s32 func_00BD0170();                                /* extern */
s32 func_00BD1120();                                /* extern */
extern u8 D_003EA750;
extern char D_00591C09[];
extern char D_00CBAA00[];
extern char D_00CBAA02[];
extern char D_00CBAA14[];
extern char D_00CBAA18[];

s32 func_00BCFF80(void) {
    s32 temp_s0;

    temp_s0 = func_009B4700();
    (*(f32 *)D_00CBAA18) = (*(f32 *)D_00CBAA14);
    func_00182B20(0);
    if (func_0029A0A0() == 4) {
        func_009B45B0(6U);
        return 0;
    }
    if (func_002DCA30() != 0) {
        func_009B45B0(6U);
        return 0;
    }
    if ((func_0029A0A0() != 4) && ((*(u8 *)D_00591C09) != 0xA) && (((*(u8 *)D_00591C09) != 5) || (func_00B29C50((*(u8 *)D_00591C09)) == 0)) && (func_00154490(temp_s0, 0x8000) != 0)) {
        func_002562B0(0);
        func_002562B0(0x13);
        func_009B4660(1U);
        return 0;
    }
    if (func_00BD0170() == 0) {
        return 0;
    }
    if ((func_0029A0A0() == 4) && ((*(u16 *)D_00CBAA00) == (*(u16 *)D_00CBAA02))) {
        func_009B45B0(6U);
        return 0;
    }
    D_003EA750 -= 1;
    if (func_00154490(temp_s0, 8) != 0) {
        func_002562B0(0);
        func_009B45B0(6U);
        if ((*(u8 *)D_00591C09) == 0xA) {
            func_009B4630(0xB);
        }
        return 0;
    }
    if (func_00BD1120() != 0) {
        func_009B45B0(6U);
        if ((*(u8 *)D_00591C09) == 0xA) {
            func_009B4630(0xB);
        }
    }
    return 0;
}
