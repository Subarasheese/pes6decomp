/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B15370(void);
void func_00B0F320(s32 arg0, s32 arg1) {
    u32 temp_v0;

    if ((arg1 != 0) && (temp_v0 = func_00B15370(), (temp_v0 != 0))) {
        switch (arg0) {                             /* irregular */
        case 0x50:
            M2C_FIELD(temp_v0, s32 *, 0xA70) = arg1;
            return;
        case 0x4F:
            M2C_FIELD(temp_v0, s32 *, 0xA6C) = arg1;
            return;
        case 0x4B:
            M2C_FIELD(temp_v0, s32 *, 0xA80) = arg1;
            return;
        case 0x4A:
            M2C_FIELD(temp_v0, s32 *, 0xA7C) = arg1;
            return;
        case 0x47:
            M2C_FIELD(temp_v0, s32 *, 0xA40) = arg1;
            return;
        case 0x46:
            M2C_FIELD(temp_v0, s32 *, 0xA3C) = arg1;
            return;
        case 0x42:
            M2C_FIELD(temp_v0, s32 *, 0xA50) = arg1;
            return;
        case 0x41:
            M2C_FIELD(temp_v0, s32 *, 0xA4C) = arg1;
            return;
        case 0x3E:
            M2C_FIELD(temp_v0, s32 *, 0xA10) = arg1;
            return;
        case 0x3D:
            M2C_FIELD(temp_v0, s32 *, 0xA0C) = arg1;
            return;
        case 0x3C:
            M2C_FIELD(temp_v0, s32 *, 0xA08) = arg1;
            return;
        case 0x3B:
            M2C_FIELD(temp_v0, s32 *, 0xA04) = arg1;
            return;
        case 0x35:
            M2C_FIELD(temp_v0, s32 *, 0xA1C) = arg1;
            return;
        case 0x34:
            M2C_FIELD(temp_v0, s32 *, 0xA14) = arg1;
            return;
        case 0x2E:
            M2C_FIELD(temp_v0, s32 *, 0x9C8) = arg1;
            return;
        case 0x2D:
            M2C_FIELD(temp_v0, s32 *, 0x9C4) = arg1;
            return;
        case 0x2C:
            M2C_FIELD(temp_v0, s32 *, 0x9C0) = arg1;
            return;
        case 0x2B:
            M2C_FIELD(temp_v0, s32 *, 0x9BC) = arg1;
            return;
        case 0x24:
            M2C_FIELD(temp_v0, s32 *, 0x9D4) = arg1;
            return;
        case 0x23:
            M2C_FIELD(temp_v0, s32 *, 0x9D0) = arg1;
            return;
        case 0x21:
            M2C_FIELD(temp_v0, s32 *, 0x9CC) = arg1;
            return;
        case 0x1D:
            M2C_FIELD(temp_v0, s32 *, 0x990) = arg1;
            return;
        case 0x1C:
            M2C_FIELD(temp_v0, s32 *, 0x98C) = arg1;
            return;
        case 0x18:
            M2C_FIELD(temp_v0, s32 *, 0x9A0) = arg1;
            return;
        case 0x17:
            M2C_FIELD(temp_v0, s32 *, 0x99C) = arg1;
            return;
        case 0x14:
            M2C_FIELD(temp_v0, s32 *, 0x960) = arg1;
            return;
        case 0x13:
            M2C_FIELD(temp_v0, s32 *, 0x95C) = arg1;
            return;
        case 0x12:
            M2C_FIELD(temp_v0, s32 *, 0x958) = arg1;
            return;
        case 0x11:
            M2C_FIELD(temp_v0, s32 *, 0x954) = arg1;
            return;
        case 0xA:
            M2C_FIELD(temp_v0, s32 *, 0x96C) = arg1;
            return;
        case 0x9:
            M2C_FIELD(temp_v0, s32 *, 0x968) = arg1;
            return;
        case 0x8:
            M2C_FIELD(temp_v0, s32 *, 0x964) = arg1;
            break;
        }
    }
}
