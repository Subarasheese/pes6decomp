/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0021CE30(M2C_UNK *, M2C_UNK *, void *, M2C_UNK32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003A91D0[];
extern M2C_UNK32 D_003E74D4;
extern char D_00538200[];
extern char D_00538204[];
extern char D_00538250[];
extern M2C_UNK func_0021C720;

s32 func_0021D1E0(void *arg0) {
    M2C_UNK32 sp58;
    s16 sp5C;
    s16 sp5E;
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a2;
    s32 var_s3;

    temp_s1 = (*(s32 *)D_00538204);
    var_s3 = 0;
    if (temp_s1 != 0) {
        temp_s0 = (*(s32 *)D_00538200);
        var_a2 = 0;
        sp5C = M2C_FIELD(arg0, s16 *, 0x20);
        sp5E = M2C_FIELD(arg0, s16 *, 0x22);
        if (M2C_FIELD(((void *)D_00538250), s32 *, 0) == 0) {
            if ((arg0 + 0xC) != NULL) {
                M2C_FIELD(arg0, s32 *, 0xC) = 0;
                M2C_FIELD(arg0, s32 *, 0x14) = 0;
                M2C_FIELD(arg0, s32 *, 0x18) = 0;
            }
            sp58 = D_003E74D4;
            func_0021CE30(((void *)D_00538250), &func_0021C720, arg0 + 0xC, sp58, 0, 0, ((void *)D_003A91D0));
            var_a2 = 1;
            M2C_FIELD(((void *)D_00538250), s32 *, 0xC4) = temp_s0;
            M2C_FIELD(((void *)D_00538250), s32 *, 0xBC) = temp_s1;
            M2C_FIELD(((void *)D_00538250), s16 *, 0xB4) = sp5C;
            M2C_FIELD(((void *)D_00538250), s16 *, 0xB6) = sp5E;
        }
        if (var_a2 != 0) {
            var_s3 = -0x7F;
        }
    }
    return var_s3;
}
