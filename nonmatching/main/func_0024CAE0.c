/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void * func_00225160(s32);
extern void * func_00221230(s32);
extern void func_00220A30(void *);
M2C_UNK func_001C7F58(void *, M2C_UNK *);           /* extern */
s32 func_00225940(u8);                              /* extern */
extern char D_003AA201[];
extern char D_003AA235[];
extern char D_003AA269[];
extern char D_003AA29D[];
extern char D_003AA2D1[];
extern char D_003AA305[];
extern char D_003AA339[];
extern char D_003AA36D[];
extern s32 D_003E77B0;
extern char D_0053C9D0[];
extern char D_0053CB60[];
extern char D_0053CBB0[];
extern char D_00591C09[];

void func_0024CAE0(void *arg0) {
    M2C_UNK *var_s2;
    M2C_UNK *var_s2_2;
    M2C_UNK *var_s2_3;
    M2C_UNK *var_s4_2;
    M2C_UNK *var_s5;
    s32 *var_a1;
    s32 *var_s5_2;
    s32 temp_s3;
    s32 var_a0;
    s32 var_a2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s3;
    s32 var_s4;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s0;
    void *var_s0_2;
    void *var_s3_2;
    void *var_s3_3;

    var_a2 = 0;
    if ((u32) ((*(u8 *)D_00591C09) - 1) < 2U) {
        var_s3 = 0;
        var_s2 = ((void *)D_0053C9D0);
        var_s0 = arg0;
        do {
            func_001C7F58(var_s0 + 4, var_s2);
            var_s3 += 1;
            var_s2 += 0x2E;
            var_s0 += 0x34;
        } while (var_s3 < 8);
        var_s4 = 0;
        var_s0_2 = arg0;
        var_s5 = ((void *)D_0053C9D0);
        do {
            temp_s3 = var_s4 % 2;
            temp_s2 = func_00225160((s32) M2C_FIELD((D_003E77B0 + temp_s3), u8 *, 0x2C));
            if (func_00225940(M2C_FIELD((D_003E77B0 + temp_s3), u8 *, 0x2C)) & 0xFF) {
                M2C_FIELD(var_s0_2, s8 *, 3) = (s8) M2C_FIELD(temp_s2, s8 *, 2);
                M2C_FIELD(var_s0_2, u8 *, 2) = (u8) M2C_FIELD(temp_s2, u8 *, 0);
                M2C_FIELD(var_s0_2, s8 *, 0x32) = (s8) M2C_FIELD(temp_s2, s8 *, 1);
                M2C_FIELD(var_s0_2, s8 *, 0x33) = (s8) M2C_FIELD(temp_s2, s8 *, 3);
                func_001C7F58(var_s0_2 + 4, var_s5);
                var_s0_2 += 0x34;
                var_s5 += 0x2E;
            }
            var_s4 += 1;
        } while (var_s4 < 2);
    } else {
        var_a0 = 0;
        var_a1 = ((void *)D_0053CB60);
        do {
            if (*var_a1 == 1) {
                var_a2 = 1;
            }
            var_a0 += 1;
            var_a1 += 4;
        } while (var_a0 < 8);
        if (var_a2 == 1) {
            var_s0_3 = 0;
            var_s5_2 = ((void *)D_0053CB60);
            var_s4_2 = ((void *)D_0053CBB0);
            var_s3_2 = arg0;
            var_s2_2 = ((void *)D_0053C9D0);
            do {
                if (*var_s5_2 == 1) {
                    M2C_FIELD(var_s3_2, s8 *, 2) = (s8) M2C_FIELD(var_s4_2, s8 *, 2);
                    M2C_FIELD(var_s3_2, s8 *, 0x32) = (s8) M2C_FIELD(var_s4_2, s8 *, 0x32);
                    M2C_FIELD(var_s3_2, s8 *, 0x33) = (s8) M2C_FIELD(var_s4_2, s8 *, 0x33);
                    func_001C7F58(var_s3_2 + 4, var_s4_2 + 4);
                } else {
                    temp_v0 = func_00221230(var_s0_3);
                    M2C_FIELD(var_s3_2, s8 *, 2) = (s8) M2C_FIELD(temp_v0, u8 *, 0);
                    M2C_FIELD(var_s3_2, s8 *, 0x32) = (s8) M2C_FIELD(temp_v0, s8 *, 1);
                    M2C_FIELD(var_s3_2, s8 *, 0x33) = (s8) M2C_FIELD(temp_v0, s8 *, 3);
                    if ((var_s0_3 == 0) && (func_002DCA30() == 0)) {
                        func_00220A30(arg0 + 4);
                    } else {
                        func_001C7F58(var_s3_2 + 4, var_s2_2);
                    }
                }
                var_s0_3 += 1;
                var_s5_2 += 4;
                var_s4_2 += 0x34;
                var_s3_2 += 0x34;
                var_s2_2 += 0x2E;
            } while (var_s0_3 < 8);
        } else {
            if (func_002DCA30() == 0) {
                func_00220A30(arg0 + 4);
            }
            var_s0_4 = 0;
            var_s3_3 = arg0;
            var_s2_3 = ((void *)D_0053C9D0);
            do {
                temp_v0_2 = func_00221230(var_s0_4);
                M2C_FIELD(var_s3_3, s8 *, 3) = (s8) M2C_FIELD(temp_v0_2, s8 *, 2);
                M2C_FIELD(var_s3_3, u8 *, 2) = (u8) M2C_FIELD(temp_v0_2, u8 *, 0);
                M2C_FIELD(var_s3_3, s8 *, 0x32) = (s8) M2C_FIELD(temp_v0_2, s8 *, 1);
                M2C_FIELD(var_s3_3, s8 *, 0x33) = (s8) M2C_FIELD(temp_v0_2, s8 *, 3);
                if ((var_s0_4 == 0) && (func_002DCA30() == 0)) {
                    func_00220A30(arg0 + 4);
                } else {
                    func_001C7F58(var_s3_3 + 4, var_s2_3);
                }
                var_s0_4 += 1;
                var_s3_3 += 0x34;
                var_s2_3 += 0x2E;
            } while (var_s0_4 < 8);
        }
    }
    M2C_FIELD(arg0, s8 *, 1) = (s8) (*(s8 *)D_003AA201);
    M2C_FIELD(arg0, s8 *, 0x35) = (s8) (*(s8 *)D_003AA235);
    M2C_FIELD(arg0, s8 *, 0x69) = (s8) (*(s8 *)D_003AA269);
    M2C_FIELD(arg0, s8 *, 0x9D) = (s8) (*(s8 *)D_003AA29D);
    M2C_FIELD(arg0, s8 *, 0xD1) = (s8) (*(s8 *)D_003AA2D1);
    M2C_FIELD(arg0, s8 *, 0x105) = (s8) (*(s8 *)D_003AA305);
    M2C_FIELD(arg0, s8 *, 0x139) = (s8) (*(s8 *)D_003AA339);
    M2C_FIELD(arg0, s8 *, 0x16D) = (s8) (*(s8 *)D_003AA36D);
}
