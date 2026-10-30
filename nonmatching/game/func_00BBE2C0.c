/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 D_003E74CC;
extern char D_00591F11[];

s32 func_00BBE2C0(void *arg0) {
    u16 temp_v0;
    void *temp_a0;

    if (M2C_FIELD(arg0, f32 *, 0xE4) != 0.0f) {
        return 0;
    }
    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_v0 = M2C_FIELD(temp_a0, u16 *, 0x30);
    switch (temp_v0) {                              /* irregular */
    case 0x3D7:
    case 0x3D6:
    case 0x269:
    case 0x268:
    case 0x267:
    case 0x162:
    case 0x266:
    case 0x30:
    case 0x264:
    case 0x263:
    case 0x261:
    case 0x260:
    case 0x286:
    case 0x285:
    case 0x14E:
    case 0x14F:
    case 0x152:
    case 0x150:
    case 0x1B0:
    case 0x14A:
    case 0x149:
    case 0x147:
    case 0x146:
    case 0x145:
    case 0x144:
    case 0x14D:
    case 0x14C:
    case 0x14B:
    case 0x289:
    case 0x288:
    case 0x2A8:
    case 0x155:
        if (func_00207D80(temp_a0, M2C_FIELD((((temp_v0 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8) - 5) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x601) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x500;
            }
            return 1;
        }
block_48:
    default:
        return 0;
    case 0x43:
    case 0x44:
        if (((*(u8 *)D_00591F11) != 0) && (func_00207D80(temp_a0, M2C_FIELD((((temp_v0 & 0xFFFF) * 4) + D_003E74CC), s32 *, 0x2FD8) - 5) != 0)) {
            if (M2C_FIELD(arg0, s32 *, 0x1C) >= 0x601) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0x500;
            }
            return 1;
        }
        goto block_48;
    }
}
