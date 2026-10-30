/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00816690(M2C_UNK *, M2C_UNK, s32, s32); /* extern */
extern char D_00888250[];
extern char D_008A35D0[];
extern char D_008A35D8[];
extern char D_008A35E0[];
extern char D_008A35E8[];
extern char D_008A35F0[];
extern M2C_UNK func_008165B0;
extern M2C_UNK func_008165D0;
extern M2C_UNK func_00816620;

s32 func_00814E80(void) {
    s32 temp_v0;
    s32 var_a2;
    s32 var_a3;
    s32 var_v1;
    void *temp_a0;
    void *temp_v1;

    if (((void *)D_008A35F0) == NULL) {
        return 0;
    }
    temp_v0 = func_001BBEC0(&func_00816620, &func_008165D0, &func_008165B0, 0, 0, ((void *)D_00888250));
    (*(s32 *)D_008A35D0) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)D_008A35E0) = 0;
        (*(s32 *)D_008A35E8) = 0;
        return 0;
    }
    (*(s32 *)D_008A35E8) = 0;
    func_001BBC60(temp_v0);
    func_001C48E8(((void *)D_008A35F0), 0, 0x424);
    (*(s32 *)D_008A35E0) = 1;
    (*(s32 *)D_008A35D8) = 1;
    var_v1 = 0;
    do {
        M2C_FIELD((((void *)D_008A35F0) + var_v1), s8 *, 0x418) = 0;
        var_v1 += 1;
    } while (var_v1 < 4);
    M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) = 0;
    var_a2 = 0;
    do {
        var_a3 = 0;
loop_8:
        temp_v1 = ((void *)D_008A35F0) + var_a3;
        temp_a0 = ((void *)D_008A35F0) + (var_a2 << 6) + (var_a3 * 8);
        var_a3 += 1;
        M2C_FIELD(temp_a0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_a0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v1, s8 *, 0x410) = 0;
        if (var_a3 < 8) {
            goto loop_8;
        }
        var_a2 += 1;
    } while (var_a2 < 0x10);
    func_00816690(((void *)D_008A35F0), 0, var_a2, var_a3);
    return 1;
}
