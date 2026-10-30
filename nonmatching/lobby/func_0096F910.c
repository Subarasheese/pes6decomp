/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_001F08B0(M2C_UNK);                         /* extern */
void *func_00969AF0();                              /* extern */
M2C_UNK func_009717C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
M2C_UNK func_0099C760();                            /* extern */
M2C_UNK func_009B1A60(M2C_UNK);                     /* extern */
M2C_UNK func_009B40A0(M2C_UNK);                     /* extern */
M2C_UNK func_009C23E0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2460(M2C_UNK);                     /* extern */
M2C_UNK func_009C2490(M2C_UNK);                     /* extern */
M2C_UNK func_009C24F0(M2C_UNK);                     /* extern */
M2C_UNK func_009C2DC0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C2ED0(M2C_UNK, s32);                /* extern */
M2C_UNK func_009C3180(M2C_UNK);                     /* extern */

void func_0096F910(void) {
    void *temp_s0;

    temp_s0 = func_00969AF0();
    func_0099C760();
    func_0099C730(0x020C0009);
    M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x14) = 1;
    func_001C48E8(temp_s0 + 0x2C, 0, 0x101);
    func_009B40A0(0);
    func_009B1A60(0);
    func_009C3180(2);
    func_009C2ED0(0, func_001F08B0(0x01F70088));
    func_009C2ED0(1, func_001F08B0(0x01F70044));
    func_009C2DC0(0, func_001F08B0(0x01F70043));
    func_009C2DC0(1, func_001F08B0(0x020C0006));
    func_009C2DC0(2, func_001F08B0(0x01F7006B));
    func_009C24F0(2);
    func_009C2490(0);
    func_009C2460(0);
    func_009C23E0(0x30);
    func_009717C0(1);
}
