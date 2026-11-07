/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002371A0(u16);                             /* extern */
M2C_UNK func_002561E0(M2C_UNK *);                   /* extern */
M2C_UNK func_002562F0(s32, M2C_UNK, M2C_UNK *);     /* extern */
M2C_UNK func_00256310(M2C_UNK *);                   /* extern */
M2C_UNK func_0026DA00(s32);                         /* extern */
M2C_UNK func_0026DA30(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002D6440();                            /* extern */
s32 func_002FC720(s32);                             /* extern */
M2C_UNK func_002FE330();                            /* extern */
M2C_UNK func_00342780();                            /* extern */
extern char D_003B2040[];
extern u8 D_003E9D6C;
extern char D_00591BB0[];
extern char D_00C6C590[];
extern char D_00C6C5D0[];
extern char D_00C6C610[];
extern char D_00C6C620[];
extern char D_00CA9200[];

void func_002D3060(void) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s2;
    u16 *var_s0;

    func_0026E840(0x22000101);
    func_00342780();
    func_002FE330();
    func_002561E0(((void *)D_00CA9200));
    func_002D6440();
    if (D_003E9D6C != 0) {
        func_0026DA30(0);
        D_003E9D6C = 0;
    }
    var_s2 = 1;
    var_s1 = 0;
    var_s0 = ((void *)D_00591BB0);
    do {
        temp_v1 = func_002371A0(*var_s0) & 0xFFFF;
        if (((temp_v1 >= 0x34) && (temp_v1 < 0x38)) || ((temp_v1 >= 0xD5) && (temp_v1 < 0xDD))) {
            var_s2 &= 1;
        } else {
            var_s2 = 0;
        }
        var_s1 += 1;
        var_s0 += 2;
    } while (var_s1 < 2);
    func_0026DA00(var_s2 == 0);
    func_00256310(((void *)D_003B2040));
    var_s0_2 = 0;
    do {
        temp_a0 = func_002FC720(var_s0_2 & 0xFF) & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 0:
            func_002562F0(var_s0_2, 0, NULL);
            func_002562F0(var_s0_2, 1, NULL);
            func_002562F0(var_s0_2, 2, NULL);
            break;
        case 1:
            func_002562F0(var_s0_2, 0, ((void *)D_00C6C5D0));
            func_002562F0(var_s0_2, 1, NULL);
            func_002562F0(var_s0_2, 2, NULL);
            break;
        case 2:
            func_002562F0(var_s0_2, 0, ((void *)D_00C6C590));
            func_002562F0(var_s0_2, 1, ((void *)D_00C6C620));
            func_002562F0(var_s0_2, 2, NULL);
            break;
        case 3:
            func_002562F0(var_s0_2, 0, NULL);
            func_002562F0(var_s0_2, 1, NULL);
            func_002562F0(var_s0_2, 2, ((void *)D_00C6C610));
            break;
        }
        var_s0_2 += 1;
    } while (var_s0_2 < 2);
}
