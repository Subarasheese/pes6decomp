/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
void *func_0099AF50(s32, s32, M2C_UNK);             /* extern */
M2C_UNK func_009F06D0(s32, void *, s32, s32, s32);  /* extern */

void func_009EFB90(void *arg0, void *arg1, s32 arg2, void **arg3, s32 arg4, s32 arg5, void *arg6, s32 arg7, M2C_UNK (*arg_sp0)(void *, s32)) {
    s32 temp_s1;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;

    M2C_FIELD(arg0, s32 *, 0x14) = arg4;
    M2C_FIELD(arg0, s32 *, 0x18) = arg5;
    M2C_FIELD(arg0, void **, 0x1C) = (void *) M2C_FIELD(arg6, void **, 8);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg6, s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xC) = arg1;
    M2C_FIELD(arg0, void ***, 0x10) = arg3;
    if (*arg3 == NULL) {
        temp_v0 = func_0099AF50(arg2, M2C_FIELD(arg6, s32 *, 0), 1);
        *arg3 = temp_v0;
        func_001D7D80(temp_v0, M2C_FIELD(arg6, s16 *, 4));
        temp_v1 = M2C_FIELD(arg0, void **, 0x1C);
        temp_s1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC);
        func_009F06D0(M2C_FIELD(arg0, s32 *, 0x14), *M2C_FIELD(arg0, void ***, 0x10), M2C_FIELD(temp_v1, s32 *, 0), M2C_FIELD(temp_v1, s32 *, 4), temp_s1);
        M2C_FIELD(arg0, s32 *, 8) = temp_s1;
        if (arg_sp0 != NULL) {
            arg_sp0(arg0, arg7);
            return;
        }
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x1C);
        func_009F06D0(M2C_FIELD(arg0, s32 *, 0x18), *M2C_FIELD(arg0, void ***, 0x10), M2C_FIELD(temp_v1_2, s32 *, 8), M2C_FIELD(temp_v1_2, s32 *, 0xC), arg7);
        M2C_FIELD(arg0, s32 *, 4) = arg7;
    }
}
