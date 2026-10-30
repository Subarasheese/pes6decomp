/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern s32 func_001D7980(void *);
extern s32 func_001D7BC0(void *);
s64 func_00AF04A0(s32, M2C_UNK);                    /* extern */
s32 func_00AF0570(s32);                             /* extern */

void func_00AEE8D0(s32 arg0, s64 arg1) {
    s32 var_v0;
    s64 temp_s1;
    s64 temp_v0_2;
    s64 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x2D0) != 0) {
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA0), 0);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA4), 0);
        } else {
            if ((func_001D7980(M2C_FIELD(temp_v0, void **, 0xA0)) & 0xFF) != 1) {
                var_v0 = func_001D7BC0(M2C_FIELD(temp_v0, void **, 0xA4));
            } else {
                var_v0 = func_001D7BC0(M2C_FIELD(temp_v0, void **, 0xA0));
            }
            temp_s1 = (s64) ((s64) var_v0 << 0x30) >> 0x30;
            if (func_00AF0570(arg0) != 1) {
                temp_v1 = (s64) (arg1 << 0x30) >> 0x30;
                temp_v0_2 = (s64) (func_00AF04A0(arg0, 1) << 0x30) >> 0x30;
                if (temp_v1 == 0) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA0), 0);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA4), 1);
                    func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA4), (s16) temp_s1);
                    return;
                }
                if (((s64) (temp_v0_2 << 0x30) >> 0x30) != temp_v1) {
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA0), 1);
                    func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA0), (s16) temp_s1);
                    func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA4), 1);
                    func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA4), (s16) temp_s1);
                    return;
                }
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA0), 1);
                func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA0), (s16) temp_s1);
                func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA4), 0);
                return;
            }
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA0), 1);
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA0), (s16) temp_s1);
            func_001D7D60(M2C_FIELD(temp_v0, void **, 0xA4), 1);
            func_001D7D80(M2C_FIELD(temp_v0, void **, 0xA4), (s16) temp_s1);
        }
    }
}
