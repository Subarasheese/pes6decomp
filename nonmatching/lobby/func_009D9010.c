/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009DD6B0(s32, s32);
u8 func_009651F0();                                 /* extern */
M2C_UNK func_0099C730(M2C_UNK);                     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009DD350(M2C_UNK);                     /* extern */
extern void *D_00A7DEA8;
extern M2C_UNK func_009D8A20;

void func_009D9010(void) {
    void *temp_v0;

    if (D_00A7DEA8 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A7DEA8 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(D_00A7DEA8, u8 *, 2) = func_009651F0();
            func_009DD6B0((s32) M2C_FIELD(D_00A7DEA8, u8 *, 2), (s32) &func_009D8A20);
            func_009DD350(1);
            func_0099C730(0x01FC0004);
        }
    }
}
