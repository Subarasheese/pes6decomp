/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
M2C_UNK func_001EEE60(void *, u8 *);                /* extern */
M2C_UNK func_002E3CD0(void *, s32, M2C_UNK);        /* extern */
extern u8 D_003E7630;
extern u8 D_003E7631;
extern u8 D_003E7632;
extern u8 D_003E7633;

void func_002E3AD0(void *arg0, void **arg1) {
    u8 sp3C;
    u8 sp3D;
    u8 sp3E;
    u8 sp3F;
    s8 temp_s1;

    M2C_FIELD(arg0, void ***, 0) = arg1;
    M2C_FIELD(arg0, void **, 8) = func_001EDD00(*arg1);
    sp3E = D_003E7632;
    sp3C = D_003E7630;
    sp3D = D_003E7631;
    sp3F = D_003E7633;
    if (arg0 != NULL) {
        func_001EEE60(M2C_FIELD(arg0, void **, 8), &sp3C);
    }
    M2C_FIELD(arg0, void **, 4) = func_001EDD00(M2C_FIELD(M2C_FIELD(arg0, void ***, 0), void **, 0));
    M2C_FIELD(arg0, u8 *, 0x10) = 1U;
    M2C_FIELD(arg0, u8 *, 0x11) = 1U;
    M2C_FIELD(arg0, u8 *, 0x12) = 0U;
    temp_s1 = M2C_FIELD(arg0, u8 *, 0x10) & M2C_FIELD(arg0, u8 *, 0x11) & 0xFF;
    func_001EF900(M2C_FIELD(arg0, void **, 4), temp_s1);
    func_001EF900(M2C_FIELD(arg0, void **, 8), temp_s1 & 0xFF & M2C_FIELD(arg0, u8 *, 0x12) & 0xFF);
    func_002E3CD0(arg0, M2C_FIELD(M2C_FIELD(arg0, void ***, 0), s32 *, 8), 0x6A);
}
