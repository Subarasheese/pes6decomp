/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00165A90(void *);
extern s32 func_001662F0(void *);
extern void func_0015B478(void *);
extern s32 func_00166268(void *);
extern char D_003C8D40[];

f32 func_00166F48(void *arg0) {
    f32 var_f0;
    s32 temp_s0;
    s32 temp_s1;
    void **temp_v1;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8D40));
        return -1.0f;
    }
    var_f0 = 0.0f;
    if (func_00165A90(arg0) >= 2) {
        temp_v1 = M2C_FIELD(arg0, void ***, 0x14);
        if (temp_v1 != NULL) {
            temp_s0 = M2C_FIELD(*temp_v1, s32 (**)(void **, M2C_UNK), 0x24)(temp_v1, 1);
            temp_s1 = func_001662F0(arg0);
            var_f0 = (f32) ((temp_s0 / (s32) (temp_s1 * 0x12)) << 5) / (f32) func_00166268(arg0);
        }
    }
    return var_f0;
}
