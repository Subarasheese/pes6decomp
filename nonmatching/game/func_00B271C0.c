/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBE60[];
extern char D_00CBBEEC[];
extern char D_00CBBEF0[];

void func_00B271C0(s32 arg0, void *arg1, void *arg2, void *arg3) {
    M2C_UNK *var_a6_2;
    s32 *var_a2;
    s32 *var_a5_3;
    s32 *var_a7_2;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 var_a0;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_t0;
    void *var_a4_2;
    void *var_a5_2;
    void *var_a6_3;
    void *var_a7;

    var_a0 = arg0;
    if (var_a0 >= 3) {
        var_a0 = 2;
    }
    var_t0 = 0;
    if (var_a0 > 0) {
        if (var_a0 >= 9) {
            var_a6 = 0;
            var_a4 = 0;
            if ((var_a0 >= 0) && (var_a0 < 0x7FFFFFFF)) {
                var_a4 = 1;
            }
            if (var_a4 != 0) {
                temp_a4 = var_a0 & 0x80000000;
                var_a5 = 1;
                if ((temp_a4 == 0) && (temp_a4 != 0)) {
                    var_a5 = 0;
                }
                if (var_a5 != 0) {
                    var_a6 = 1;
                }
            }
            if (var_a6 != 0) {
                var_a7 = arg1;
                var_a6_2 = ((void *)D_00CBBE60);
                var_a5_2 = arg2;
                var_a4_2 = arg3;
                do {
                    var_t0 += 8;
                    M2C_FIELD(var_a6_2, s32 *, 0x94) = (s32) M2C_FIELD(var_a7, s32 *, 0);
                    M2C_FIELD(var_a6_2, s32 *, 0x9C) = (s32) M2C_FIELD(var_a5_2, s32 *, 0);
                    M2C_FIELD(var_a6_2, s32 *, 0xA4) = (s32) M2C_FIELD(var_a4_2, s32 *, 0);
                    M2C_FIELD(var_a6_2, s32 *, 0x98) = (s32) M2C_FIELD(var_a7, s32 *, 4);
                    M2C_FIELD(var_a6_2, s32 *, 0xA0) = (s32) M2C_FIELD(var_a5_2, s32 *, 4);
                    M2C_FIELD(var_a6_2, s32 *, 0xA8) = (s32) M2C_FIELD(var_a4_2, s32 *, 4);
                    M2C_FIELD(var_a6_2, s32 *, 0x9C) = (s32) M2C_FIELD(var_a7, s32 *, 8);
                    M2C_FIELD(var_a6_2, s32 *, 0xA4) = (s32) M2C_FIELD(var_a5_2, s32 *, 8);
                    M2C_FIELD(var_a6_2, s32 *, 0xAC) = (s32) M2C_FIELD(var_a4_2, s32 *, 8);
                    M2C_FIELD(var_a6_2, s32 *, 0xA0) = (s32) M2C_FIELD(var_a7, s32 *, 0xC);
                    M2C_FIELD(var_a6_2, s32 *, 0xA8) = (s32) M2C_FIELD(var_a5_2, s32 *, 0xC);
                    M2C_FIELD(var_a6_2, s32 *, 0xB0) = (s32) M2C_FIELD(var_a4_2, s32 *, 0xC);
                    M2C_FIELD(var_a6_2, s32 *, 0xA4) = (s32) M2C_FIELD(var_a7, s32 *, 0x10);
                    M2C_FIELD(var_a6_2, s32 *, 0xAC) = (s32) M2C_FIELD(var_a5_2, s32 *, 0x10);
                    M2C_FIELD(var_a6_2, s32 *, 0xB4) = (s32) M2C_FIELD(var_a4_2, s32 *, 0x10);
                    M2C_FIELD(var_a6_2, s32 *, 0xA8) = (s32) M2C_FIELD(var_a7, s32 *, 0x14);
                    M2C_FIELD(var_a6_2, s32 *, 0xB0) = (s32) M2C_FIELD(var_a5_2, s32 *, 0x14);
                    M2C_FIELD(var_a6_2, s32 *, 0xB8) = (s32) M2C_FIELD(var_a4_2, s32 *, 0x14);
                    M2C_FIELD(var_a6_2, s32 *, 0xAC) = (s32) M2C_FIELD(var_a7, s32 *, 0x18);
                    M2C_FIELD(var_a6_2, s32 *, 0xB4) = (s32) M2C_FIELD(var_a5_2, s32 *, 0x18);
                    M2C_FIELD(var_a6_2, s32 *, 0xBC) = (s32) M2C_FIELD(var_a4_2, s32 *, 0x18);
                    M2C_FIELD(var_a6_2, s32 *, 0xB0) = (s32) M2C_FIELD(var_a7, s32 *, 0x1C);
                    var_a7 += 0x20;
                    M2C_FIELD(var_a6_2, s32 *, 0xB8) = (s32) M2C_FIELD(var_a5_2, s32 *, 0x1C);
                    var_a5_2 += 0x20;
                    M2C_FIELD(var_a6_2, s32 *, 0xC0) = (s32) M2C_FIELD(var_a4_2, s32 *, 0x1C);
                    var_a4_2 += 0x20;
                    var_a6_2 += 0x20;
                } while (var_t0 < (var_a0 - 8));
            }
        }
        if (var_t0 < var_a0) {
            temp_a4_2 = var_t0 * 4;
            var_a5_3 = arg2 + temp_a4_2;
            var_a7_2 = arg1 + temp_a4_2;
            var_a6_3 = ((void *)D_00CBBE60) + temp_a4_2;
            var_a2 = arg3 + temp_a4_2;
            do {
                var_t0 += 1;
                M2C_FIELD(var_a6_3, s32 *, 0x94) = (s32) *var_a7_2;
                var_a7_2 += 4;
                M2C_FIELD(var_a6_3, s32 *, 0x9C) = (s32) *var_a5_3;
                var_a5_3 += 4;
                M2C_FIELD(var_a6_3, s32 *, 0xA4) = (s32) *var_a2;
                var_a2 += 4;
                var_a6_3 += 4;
            } while (var_t0 < var_a0);
        }
    }
    (*(s32 *)D_00CBBEF0) = var_a0;
    (*(u8 *)D_00CBBEEC) = ((*(u8 *)D_00CBBEEC) & ~1) | 1;
}
