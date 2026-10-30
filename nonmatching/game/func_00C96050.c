/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002BB840(int);
extern void func_002BB820(int, int);
extern u8 func_00BF6260(void);
extern u8 func_00BF6270(void);
M2C_UNK func_002BB870(s32, M2C_UNK);                /* extern */
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
M2C_UNK func_00C01090(M2C_UNK);                     /* extern */
extern char D_003B92B0[];
extern s16 D_003EA8C4;
extern char D_00592740[];
extern char D_00CBCB34[];

void func_00C96050(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s8 var_a0;

    if ((*(u16 *)D_00CBCB34) & 0x400) {
        D_003EA8C4 = 0;
        func_00C01090(0xB);
        func_002BB870(func_00BF6270() & 0xFF, 0x1E);
        func_002BB870(func_00BF6260() & 0xFF, 0x19);
        temp_s0 = func_00BF6270() & 0xFF;
        func_002BB820(temp_s0, func_00BF6260() & 0xFF);
        func_002BB840(0);
        func_002BBF20(((void *)D_003B92B0));
        var_a0 = 0x12;
    } else {
        func_002BB870(func_00BF6270() & 0xFF, 0x1E);
        func_002BB870(func_00BF6260() & 0xFF, 0x19);
        temp_s0_2 = func_00BF6270() & 0xFF;
        func_002BB820(temp_s0_2, func_00BF6260() & 0xFF);
        func_002BB840(0);
        func_002BBF20(((void *)D_003B92B0));
        var_a0 = 0x13;
    }
    (*(s8 *)D_00592740) = var_a0;
}
