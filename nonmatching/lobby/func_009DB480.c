/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern void func_001D7D60(void *, s8);
M2C_UNK func_0099D2A0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0099D490(s32, s32);                    /* extern */
M2C_UNK func_0099D550(s32, M2C_UNK);                /* extern */
M2C_UNK func_0099D730(s32, s32);                    /* extern */
extern char D_00A03140[];

void func_009DB480(void *arg0, void *arg1) {
    s8 *var_a1;
    void *temp_v1;

    if (arg1 == NULL) {
        func_001D7D60(M2C_FIELD(arg0, void **, 0), 0);
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 4), 0);
        func_0099D550(M2C_FIELD(arg0, s32 *, 8), 0);
        return;
    }
    func_001D7D60(M2C_FIELD(arg0, void **, 0), 1);
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 4), 1);
        func_0099D490(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg1, s32 *, 4));
    } else {
        func_0099D2A0(M2C_FIELD(arg0, s32 *, 4), 0);
    }
    func_0099D550(M2C_FIELD(arg0, s32 *, 8), 1);
    func_0099D730(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg1, s32 *, 8));
    temp_v1 = M2C_FIELD(arg0, void **, 0xC);
    var_a1 = M2C_FIELD(arg1, s8 **, 0);
    if (temp_v1 != NULL) {
        if ((var_a1 == NULL) || (*var_a1 == 0)) {
            var_a1 = ((void *)D_00A03140);
        }
        func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a1);
    }
}
