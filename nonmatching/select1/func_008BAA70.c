/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00245390(void);
M2C_UNK func_008B9950(M2C_UNK *, M2C_UNK *, M2C_UNK **, s32); /* extern */
extern s8 D_003E9AC0;
extern s8 D_003E9AE4;
extern char D_0053C740[];
extern char D_0053C840[];
extern char D_0053C9A0[];
extern char D_0053C9A1[];
extern char D_0053C9A3[];

void func_008BAA70(void) {
    M2C_UNK **temp_a0;
    M2C_UNK **temp_a0_2;
    M2C_UNK **var_a2;
    M2C_UNK **var_v1;
    M2C_UNK *temp_a1_2;
    M2C_UNK *temp_a1_4;
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    s32 var_a3;
    void *temp_a1;
    void *temp_a1_3;

    if ((*(s8 *)D_0053C9A3) != 0) {
        var_a3 = D_003E9AE4 << 5;
        temp_a1 = ((void *)D_0053C740) + var_a3;
        var_a2 = temp_a1 + ((*(u8 *)D_0053C9A0) * 4);
        temp_a0 = temp_a1 + ((*(u8 *)D_0053C9A1) * 4);
        temp_a1_2 = *var_a2;
        *var_a2 = *temp_a0;
        *temp_a0 = temp_a1_2;
        var_a1 = *var_a2;
        if ((var_a1 == (M2C_UNK *)0xA) || (var_a1 == (M2C_UNK *)8) || (var_a0 = *temp_a0, (var_a0 == (M2C_UNK *)0xA)) || (var_a0 == (M2C_UNK *)8) || (var_a1 == (M2C_UNK *)0xB) || (var_a1 == (M2C_UNK *)9) || (var_a0 == (M2C_UNK *)0xB) || (var_a0 == (M2C_UNK *)9)) {
            var_a2 = ((void *)D_0053C840) + var_a3;
            var_a1 = var_a2 + ((*(u8 *)D_0053C9A0) * 4);
            var_a0 = *var_a1;
            var_v1 = var_a2 + ((*(u8 *)D_0053C9A1) * 4);
            *var_a1 = *var_v1;
            goto block_21;
        }
    } else {
        var_a3 = D_003E9AE4 << 5;
        temp_a1_3 = ((void *)D_0053C840) + var_a3;
        var_a2 = temp_a1_3 + ((*(u8 *)D_0053C9A0) * 4);
        temp_a0_2 = temp_a1_3 + ((*(u8 *)D_0053C9A1) * 4);
        temp_a1_4 = *var_a2;
        *var_a2 = *temp_a0_2;
        *temp_a0_2 = temp_a1_4;
        var_a1 = *var_a2;
        if ((var_a1 == (M2C_UNK *)0xA) || (var_a1 == (M2C_UNK *)8) || (var_a0 = *temp_a0_2, (var_a0 == (M2C_UNK *)0xA)) || (var_a0 == (M2C_UNK *)8) || (var_a1 == (M2C_UNK *)0xB) || (var_a1 == (M2C_UNK *)9) || (var_a0 == (M2C_UNK *)0xB) || (var_a0 == (M2C_UNK *)9)) {
            var_a2 = ((void *)D_0053C740) + var_a3;
            var_a1 = var_a2 + ((*(u8 *)D_0053C9A0) * 4);
            var_a0 = *var_a1;
            var_v1 = var_a2 + ((*(u8 *)D_0053C9A1) * 4);
            *var_a1 = *var_v1;
block_21:
            *var_v1 = var_a0;
        }
    }
    D_003E9AC0 = 1;
    func_008B9950(var_a0, var_a1, var_a2, var_a3);
    func_00245390();
    D_003E9AC0 = 0;
    (*(u8 *)D_0053C9A1) = 0xFF;
    (*(u8 *)D_0053C9A0) = 0xFF;
}
