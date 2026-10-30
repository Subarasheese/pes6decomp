/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern s32 func_00263030(void);
s32 *func_00825710();                               /* extern */
M2C_UNK func_00CE41E0();                            /* extern */
extern void *D_003E7878;

void func_00825E50(void) {
    s32 temp_s0;
    s32 temp_s0_2;

    func_001D7F10(M2C_FIELD(D_003E7878, void **, 4));
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 8));
    M2C_FIELD(D_003E7878, void **, 4) = NULL;
    M2C_FIELD(D_003E7878, void **, 8) = NULL;
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 0xC));
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 0x10));
    M2C_FIELD(D_003E7878, void **, 0x10) = NULL;
    M2C_FIELD(D_003E7878, void **, 0xC) = NULL;
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 0x14));
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 0x18));
    M2C_FIELD(D_003E7878, void **, 0x14) = NULL;
    M2C_FIELD(D_003E7878, void **, 0x18) = NULL;
    func_001D7F10(M2C_FIELD(D_003E7878, void **, 0x1C));
    M2C_FIELD(D_003E7878, void **, 0x1C) = NULL;
    M2C_FIELD(D_003E7878, s32 *, 0) = 0;
    func_00CE41E0();
    if (func_00263030() != 0) {
        temp_s0 = M2C_FIELD(D_003E7878, s32 *, 0x38);
        *func_00825710() = temp_s0;
        temp_s0_2 = M2C_FIELD(D_003E7878, s32 *, 0x3C);
        M2C_FIELD(func_00825710(), s32 *, 4) = temp_s0_2;
    }
}
