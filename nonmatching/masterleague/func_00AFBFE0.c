/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_002293F0();                              /* extern */
M2C_UNK func_002386F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00238740(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_002387A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00239040(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0099AF70();                            /* extern */
M2C_UNK func_00AFB8C0();                            /* extern */
M2C_UNK func_00AFBB40();                            /* extern */
extern void *D_003E77B0;

void func_00AFBFE0(void) {
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_002293F0();
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, u8 *, 0x1364) = 0x71U;
        M2C_FIELD(temp_v0, u8 *, 0x1365) = (u8) M2C_FIELD(temp_v0, u8 *, 0x1364);
    }
    func_002387A0(0, 1);
    func_002387A0(1, 1);
    func_002387A0(2, 1);
    func_002387A0(3, 1);
    func_002387A0(4, 1);
    func_002387A0(5, 4);
    func_002387A0(6, 4);
    func_002387A0(7, 1);
    func_00238740(0, 0x10);
    func_00238740(1, 0x10);
    func_00238740(2, 0x10);
    func_00238740(3, 0x10);
    func_00238740(4, 8);
    func_00238740(5, 4);
    func_00238740(6, 4);
    func_00238740(7, 4);
    func_00238740(8, 4);
    func_00238740(9, 4);
    func_00238740(0xA, 4);
    func_00238740(0xB, 4);
    func_00238740(0xC, 4);
    func_00238740(0xD, 9);
    func_002386F0(0, 2);
    func_002386F0(1, 2);
    func_002386F0(2, 2);
    func_002386F0(3, 2);
    func_002386F0(4, 2);
    func_002386F0(5, 2);
    func_002386F0(6, 2);
    func_002386F0(7, 2);
    func_002386F0(8, 2);
    func_002386F0(9, 2);
    func_002386F0(0xA, 2);
    func_002386F0(0xB, 2);
    func_002386F0(0xC, 2);
    func_002386F0(0xD, 1);
    func_00AFBB40();
    func_00AFB8C0();
    var_s0 = 0;
    do {
        func_00239040(0x10, 0, 1);
        var_s0 += 1;
    } while (var_s0 < 4);
    func_00239040(8, 0, 1);
    func_00239040(0x10, 0, 1);
    func_00239040(8, 0, 1);
    func_0099AF70();
    M2C_FIELD(D_003E77B0, u8 *, 0x24) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x24) & ~0x20) | 0x20);
    M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x25) & ~8) | 8);
    M2C_FIELD(D_003E77B0, u8 *, 0x25) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0x25) & ~0x10) | ((0 & 1) * 0x10));
}
