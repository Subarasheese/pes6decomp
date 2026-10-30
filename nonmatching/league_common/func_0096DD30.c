/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00221780(int);
extern s32 func_002218E0(void *);
s32 func_00221340(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_00938F10(s32);                             /* extern */
M2C_UNK func_00939470(u8);                          /* extern */
extern void *D_003E77BC;
extern char D_00591C09[];

void func_0096DD30(void) {
    s32 temp_s0;
    s32 temp_s2;
    u32 var_s3;
    void *var_v1;

    if ((*(u8 *)D_00591C09) == 4) {
        func_00939470((*(u8 *)D_00591C09));
        var_s3 = 0;
        do {
            temp_s2 = (var_s3 + 0xFA0) & 0xFFFF;
            temp_s0 = func_00221340(temp_s2, 3, 1) & 0xFFFF;
            M2C_FIELD((D_003E77BC + var_s3), s8 *, 0x33F42) = 0;
            if ((func_00938F10(temp_s2) & 0xFF) != 0xFF) {
                var_v1 = D_003E77BC + var_s3 + 0x30000;
                goto block_9;
            }
            if ((func_002218E0((void *) temp_s2) != 0) || (func_00221780(temp_s2) != 0) || ((((var_s3 / 23) + (var_s3 >> 0x1F) + 0xBA) & 0xFFFF & 0xFFFF) != (temp_s0 & 0xFFFF))) {
                var_v1 = D_003E77BC + var_s3 + 0x30000;
block_9:
                M2C_FIELD(var_v1, s8 *, 0x3F42) = 1;
            }
            var_s3 += 1;
        } while ((s32) var_s3 < 0x19E);
        M2C_FIELD(D_003E77BC, s8 *, 0x33F41) = 1;
    }
}
