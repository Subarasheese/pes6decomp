/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001E5F20(void *);
extern void func_002E4570(void *);
M2C_UNK func_001DC980(s32);                         /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
s32 func_00B90090(s32, M2C_UNK);                    /* extern */
s32 func_00B91390();                                /* extern */
M2C_UNK func_00BA35A0();                            /* extern */
M2C_UNK func_00BA5E50(s32);                         /* extern */
s32 *func_00BA6E60(s32);                            /* extern */
M2C_UNK func_00BAB410(s32, u8);                     /* extern */
M2C_UNK func_00BADF20(s32);                         /* extern */
extern char D_00CE46F0[];
extern char D_00CE47D0[];

void func_00BAB190(void *arg0) {
    s32 *temp_v0;
    s32 *var_s0;
    s32 *var_s0_5;
    s32 *var_s1_2;
    s32 *var_s1_3;
    s32 *var_s1_4;
    s32 temp_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_5;
    s32 var_s1_6;

    if (func_00B91390() == 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 8);
        if (func_00B90090(temp_s0, 0x12) != 0) {
            func_00BADF20(temp_s0);
        }
        if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
            func_00BAB410(temp_s0, M2C_FIELD(arg0, u8 *, 0x14));
        }
        return;
    }
    var_s1 = 0;
    var_s0 = ((void *)D_00CE46F0);
    do {
        func_002E4570(M2C_FIELD(var_s0, void **, 0xD4));
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 3);
    var_s0_2 = 0;
    var_s1_2 = ((void *)D_00CE46F0);
    do {
        func_002DF960(M2C_FIELD(var_s1_2, s32 *, 0xB8));
        var_s0_2 += 1;
        var_s1_2 += 4;
    } while (var_s0_2 < 7);
    var_s0_3 = 0;
    var_s1_3 = ((void *)D_00CE46F0);
    do {
        func_001DC980(M2C_FIELD(var_s1_3, s32 *, 0x90));
        var_s0_3 += 1;
        var_s1_3 += 4;
    } while (var_s0_3 < 0xA);
    var_s0_4 = 0;
    var_s1_4 = ((void *)D_00CE46F0);
    do {
        func_001EDD90(*var_s1_4);
        var_s0_4 += 1;
        var_s1_4 += 0x24;
    } while (var_s0_4 < 2);
    var_s1_5 = 0;
    do {
        temp_v0 = func_00BA6E60(var_s1_5);
        func_00BA5E50(M2C_FIELD(&(((void *)D_00CE46F0))[*temp_v0], s32 *, 0x50));
        M2C_FIELD(&(((void *)D_00CE46F0))[*temp_v0], s32 *, 0x50) = 0;
        func_001DC980(M2C_FIELD(&(((void *)D_00CE46F0))[*temp_v0], s32 *, 0x70));
        var_s1_5 += 1;
        var_s0_5 = ((void *)D_00CE46F0);
        M2C_FIELD(&(((void *)D_00CE46F0))[*temp_v0], s32 *, 0x70) = 0;
    } while (var_s1_5 < 8);
    var_s1_6 = 0;
    do {
        func_001E5F20(M2C_FIELD(var_s0_5, void **, 0x48));
        var_s1_6 += 1;
        var_s0_5 += 4;
    } while (var_s1_6 < 2);
    func_001EDD90((*(s32 *)D_00CE47D0));
    func_00BA35A0();
}
