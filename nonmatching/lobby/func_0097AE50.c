/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009C23E0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2420(M2C_UNK);                     /* extern */
M2C_UNK func_009C2460(M2C_UNK);                     /* extern */
M2C_UNK func_009C2490(M2C_UNK);                     /* extern */
M2C_UNK func_009C24C0(M2C_UNK);                     /* extern */
M2C_UNK func_009C24F0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2540(M2C_UNK);                     /* extern */
M2C_UNK func_009C2A70(void *);                      /* extern */
M2C_UNK func_009C2B60(M2C_UNK);                     /* extern */
M2C_UNK func_009C2DD0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009C2E10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009C2FF0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_009C3180(M2C_UNK);                     /* extern */
extern void *D_00A68D90;

void func_0097AE50(void) {
    M2C_UNK var_a0;

    func_009C3180(2);
    func_009C2B60(0);
    func_009C2FF0(0, 0x01F70088);
    func_009C2E10(0, 1);
    func_009C2FF0(1, 0x01F70044);
    func_009C2E10(1, 2);
    func_009C2DD0(0, 0x01F70043);
    func_009C2DD0(1, 0x01F70002);
    func_009C2DD0(2, 0x01F70042);
    func_009C24F0(2);
    func_009C2460(0);
    func_009C2490(0);
    func_009C2420(0x30);
    func_009C23E0(0x30);
    func_009C24C0(0x80);
    func_009C2A70(D_00A68D90);
    var_a0 = 1;
    if (M2C_FIELD(D_00A68D90, s32 *, 0x34) == 1) {
        var_a0 = 0;
    }
    func_009C2540(var_a0);
}
