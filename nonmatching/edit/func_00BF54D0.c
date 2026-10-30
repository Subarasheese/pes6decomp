/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002223E0(s32, s32);
extern void * func_001F84D0(void *, void *);
extern void * func_00222850(s32, s32);
extern u16 func_00222320(unsigned int, int);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC4C80(u16, s16);                        /* extern */
s32 func_00BC4F30(u16);                             /* extern */
s32 func_00BC5740(u16);                             /* extern */
void *func_00BC5B80(u16);                           /* extern */

void func_00BF54D0(void *arg0, s32 arg1) {
    s16 var_s1;
    u16 temp_s0;
    void *temp_s1;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, u16 *, 0x80);
        if (temp_s0 == 0) {
            return;
        }
        temp_s1 = arg0 + 0x34;
        func_001C48E8(0, 0x7C);
        func_001F84D0(func_00222850((s32) temp_s0, arg1), arg0);
        func_001C4730(arg0 + 0x20, func_002223E0((s32) temp_s0, arg1), 0xF);
        M2C_FIELD(arg0, u16 *, 0x30) = func_00222320((u32) temp_s0, arg1);
        func_001C4730(temp_s1, func_00BC5B80(temp_s0), 0x48);
        if (func_00BC5740(temp_s0) != 0) {
            M2C_FIELD(temp_s1, u8 *, 1) = (u8) ((M2C_FIELD(temp_s1, u8 *, 1) & ~0xF0) | 0xD0);
        }
        if (arg0 != NULL) {
            if (func_00BC4F30(M2C_FIELD(arg0, u16 *, 0x80)) == 1) {
                M2C_FIELD(arg0, s32 *, 0x7C) = 1;
            } else if (func_00BC5740(M2C_FIELD(arg0, u16 *, 0x80)) == 0) {
                M2C_FIELD(arg0, s32 *, 0x7C) = 1;
            } else {
                M2C_FIELD(arg0, s32 *, 0x7C) = 0;
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0x3B) = 0xFE;
        M2C_FIELD(arg0, s16 *, 0x82) = -1;
        if (arg1 == 3) {
            var_s1 = 0x40;
loop_13:
            if ((func_00BC4C80(temp_s0, var_s1) & 0xFF) != 0xFF) {
                M2C_FIELD(arg0, s16 *, 0x82) = var_s1;
                return;
            }
            var_s1 = (var_s1 + 1) & 0xFFFF;
            if (var_s1 >= 0xCC) {

            } else {
                goto loop_13;
            }
        }
    }
}
