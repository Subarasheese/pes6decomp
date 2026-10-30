/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030C3B0(void);
s32 func_001C4698(s32, s32, M2C_UNK);               /* extern */
M2C_UNK func_001C48E8(s32, M2C_UNK, s32);           /* extern */
s32 func_00638080(s32);                             /* extern */
s32 func_006396E0(s32, s32);                        /* extern */
s32 func_00639B50(s32);                             /* extern */
extern s32 D_003EA248;
extern s32 D_003EA24C;
extern s32 D_003EA250;
extern char D_0065E780[];
extern char D_0065E790[];
extern char D_0065EF68[];

s32 func_00653510(s32 arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    if ((*(s32 *)D_0065E790) != 2) {
        if ((*(s32 *)D_0065E790) != 1) {
            func_001C48E8((*(s32 *)D_0065EF68), 0, func_00639B50((*(s32 *)D_0065E790)) << 0xA);
            if (arg0 != 0) {
                D_003EA250 = 0;
                D_003EA248 = 8;
                D_003EA24C = 1;
            } else {
                D_003EA24C = 0;
                D_003EA248 = 7;
                D_003EA250 = 0;
            }
            M2C_FIELD(((void *)D_0065E780), s32 *, 0x10) = 1;
        }
        if (func_00638080(D_003EA248) != 0) {
            M2C_FIELD(((void *)D_0065E780), s32 *, 0x14) = (s32) (func_006396E0(D_003EA24C, D_003EA250) & 0xFF);
            M2C_FIELD(((void *)D_0065E780), s32 *, 0x10) = 2;
            goto block_10;
        }
    } else {
block_10:
        temp_s1 = (*(s32 *)D_0065EF68);
        temp_v0 = func_0030C3B0();
        if (arg0 != 0) {

        }
        if (func_001C4698(temp_v0, temp_s1 + 0x3D8, 0x30) != 0) {
            M2C_FIELD(((void *)D_0065E780), s8 *, 0x22) = 1;
        }
        M2C_FIELD(((void *)D_0065E780), s32 *, 0x10) = 0;
        var_s1 = 1;
    }
    return var_s1;
}
