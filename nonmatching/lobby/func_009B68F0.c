/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DB580(s32, s32);                    /* extern */
M2C_UNK func_002DF8E0(s32, s32);                    /* extern */
M2C_UNK func_002E4400(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
M2C_UNK func_0081DF10(s32, s64);                    /* extern */
M2C_UNK func_0099AEB0(s32, s32);                    /* extern */
extern void *D_00A7DC08;

void func_009B68F0(s64 arg0) {
    s32 var_s3;
    void *temp_s0;
    void *var_s2;

    temp_s0 = D_00A7DC08;
    func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x34), (s64) (arg0 << 0x38) >> 0x38);
    if (M2C_FIELD(temp_s0, s32 *, 0x2F0) != 0) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x2C0), (s64) (arg0 << 0x38) >> 0x38);
    } else {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x2C0), 0);
    }
    func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x44), (s64) (arg0 << 0x38) >> 0x38);
    if ((M2C_FIELD(temp_s0, s32 *, 0x2F8) != 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x2C), s32 *, 0x3C) >= 2)) {
        func_002E4400(M2C_FIELD(temp_s0, s32 *, 0x38), arg0 & 0xFF);
    } else {
        func_002E4400(M2C_FIELD(temp_s0, s32 *, 0x38), 0);
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x2E0) < 0x65) {
        func_002E4400(M2C_FIELD(temp_s0, s32 *, 0x48), 0);
    } else {
        func_002E4400(M2C_FIELD(temp_s0, s32 *, 0x48), arg0 & 0xFF);
    }
    if ((M2C_FIELD(temp_s0, s32 *, 0x2F8) != 0) && (M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x2C), s32 *, 0x3C) != 0)) {
        func_0081DF10(M2C_FIELD(temp_s0, s32 *, 0x40), (s64) (arg0 << 0x38) >> 0x38);
    } else {
        func_0081DF10(M2C_FIELD(temp_s0, s32 *, 0x40), 0);
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x2F4) != 0) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x4C), 0);
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x50), 0);
    } else if (M2C_FIELD(temp_s0, s32 *, 0x2F0) != 0) {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x4C), 0);
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x50), (s64) (arg0 << 0x38) >> 0x38);
    } else {
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x4C), (s64) (arg0 << 0x38) >> 0x38);
        func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x50), 0);
    }
    func_0081D7E0(M2C_FIELD(temp_s0, s32 *, 0x5C), (s64) (arg0 << 0x38) >> 0x38);
    var_s3 = 0;
    var_s2 = temp_s0;
    do {
        if (M2C_FIELD(temp_s0, s32 *, 0x2E4) >= var_s3) {
            func_0081D7E0(M2C_FIELD(var_s2, s32 *, 0x84), (s64) (arg0 << 0x38) >> 0x38);
            func_0081D7E0(M2C_FIELD(var_s2, s32 *, 0x88), 0);
        } else {
            func_0081D7E0(M2C_FIELD(var_s2, s32 *, 0x84), 0);
            func_0081D7E0(M2C_FIELD(var_s2, s32 *, 0x88), (s64) (arg0 << 0x38) >> 0x38);
        }
        var_s3 += 1;
        var_s2 += 0x2C;
    } while (var_s3 < 0xC);
    func_0099AEB0(M2C_FIELD(temp_s0, s32 *, 0x2C4), arg0 & 0xFF);
    func_002DB580(M2C_FIELD(temp_s0, s32 *, 0x2C8), arg0 & 0xFF);
    if (M2C_FIELD(temp_s0, s32 *, 0x2E4) == 0) {
        func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0x2CC), 0);
        return;
    }
    func_002DF8E0(M2C_FIELD(temp_s0, s32 *, 0x2CC), arg0 & 0xFF);
}
