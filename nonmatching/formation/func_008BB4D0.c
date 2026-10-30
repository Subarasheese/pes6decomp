/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001E6E10(s32);
extern s32 func_001F2410(void *);
extern void func_001EF860(void *, void *);
M2C_UNK func_001EE5D0(void *, f32 *);               /* extern */
M2C_UNK func_001EE630(void *, s64 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EF370(void *, f32 *);               /* extern */
extern char D_008ECB18[];
extern char D_008ECB1C[];
extern char D_008ECB1E[];

void *func_008BB4D0(void *arg0, void *arg1, s32 arg2) {
    f32 sp50;
    f32 sp54;
    f32 sp60;
    f32 sp64;
    f32 sp68;
    f32 sp6C;
    s64 sp78;
    f32 var_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_s0;
    void *temp_v0;

    if (arg0 == NULL) {
        return NULL;
    }
    if (arg2 < 3) {
        temp_s0 = func_001E6E10(0x4EDC);
        switch (arg2) {                             /* irregular */
        case 2:
            var_v0 = 13.0f;
            sp60 = -6.0f;
            sp64 = -6.0f;
            sp68 = 13.0f;
block_21:
            sp6C = var_v0;
            break;
        case 1:
            var_v0 = 11.0f;
            sp60 = -5.0f;
            sp64 = -5.0f;
            sp68 = 11.0f;
            goto block_21;
        case 0:
            temp_v1 = -(*(s16 *)D_008ECB1C);
            var_v0_2 = temp_v1 >> 1;
            if (temp_v1 < 0) {
                var_v0_2 = (s32) (temp_v1 + 1) >> 1;
            }
            temp_v1_2 = -(*(s16 *)D_008ECB1E);
            var_v0_3 = temp_v1_2 >> 1;
            sp60 = (f32) var_v0_2;
            if (temp_v1_2 < 0) {
                var_v0_3 = (s32) (temp_v1_2 + 1) >> 1;
            }
            sp64 = (f32) var_v0_3;
            sp68 = (f32) (*(s16 *)D_008ECB1C);
            sp6C = (f32) (*(s16 *)D_008ECB1E);
            break;
        }
        sp78 = (*(s64 *)D_008ECB18);
        temp_v0 = func_001F2410(arg0);
        func_001EF900(temp_v0, 1);
        func_001EF370(temp_v0, &sp60);
        if (temp_s0 != NULL) {
            func_001EEAC0(temp_v0, temp_s0);
            func_001EE630(temp_v0, &sp78);
        }
        func_001EE5D0(temp_v0, &sp50);
        sp50 = M2C_FIELD(arg1, f32 *, 0);
        sp54 = M2C_FIELD(arg1, f32 *, 4);
        func_001EF860(temp_v0, &sp50);
        return temp_v0;
    }
    return NULL;
}
