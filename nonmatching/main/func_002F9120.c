/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9340(s32, s32, s32);
extern void * func_002F97E0(s32);
extern void func_001D7D60(void *, s8);
extern void func_002FA5E0(s32, void *, s32);
extern s32 func_002F9370(void *);
extern void func_001D78B0(void *, u8);
M2C_UNK func_002F8F00(void *, M2C_UNK);             /* extern */
M2C_UNK func_002F9720(void *, M2C_UNK, void *);     /* extern */
M2C_UNK func_002F9840(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK func_002F99A0(void *, s32, s32);            /* extern */
void *func_002F9AF0(s32, s32, u8);                  /* extern */
M2C_UNK func_002FA790(s32, s32, s32, s32);          /* extern */

void func_002F9120(void *arg0, void *arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s3;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    u8 temp_s2;
    void *temp_s1;
    void *temp_s3_2;
    void *temp_s7;
    void *temp_v0;

    if (arg1 != NULL) {
        temp_s0 = M2C_FIELD(arg1, s32 *, 0x10);
        temp_s1 = M2C_FIELD(arg1, void **, 0xC);
        temp_s2 = M2C_FIELD(arg1, u8 *, 8);
        temp_s3 = func_002F9370(arg0);
        if (temp_s0 > 0) {
            temp_s3_2 = func_002F97E0(1);
            temp_v0 = func_002F9AF0(temp_s3, M2C_FIELD(temp_s1, s32 *, 8), temp_s2);
            temp_s2_2 = M2C_FIELD(temp_v0, s32 *, 0xC);
            func_002F9720(temp_s3_2, 0, temp_v0);
            func_002F9340((s32) arg0, (s32) temp_s3_2, 0);
            func_002F99A0(temp_s1, temp_s0, temp_s2_2);
        }
        temp_s2_3 = M2C_FIELD(arg1, s32 *, 0x18);
        temp_s6 = M2C_FIELD(arg1, s32 *, 0x14);
        temp_s7 = M2C_FIELD(arg1, void **, 0x1C);
        temp_s1_2 = M2C_FIELD(arg1, s32 *, 0x20);
        temp_s3_3 = func_002F9370(arg0);
        if (temp_s2_3 > 0) {
            temp_v0_2 = func_002F97E0(temp_s2_3);
            func_002F9340((s32) arg0, temp_v0_2, 1);
            func_002FA790(temp_v0_2, temp_s3_3, temp_s6, temp_s2_3);
            if (temp_s1_2 > 0) {
                func_002FA5E0(temp_v0_2, temp_s7, temp_s1_2);
            }
        }
        temp_s3_4 = M2C_FIELD(arg1, s32 *, 0x28);
        temp_s0_2 = M2C_FIELD(arg1, s32 *, 0x24);
        temp_s1_3 = func_002F9370(arg0);
        if (temp_s3_4 > 0) {
            temp_v0_3 = func_002F97E0(temp_s3_4);
            func_002F9340((s32) arg0, temp_v0_3, 2);
            func_002F9840(temp_v0_3, temp_s1_3, temp_s0_2, temp_s3_4, arg2);
        }
        func_001D7D60(func_002F9370(arg0), 0);
        func_001D78B0(func_002F9370(arg0), 0U);
        func_002F8F00(arg0, 3);
    }
}
