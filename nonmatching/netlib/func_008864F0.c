/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DED10(void *, s8);
extern void func_001DF2F0(void *);
extern void func_001DF820(void *, s32);
M2C_UNK func_001C47E0(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_001D6D70(s32, s8, void *);             /* extern */
extern char D_008B2550[];

s32 func_008864F0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;
    void *temp_v0_2;

    if (arg1 != 0) {
        temp_v0 = M2C_FIELD(arg0, void **, 4);
        if (temp_v0 != NULL) {
            func_001DF820(M2C_FIELD(temp_v0, void **, 0xC), arg1);
            func_001D6D70(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s8 *, 0x50), arg0 + 0x20);
            if (arg3 != 0) {
                func_001C47E0(arg0 + 0xC, arg3, 4);
            }
            if (M2C_FIELD(arg0, s8 *, 0x51) != 0) {
                func_001DF2F0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC));
            }
            func_001DED10(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0xC), 1);
        }
    }
    if (arg2 != 0) {
        temp_v0_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_v0_2 != NULL) {
            func_001DF820(M2C_FIELD(temp_v0_2, void **, 0xC), arg2);
            func_001D6D70(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s8 *, 0x52), arg0 + 0x30);
            if (arg3 != 0) {
                func_001C47E0(arg0 + 0xC, arg3, 4);
            }
            if (M2C_FIELD(arg0, s8 *, 0x53) != 0) {
                func_001DF2F0(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC));
            }
            func_001DED10(M2C_FIELD(M2C_FIELD(arg0, void **, 8), void **, 0xC), 1);
        }
    }
    (*(u16 *)D_008B2550) |= (1 << M2C_FIELD(arg0, s8 *, 0x54)) & 0xFFFF;
    M2C_FIELD(arg0, s8 *, 0x55) = 0;
    return 0;
}
