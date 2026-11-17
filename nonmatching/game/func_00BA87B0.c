/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00BF6280(void);
extern s32 func_002079F0(void *, s32);
s32 func_009E1C90(s32);                         /* extern */

s32 func_00BA87B0(void **arg0, s32 arg1) {
    u16 type;
    s32 code;
    void *obj;

    if ((func_009E1C90(1) & 0xFF) == 0xC) {
        s32 mode = func_00BF6280();
        if (mode == 0) {
            obj = M2C_FIELD(*arg0, void **, 4);
            type = M2C_FIELD(obj, u16 *, 0x30);
            if (type == 0x48F) {
                if (arg1 != 4) return 0;
                code = 0x1DDF;
            } else if (type == 0x48E || type == 0x38C) {
                if (arg1 == 0x2F) code = 0x1261;
                else if (arg1 == 0x31) code = 0x24C3;
                else if (arg1 == 0x12) code = 0x1261;
                else if (arg1 == 0x24) code = 0x1CB8;
                else if (arg1 == 0x25) code = 0x80A;
                else if (arg1 == 0xD) code = 0x24C3;
                else if (arg1 == 0xC) code = 0x25E9;
                else if (arg1 == 7) code = 0;
                else return 0;
            } else {
                return 0;
            }
            if (func_002079F0(obj, code % 10000) != 0) return 1;
            return 0;
        } else if (mode == 2) {
            if (arg1 == 0x14) code = 0x1388;
            else if (arg1 == 0x38) code = 0x1261;
            else if (arg1 == 0x3A) code = 0x24C3;
            else if (arg1 == 0x10) code = 0x24C3;
            else if (arg1 == 0xB) code = 0x24C3;
            else if (arg1 == 0xA) code = 0x25E9;
            else if (arg1 == 0x27) code = 0x24C3;
            else if (arg1 == 0x26) code = 0x24C3;
            else if (arg1 == 0x25) code = 0x24C3;
            else if (arg1 == 0x24) code = 0x1261;
            else if (arg1 == 0x23) code = 0x16FA;
            else if (arg1 == 0x22) code = 0x1261;
            else if (arg1 == 0x1A) code = 0x1261;
            else if (arg1 == 0x19) code = 0x1CB8;
            else if (arg1 == 0x1B) code = 0x80A;
            else if (arg1 == 8) code = 0;
            else return 0;
        } else {
            return 0;
        }
    } else {
        if ((func_009E1C90(1) & 0xFF) != 5) return 0;
        if ((func_009E1C90(2) & 0xFF) == 3) {
            if (arg1 == 1) code = 0x1CB8;
            else if (arg1 == 2) code = 0x80A;
            else return 0;
        } else if ((func_009E1C90(2) & 0xFF) == 0xA) {
            if (arg1 == 0x21) code = 0x222E;
            else if (arg1 == 0x20) code = 0x4E2;
            else if (arg1 == 0x1F) code = 0x1D4C;
            else if (arg1 == 0x1E) code = 0;
            else return 0;
        } else {
            type = M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30);
            if (type != 0x48E && type != 0x38C) return 0;
            if (arg1 == 0x12) code = 0x1CB8;
            else if (arg1 == 0x17) code = 0x80A;
            else if (arg1 == 0x18) code = 0x24C3;
            else if (arg1 == 0xE) code = 0x24C3;
            else if (arg1 == 0x24) code = 0x2710;
            else if (arg1 == 0x23) code = 0x24C3;
            else if (arg1 == 5) code = 0;
            else return 0;
        }
    }
    if (func_002079F0(M2C_FIELD(*arg0, void **, 4), code % 10000) != 0) return 1;
    return 0;
}
