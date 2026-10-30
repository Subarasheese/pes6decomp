/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void memclr(void *, int);
extern char D_003FB700[];
extern char D_003FB778[];
extern char D_003FB77C[];
extern M2C_UNK *D_003FB780;

void func_0012F080(s32 arg0) {
    M2C_UNK *var_t1;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_a4;
    s16 temp_a5;
    s16 var_v1;
    s32 temp_a0;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    void *var_a3;

    memclr(((void *)D_003FB778), 0xC);
    (*(s32 *)D_003FB778) = -1;
    (*(s32 *)D_003FB77C) = arg0;
    memclr(((void *)D_003FB700), 0x78);
    D_003FB780 = ((void *)D_003FB700);
    var_v1 = 0;
    if (arg0 > 0) {
        if (arg0 >= 9) {
            var_a2 = 0;
            var_a0 = 0;
            if ((arg0 >= 0) && (arg0 < 0x7FFFFFFF)) {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                temp_a0 = arg0 & 0x80000000;
                var_a1 = 1;
                if ((temp_a0 == 0) && (temp_a0 != 0)) {
                    var_a1 = 0;
                }
                if (var_a1 != 0) {
                    var_a2 = 1;
                }
            }
            if (var_a2 != 0) {
                var_t1 = ((void *)D_003FB700);
                do {
                    M2C_FIELD(var_t1, s16 *, 0) = var_v1;
                    M2C_FIELD(var_t1, s16 *, 2) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x1C) = 4;
                    temp_a5 = var_v1 + 3;
                    M2C_FIELD(var_t1, s16 *, 0x78) = (s16) (var_v1 + 1);
                    temp_a4 = var_v1 + 4;
                    M2C_FIELD(var_t1, s16 *, 0x7A) = -1;
                    temp_a3 = var_v1 + 5;
                    M2C_FIELD(var_t1, s32 *, 0x94) = 4;
                    temp_a2 = var_v1 + 6;
                    M2C_FIELD(var_t1, s16 *, 0xF0) = (s16) (var_v1 + 2);
                    temp_a1 = var_v1 + 7;
                    M2C_FIELD(var_t1, s16 *, 0xF2) = -1;
                    var_v1 += 8;
                    M2C_FIELD(var_t1, s32 *, 0x10C) = 4;
                    M2C_FIELD(var_t1, s16 *, 0x168) = temp_a5;
                    M2C_FIELD(var_t1, s16 *, 0x16A) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x184) = 4;
                    M2C_FIELD(var_t1, s16 *, 0x1E0) = temp_a4;
                    M2C_FIELD(var_t1, s16 *, 0x1E2) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x1FC) = 4;
                    M2C_FIELD(var_t1, s16 *, 0x258) = temp_a3;
                    M2C_FIELD(var_t1, s16 *, 0x25A) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x274) = 4;
                    M2C_FIELD(var_t1, s16 *, 0x2D0) = temp_a2;
                    M2C_FIELD(var_t1, s16 *, 0x2D2) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x2EC) = 4;
                    M2C_FIELD(var_t1, s16 *, 0x348) = temp_a1;
                    M2C_FIELD(var_t1, s16 *, 0x34A) = -1;
                    M2C_FIELD(var_t1, s32 *, 0x364) = 4;
                    var_t1 += 0x3C0;
                } while (var_v1 < (arg0 - 8));
            }
        }
        if (var_v1 < arg0) {
            var_a3 = ((void *)D_003FB700) + (var_v1 * 0x78);
            do {
                M2C_FIELD(var_a3, s16 *, 0) = var_v1;
                M2C_FIELD(var_a3, s16 *, 2) = -1;
                var_v1 += 1;
                M2C_FIELD(var_a3, s32 *, 0x1C) = 4;
                var_a3 += 0x78;
            } while (var_v1 < arg0);
        }
    }
}
