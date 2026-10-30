/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern s32 func_00152130(s32, s8);
extern void func_002727C0(s32);
extern int func_002DCA30(void);
extern void func_0027AA00(int);
M2C_UNK func_00852750(s64);                         /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009E33B0();                            /* extern */
M2C_UNK func_009E3990();                            /* extern */
M2C_UNK func_00B24790(M2C_UNK);                     /* extern */
M2C_UNK func_00B26FA0();                            /* extern */
M2C_UNK func_00B70590();                            /* extern */
extern char D_0058E7F0[];
extern char D_00591DB4[];
extern char D_00591E14[];
extern char D_008B144D[];
extern char D_008B1454[];
extern char D_008B1458[];
extern char D_008B145C[];
extern char D_008B1460[];
extern char D_008B1464[];
extern char D_008B1466[];
extern char D_00CBBDF0[];

void func_009E5AD0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s64 var_a0;
    void *temp_v1;

    if (func_00152130(1, 0x10) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_0058E7F0);
        do {
            temp_v1 = M2C_FIELD(var_s0, void **, 4);
            if (M2C_FIELD(temp_v1, u8 *, 0x2C) != 0) {
                func_001AAF40(M2C_FIELD(temp_v1, void **, 0), 0);
            }
            var_s1 += 1;
            var_s0 += 0x240;
        } while (var_s1 < 0x16);
        func_00B24790(0);
        (*(s8 *)D_00591DB4) = 1;
        (*(s32 *)D_00591E14) = 0;
        func_00B26FA0();
        func_00B70590();
        func_002727C0(0x11);
        func_009E3990();
        func_009E33B0();
        (*(s8 *)D_00CBBDF0) = 0;
        if (func_002DCA30() != 0) {
            if ((*(s8 *)D_008B144D) != 5) {
                var_a0 = (s64) (5 << 0x38) >> 0x38;
                (*(s8 *)D_008B144D) = 5;
            } else {
                var_a0 = 7;
            }
            func_00852750(var_a0);
            (*(s32 *)D_008B145C) = (*(s32 *)D_008B1460);
            (*(s16 *)D_008B1466) = 0;
            (*(s32 *)D_008B1458) = (*(s32 *)D_008B1460);
            (*(s16 *)D_008B1464) = 0;
            (*(s32 *)D_008B1454) = (*(s32 *)D_008B1460);
        }
        func_0027AA00(1);
        func_009E1D30(2, 5);
    }
}
