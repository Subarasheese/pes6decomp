/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001DF820(s32, s8 *);                   /* extern */
extern char D_00A02FB8[];
extern char D_00A7DE00[];

s32 func_009D2C40(s32 arg0, s8 *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s8 *var_s1;
    void *temp_v1;

    var_s1 = arg1;
    if ((*(s32 *)D_00A7DE00) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 4) {
        return 0;
    }
    if (var_s1 != NULL) {
        temp_s0 = arg0 * 8;
        M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), s8 *, 5) = 1;
        func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), s32 *, 0x74), 0);
        func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), s32 *, 0x78), 0);
        if (M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), u8 *, 9) == 0) {
            func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), s32 *, 0x78), 1);
        } else {
            func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), s32 *, 0x74), 1);
        }
    } else {
        temp_s0_2 = arg0 * 8;
        M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), s8 *, 5) = 0;
        func_001D7D60(M2C_FIELD((temp_s0_2 + (*(s32 *)D_00A7DE00)), s32 *, 0x74), 0);
        func_001D7D60(M2C_FIELD((temp_s0_2 + (*(s32 *)D_00A7DE00)), s32 *, 0x78), 0);
    }
    temp_v1 = M2C_FIELD(((arg0 * 4) + (*(s32 *)D_00A7DE00)), void **, 0xC8);
    if (temp_v1 != NULL) {
        if ((var_s1 == NULL) || (*var_s1 == 0)) {
            var_s1 = ((void *)D_00A02FB8);
        }
        func_001DF820(M2C_FIELD(temp_v1, s32 *, 0xC), var_s1);
    }
    return 1;
}
