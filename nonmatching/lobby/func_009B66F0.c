/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_0099C7F0(M2C_UNK);                       /* extern */
M2C_UNK func_009EB270(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *D_00A7DC08;
extern M2C_UNK func_009B6D40;
extern M2C_UNK func_009B6D50;
extern M2C_UNK func_009B6EE0;
extern M2C_UNK func_009B6FD0;
extern M2C_UNK func_009B7090;
extern M2C_UNK func_009B7150;
extern M2C_UNK func_009B7210;
extern M2C_UNK func_009B7290;
extern M2C_UNK func_009B72A0;

void *func_009B66F0(void *arg0, s32 arg1) {
    void *temp_s0;
    void *temp_v0;

    temp_v0 = func_0099C7F0(0x2FC);
    D_00A7DC08 = temp_v0;
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x2E8) = 0;
    temp_s0 = D_00A7DC08;
    M2C_FIELD(temp_s0, void **, 0x2C) = arg0;
    M2C_FIELD(temp_s0, s32 *, 0x2F4) = 1;
    M2C_FIELD(temp_s0, s32 *, 0x2F8) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0xA;
    M2C_FIELD(arg0, s32 *, 4) = 0xC;
    M2C_FIELD(arg0, s32 *, 8) = 2;
    func_009EB270(temp_s0, 0xC, 0xA, 1);
    M2C_FIELD(temp_s0, void **, 0) = temp_s0;
    M2C_FIELD(temp_s0, M2C_UNK **, 4) = &func_009B7210;
    M2C_FIELD(temp_s0, M2C_UNK **, 8) = &func_009B72A0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0xC) = &func_009B7290;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x10) = &func_009B7150;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x14) = &func_009B7090;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x20) = &func_009B6FD0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x18) = &func_009B6EE0;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x24) = &func_009B6D50;
    M2C_FIELD(temp_s0, M2C_UNK **, 0x28) = &func_009B6D40;
    return temp_s0;
}
