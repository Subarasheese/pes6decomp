/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00111F18(void *, s32, s32, s32, void *); /* extern */
M2C_UNK func_00117E78(void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001AE7D8(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005F8CE8[];
extern char D_005F8D08[];
extern char D_005F8D18[];
extern char D_005F8D28[];
extern char D_005F8D40[];

s32 func_00116AD8(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_a1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3;
    u32 *var_a0_2;
    u32 var_v1_2;
    void *temp_v1;
    void *var_v1;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0xAB, ((void *)D_005F8D08));
    }
    if (arg1 == 0) {
        func_001AD620(((void *)D_005F8CE8), 0xAC, ((void *)D_005F8D18));
    }
    if (arg3 == 0) {
        func_001AD620(((void *)D_005F8CE8), 0xAD, ((void *)D_005F8D28));
    }
    var_a0 = arg0 + 0xF0;
    if (arg4 == NULL) {
        func_001AD620(((void *)D_005F8CE8), 0xAE, ((void *)D_005F8D40));
        var_a0 = arg0 + 0xF0;
    }
    func_001AE7D8(var_a0, 0, 0xDA0);
    M2C_FIELD(arg0, void **, 0xE88) = arg4;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0xA84) = -1;
    func_00111F18(arg0, arg1, arg2, arg3, arg4);
    var_a3 = 0;
    var_v1 = M2C_FIELD(arg0, void **, 0xE88);
    var_a2 = 0;
loop_13:
    if (M2C_FIELD(var_v1, s32 *, 0) != 0) {
block_9:
        temp_a1 = var_a3 * 8;
        temp_v1 = temp_a1 + M2C_FIELD(arg0, void **, 0xE88);
        var_v1_2 = M2C_FIELD(temp_v1, u32 *, 0);
        if (var_v1_2 < (u32) M2C_FIELD(temp_v1, u32 *, 4)) {
            var_a0_2 = (var_a2 * 4) + arg0 + 0x120;
            do {
                *var_a0_2 = var_v1_2;
                var_a0_2 += 4;
                var_v1_2 += 0x10;
                var_a2 += 1;
            } while (var_v1_2 < (u32) M2C_FIELD((temp_a1 + M2C_FIELD(arg0, void **, 0xE88)), u32 *, 4));
        }
        var_a3 += 1;
        var_v1 = (var_a3 * 8) + M2C_FIELD(arg0, void **, 0xE88);
        goto loop_13;
    }
    if (M2C_FIELD(var_v1, s32 *, 4) != 0) {
        goto block_9;
    }
    M2C_FIELD(arg0, s32 *, 0xA80) = var_a2;
    func_00117E78(arg0, 0, 0, var_a3);
    return 0;
}
