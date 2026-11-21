/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0013B660(void);
extern s32 func_001520C0(void);
extern s32 *func_008472D0(void);
extern s32 func_0084E830(void);
extern s32 func_00853B50(s8, s8, s8, s8, s16, s32, s32, s32);

extern char D_008B14CC[];
extern char D_008B14CD[];

s32 func_0084D4F0(void) {
    u64 value;
    s64 value2;
    s32 value3;
    unsigned short value4;
    value = ((u64)(((s64)(*((u8 *)D_008B14CC))) << 0x3B)) >> 0x3F;
    if (func_001520C0() == 0) {
        value4 = 0x11;
        if (value == 0) {
            if (func_0013B660() == 0) {
                if (func_0084E830() == 0) {
                    value2 = (s64)(*((u8 *)D_008B14CD));
                    value2 = value2 << 0x3B;
                    if (((((u64)(((s64)(*((u8 *)D_008B14CD))) << 0x3A)) >> 0x3F) == 0) &&
                        ((((u64)value2) >> 0x3F) == 0)) {
                        value3 = 0;
                    } else {
                        value3 = 1;
                    }
                    if (value3 != 0) {
                        goto finish;
                    }
                } else {
                finish:
                    func_00853B50(1, value4, 1, 0, *func_008472D0(), 0, 0, 0);
                }
            }
        }
        return 0;
    }
    if (value != 0) {
        func_00853B50(1, 0x11, 2, 0, *func_008472D0(), 0, 0, 0);
    }
    return 1;
}
