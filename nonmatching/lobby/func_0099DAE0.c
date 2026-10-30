/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F5940(s32);                         /* extern */
M2C_UNK func_002F5AF0(s32);                         /* extern */
M2C_UNK func_002F5B30(s32, s32);                    /* extern */
M2C_UNK func_002F5B70(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F5BB0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F5BF0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F5FF0(s32, M2C_UNK *);              /* extern */
M2C_UNK func_002F61F0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F6240(s32, M2C_UNK);                /* extern */
M2C_UNK func_002F62E0(s32);                         /* extern */
s32 func_002F6380(M2C_UNK);                         /* extern */
M2C_UNK func_008179F0(f32 *, M2C_UNK);              /* extern */
s32 func_00D0BD00();                                /* extern */
extern char D_009FE9E0[];
extern char D_009FEA60[];
extern char D_009FEA64[];
extern char D_009FEA68[];
extern char D_009FEA6C[];
extern char D_00A7DB30[];
extern char D_00A7DB38[];
extern char D_00A7DB48[];

s32 func_0099DAE0(s32 *arg0, s32 arg1, s32 arg2) {
    f32 sp48;
    f32 sp4C;
    M2C_UNK *var_a0;
    s32 *var_s2;
    s32 temp_v0;
    s32 var_a1;

    var_s2 = arg0;
    if ((*(s32 *)D_00A7DB48) != 0) {
        func_002F62E0((*(s32 *)D_00A7DB48));
        (*(s32 *)D_00A7DB48) = 0;
    }
    if ((var_s2 != NULL) && (arg1 >= 0)) {
        if (arg1 < 8) {
            temp_v0 = func_002F6380(0x17);
            (*(s32 *)D_00A7DB48) = temp_v0;
            if (temp_v0 == 0) {
                (*(s32 *)D_00A7DB38) = 1;
                return 1;
            }
            func_002F5BF0(temp_v0, 1);
            func_002F5B70((*(s32 *)D_00A7DB48), 1);
            var_a1 = 0;
            if (arg1 > 0) {
                var_a0 = ((void *)D_009FE9E0);
                do {
                    if (*var_s2 != 0) {
                        M2C_FIELD(var_a0, s32 *, 0) = 1;
                        M2C_FIELD(var_a0, s32 *, 4) = (s32) *var_s2;
                    }
                    var_a1 += 1;
                    var_s2 += 4;
                    var_a0 += 0xC;
                } while (var_a1 < arg1);
            }
            (*(s32 *)D_009FEA64) = arg1;
            func_002F5FF0((*(s32 *)D_00A7DB48), ((void *)D_009FEA60));
            if (arg2 != 0) {
                func_002F5B30((*(s32 *)D_00A7DB48), arg2);
            } else if (func_00D0BD00() == 1) {
                func_002F5AF0((*(s32 *)D_00A7DB48));
            }
            func_002F6240((*(s32 *)D_00A7DB48), 0x4484D000);
            func_002F61F0((*(s32 *)D_00A7DB48), 0);
            func_002F5BB0((*(s32 *)D_00A7DB48), 1);
            func_0026E840(0x8400F803);
            func_002F5940((*(s32 *)D_00A7DB48));
            sp48 = (*(f32 *)D_009FEA68);
            sp4C = (*(f32 *)D_009FEA6C);
            func_008179F0(&sp48, 1);
            (*(s32 *)D_00A7DB30) = 2;
            return 0;
        }
        goto block_7;
    }
block_7:
    (*(s32 *)D_00A7DB38) = 1;
    return 1;
}
