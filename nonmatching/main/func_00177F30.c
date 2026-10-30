/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00177A80(void *, int);
extern char D_003CC428[];
extern char D_003CC458[];
extern char D_003CC4B8[];
extern char D_003CC4C8[];

void func_00177F30(void *arg0) {
    s32 *var_a0;
    s32 var_a2;
    s32 var_a2_2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;
    void *var_a1;

    if (arg0 == NULL) {
        func_00177A80(((void *)D_003CC4B8), (s32) ((void *)D_003CC428));
        return;
    }
    if (M2C_FIELD(arg0, s8 *, 4) != 0) {
        var_a2 = 0;
        temp_a3 = M2C_FIELD(arg0, void **, 0xC);
        M2C_FIELD(arg0, void **, 0x14) = temp_a3;
        if ((M2C_FIELD(arg0, s32 *, 0x10) - 1) > 0) {
            var_a1 = temp_a3;
            do {
                M2C_FIELD(var_a1, s32 *, 0xC) = 0;
                var_a2 += 1;
                temp_v1 = var_a1 + 0x10;
                M2C_FIELD(var_a1, s32 *, 8) = 0;
                M2C_FIELD(var_a1, void **, 0) = temp_v1;
                var_a1 = temp_v1;
            } while (var_a2 < (M2C_FIELD(arg0, s32 *, 0x10) - 1));
        }
        var_a2_2 = 3;
        temp_v0 = (var_a2 * 0x10) + temp_a3;
        var_a0 = arg0 + 0x24;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        do {
            var_a2_2 -= 1;
            *var_a0 = 0;
            var_a0 -= 4;
        } while (var_a2_2 >= 0);
        return;
    }
    func_00177A80(((void *)D_003CC4C8), (s32) ((void *)D_003CC458));
}
