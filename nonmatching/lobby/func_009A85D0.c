/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B9A50(void *, s32);
M2C_UNK func_002DB580(s32, s32);                    /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */

void func_009A85D0(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 *arg4, s64 arg5) {
    s32 var_s0;
    void *var_s4;

    var_s4 = arg2;
    if (arg0 != NULL) {
        func_001B9A50(arg0, arg5 & 0xFF);
    }
    if (arg1 != 0) {
        func_002DB580(arg1, arg5 & 0xFF);
    }
    if (var_s4 != NULL) {
        var_s0 = 0;
        if (arg3 > 0) {
            do {
                if (var_s4 != NULL) {
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x20), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x3C), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x38), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x48), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x70), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x74), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x74), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x78), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x7C), (s64) (arg5 << 0x38) >> 0x38);
                    func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x44), (s64) (arg5 << 0x38) >> 0x38);
                }
                var_s0 += 1;
                var_s4 += 0x80;
            } while (var_s0 < arg3);
        }
    }
    if ((arg4 != NULL) && (arg4 != NULL)) {
        func_002DF8E0(*arg4, arg5 & 0xFF);
    }
}
