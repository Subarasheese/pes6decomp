/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F5BB0(void *);
extern s32 func_002F5940(void *);
extern void func_002F5BF0(void *);
extern void func_002F5B30(void *);
extern void func_002F5B70(void *);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F5AF0(void *);                      /* extern */
M2C_UNK func_002F5FF0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_002F61F0(void *, M2C_UNK);             /* extern */
M2C_UNK func_002F62E0(void *);                      /* extern */
void *func_002F6380(M2C_UNK);                       /* extern */
M2C_UNK func_008179F0(f32 *, M2C_UNK, f32 *);       /* extern */
s32 func_00D0BD00();                                /* extern */
extern char D_009FE580[];
extern char D_009FE590[];
extern char D_009FE594[];
extern char D_009FE59C[];
extern M2C_UNK *D_009FE5A0;
extern char D_009FE610[];
extern char D_009FE614[];
extern char D_009FE618[];
extern char D_009FE61C[];
extern char D_009FE620[];
extern char D_009FE624[];
extern char D_009FE628[];
extern char D_009FE62C[];
extern char D_00A7D610[];
extern char D_00A7D618[];
extern void *D_00A7D628;

s32 func_009815E0(s32 arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 sp88;
    f32 sp8C;
    f32 sp90;
    f32 sp94;
    f32 sp98;
    f32 sp9C;
    s32 *var_s4;
    s32 temp_s0;
    s32 var_a1;
    s32 var_s1;
    void *temp_v0;
    void *var_a0;

    var_s4 = arg1;
    var_s1 = 0;
    if (D_00A7D628 != NULL) {
        func_002F62E0(D_00A7D628);
        D_00A7D628 = NULL;
    }
    if (arg0 != 0) {
        var_s1 = 2;
    }
    if ((var_s4 != NULL) && (arg2 >= 0)) {
        temp_s0 = arg2 + var_s1;
        if (temp_s0 < 8) {
            temp_v0 = func_002F6380(0x17);
            D_00A7D628 = temp_v0;
            if (temp_v0 == NULL) {
                (*(s32 *)D_00A7D618) = 1;
                return 1;
            }
            func_002F5BF0(temp_v0);
            func_002F5B70(D_00A7D628);
            if (arg0 != 0) {
                (*(s32 *)D_009FE590) = 1;
                (*(s32 *)D_009FE594) = arg0;
                (*(s32 *)D_009FE59C) = 1;
                D_009FE5A0 = ((void *)D_009FE580);
            }
            var_a1 = 0;
            if (arg2 > 0) {
                var_a0 = ((void *)D_009FE590) + (var_s1 * 0xC);
                do {
                    if (*var_s4 != 0) {
                        M2C_FIELD(var_a0, s32 *, 0) = 1;
                        M2C_FIELD(var_a0, s32 *, 4) = (s32) *var_s4;
                    }
                    var_a1 += 1;
                    var_s4 += 4;
                    var_a0 += 0xC;
                } while (var_a1 < arg2);
            }
            (*(s32 *)D_009FE614) = temp_s0;
            func_002F5FF0(D_00A7D628, ((void *)D_009FE610));
            if (arg3 != 0) {
                func_002F5B30(D_00A7D628);
            } else if (func_00D0BD00() == 1) {
                func_002F5AF0(D_00A7D628);
            }
            func_002F61F0(D_00A7D628, 0);
            func_002F5BB0(D_00A7D628);
            func_0026E840(0x84028400);
            func_002F5940(D_00A7D628);
            sp98 = (*(f32 *)D_009FE618);
            sp9C = (*(f32 *)D_009FE61C);
            sp90 = (*(f32 *)D_009FE620);
            sp94 = (*(f32 *)D_009FE624);
            sp88 = (*(f32 *)D_009FE628);
            sp8C = (*(f32 *)D_009FE62C);
            switch (arg4) {                         /* irregular */
            case 3:
                break;
            case 2:
                func_008179F0(&sp88, 1, &sp98);
                break;
            case 1:
                func_008179F0(&sp98, 1, &sp98);
                break;
            case 0:
                func_008179F0(&sp90, 1, &sp98);
                break;
            }
            (*(s32 *)D_00A7D610) = 2;
            return 0;
        }
        goto block_9;
    }
block_9:
    (*(s32 *)D_00A7D618) = 1;
    return 1;
}
