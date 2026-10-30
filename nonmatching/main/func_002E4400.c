/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F3D10(s32, u8);
extern s32 func_001D7BA0(void *);
extern void func_001D7D80(void *, s16);
extern char D_003F7790[];

void func_002E4400(void *arg0, u8 arg1) {
    s32 var_s0;
    s64 temp_s1;
    void *temp_v1;
    void *var_s2;

    var_s2 = arg0;
    if (var_s2 != NULL) {
        func_001F3D10(M2C_FIELD(var_s2, s32 *, 0x18), arg1);
        if ((arg1 & 0xFF) == 1) {
            var_s0 = 0;
            temp_s1 = (s64) ((s64) ((u32) (*(u32 *)D_003F7790) % 46U) << 0x30) >> 0x30;
            do {
                temp_v1 = M2C_FIELD(var_s2, void **, 0x1C);
                if ((temp_v1 != NULL) && (func_001D7BA0(M2C_FIELD(temp_v1, void **, 0x48)) == 2)) {
                    func_001D7D80(M2C_FIELD(M2C_FIELD(var_s2, void **, 0x1C), void **, 0x48), (s16) temp_s1);
                }
                var_s0 += 1;
                var_s2 += 4;
            } while (var_s0 < 2);
        }
    }
}
