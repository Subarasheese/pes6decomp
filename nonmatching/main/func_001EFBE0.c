/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001E62C0(void);
M2C_UNK func_001EBF50(s32, s32, f32 *, s32);        /* extern */
M2C_UNK func_001EFDD0(void *);                      /* extern */
M2C_UNK func_001EFEA0(void *, void *);              /* extern */
s32 func_001F5140(s32, u16, u16);                   /* extern */

void func_001EFBE0(void *arg0) {
    f32 sp60;
    f32 sp64;
    f32 sp68;
    s32 sp6C;
    s32 temp_v1;
    u16 var_a1;
    u16 var_a2;
    void *var_s0;
    void *var_s3;

    if ((func_001E62C0() & 2) == 2) {
        if (M2C_FIELD(arg0, s32 *, 0x10) != 4) {
            var_s0 = M2C_FIELD(arg0, void **, 0);
            do {
                if ((M2C_FIELD(arg0, u8 *, 0x3A) | M2C_FIELD(var_s0, u8 *, 0x11E)) & 1) {
                    func_001EFEA0(arg0, var_s0);
                }
                if (!(((s32) M2C_FIELD(var_s0, u8 *, 0x11E) >> 1) & 1)) {

                } else {
                    func_001EFDD0(var_s0);
                }
                M2C_FIELD(var_s0, u8 *, 0x11E) = 0U;
                var_s0 = M2C_FIELD(var_s0, void **, 8);
            } while (var_s0 != NULL);
        } else {
            var_s3 = M2C_FIELD(arg0, void **, 0);
            do {
                if ((M2C_FIELD(arg0, u8 *, 0x3A) | M2C_FIELD(var_s3, u8 *, 0x35)) & 1) {
                    sp60 = M2C_FIELD(arg0, f32 *, 0x20) + M2C_FIELD(var_s3, f32 *, 0x10);
                    sp64 = M2C_FIELD(arg0, f32 *, 0x24) + M2C_FIELD(var_s3, f32 *, 0x14);
                    sp6C = 0x3F800000;
                    sp68 = M2C_FIELD(arg0, f32 *, 0x28) + M2C_FIELD(var_s3, f32 *, 0x18);
                    func_001EBF50(M2C_FIELD(var_s3, s32 *, 0x24), M2C_FIELD(var_s3, s32 *, 0x20), &sp60, M2C_FIELD(var_s3, s32 *, 8));
                }
                M2C_FIELD(var_s3, u8 *, 0x35) = 0U;
                var_s3 = M2C_FIELD(var_s3, void **, 4);
            } while (var_s3 != NULL);
        }
        if (((s32) M2C_FIELD(arg0, u8 *, 0x3A) >> 1) & 1) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
            var_a1 = 0;
            var_a2 = 0;
            switch (temp_v1) {                      /* irregular */
            case 2:
            case 0:
                var_a2 = M2C_FIELD(arg0, u16 *, 0x34);
                break;
            case 3:
            case 1:
                var_a2 = M2C_FIELD(arg0, u16 *, 0x34);
                var_a1 = var_a2;
                break;
            case 4:
                var_a2 = M2C_FIELD(arg0, u16 *, 0x36);
                break;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = func_001F5140(M2C_FIELD(arg0, s32 *, 0x10), var_a1, var_a2);
        }
        M2C_FIELD(arg0, u8 *, 0x3A) = 0U;
    }
}
