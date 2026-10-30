/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1AF30(void);
extern s32 func_001D7980(void *);
extern s32 func_001D7BA0(void *);
extern void func_001D7C20(void *, s32);
extern s16 func_001D7B80(void *);
extern void func_001D7D60(void *, s8);
extern s32 func_001D7BC0(void *);
extern s32 D_003EAD80;

void func_00B1B810(void) {
    s64 temp_s1;
    u32 temp_v0;

    temp_v0 = func_00B1AF30();
    if (temp_v0 != 0) {
        if (!(func_001D7980(M2C_FIELD(temp_v0, void **, 0x2D0)) & 0xFF)) {
            D_003EAD80 = 0;
        }
        func_001D7D60(M2C_FIELD(temp_v0, void **, 0x2D0), 1);
        if ((func_001D7BA0(M2C_FIELD(temp_v0, void **, 0x2D0)) == 0) && (D_003EAD80 == 0)) {
            func_001D7C20(M2C_FIELD(temp_v0, void **, 0x2D0), 2);
        }
        temp_s1 = (s64) (func_001D7BC0(M2C_FIELD(temp_v0, void **, 0x2D0)) << 0x30) >> 0x30;
        if (temp_s1 == (((s64) (func_001D7B80(M2C_FIELD(temp_v0, void **, 0x2D0)) << 0x30) >> 0x30) - 1)) {
            D_003EAD80 += 1;
            func_001D7C20(M2C_FIELD(temp_v0, void **, 0x2D0), 0);
        }
        if (D_003EAD80 == 0xB4) {
            D_003EAD80 = 0;
            M2C_FIELD(temp_v0, s8 *, 0x368) = 2;
        }
    }
}
