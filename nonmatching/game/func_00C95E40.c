/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002BB840(int);
extern void func_002BB820(int, int);
extern int func_002A9460(void);
extern s32 func_002BB6E0(void);
extern u8 func_00BF6270(void);
extern void func_002BB8E0(float);
M2C_UNK func_002BB870(s32, M2C_UNK);                /* extern */
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBB9F0();                                /* extern */
extern char D_003B91B0[];
extern u16 D_003EA8C4;
extern char D_00592740[];
extern char D_00CBCB34[];

void func_00C95E40(void) {
    s32 temp_s0;

    if (func_00BF6270() != 0xFF) {
        func_00BF6270();
    }
    D_003EA8C4 += 1;
    if ((func_00BBB9F0() != 0) && (func_002BB6E0() != 0)) {
        if ((((*(u16 *)D_00CBCB34) & 0x100) || ((*(u16 *)D_00CBCB34) & 0x200)) && (func_00BBB8C0(0x64) < 0x1F)) {
            func_002BB870(0, 0x5A);
            func_002BB820(0, 0x1D);
            goto block_13;
        }
        temp_s0 = func_002A9460() & 0xFF;
        if (temp_s0 == func_00BF6270()) {

        } else {
            func_002BB870(func_00BF6270() & 0xFF, 0x5A);
            func_002BB820(func_00BF6270() & 0xFF, 0x1D);
block_13:
            func_002BB840(0);
            func_002BB8E0(6.0f);
            func_002BBF20(((void *)D_003B91B0));
            D_003EA8C4 = 0;
        }
        (*(s8 *)D_00592740) = 0x19;
    }
}
