/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
void *func_00838B10();                              /* extern */
M2C_UNK func_00842660(s8);                          /* extern */
M2C_UNK func_00842670(u8);                          /* extern */
M2C_UNK func_00842680(u8);                          /* extern */
M2C_UNK func_00842690(u8);                          /* extern */
M2C_UNK func_008426A0(s8);                          /* extern */
M2C_UNK func_008426B0(s8);                          /* extern */
M2C_UNK func_008426C0(s8);                          /* extern */
M2C_UNK func_008426D0(s8);                          /* extern */
M2C_UNK func_008426E0(s8);                          /* extern */
M2C_UNK func_008426F0(s8);                          /* extern */
M2C_UNK func_00842700(s8);                          /* extern */
M2C_UNK func_00842710(s8);                          /* extern */
M2C_UNK func_00842720(s8);                          /* extern */
M2C_UNK func_00842730(s8);                          /* extern */
M2C_UNK func_00842740(s8);                          /* extern */
M2C_UNK func_00842750(s8);                          /* extern */
M2C_UNK func_00842970(M2C_UNK);                     /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */
extern void *D_008A4398;
extern char D_008A5F70[];

s32 func_00821940(void *arg0) {
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = D_008A4398;
    temp_v0 = func_00838B10();
    if (temp_s1 == NULL) {
        return 1;
    }
    if ((((void *)D_008A5F70) != NULL) && (arg0 != NULL)) {
        if (temp_v0 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0) != 0x103) {
                return 1;
            }
            if (M2C_FIELD(arg0, s32 *, 4) == 0x14) {
                if (M2C_FIELD(temp_v0, s32 *, 0x234) != 1) {
                    temp_s0 = arg0 + 8;
                    func_001C4730(temp_s1 + 0x10118, temp_s0, 0x14);
                    M2C_FIELD(temp_s1, s32 *, 0x10118) = 1;
                    M2C_FIELD(D_008A4398, s8 *, 0x101A3) = (s8) M2C_FIELD(temp_s0, s8 *, 7);
                    func_00842750(M2C_FIELD(temp_s0, s8 *, 4));
                    func_00842740(M2C_FIELD(temp_s0, s8 *, 5));
                    func_00842730(M2C_FIELD(temp_s0, s8 *, 6));
                    func_00842720(M2C_FIELD(temp_s0, s8 *, 7));
                    func_00842710(M2C_FIELD(temp_s0, s8 *, 8));
                    func_00842700(M2C_FIELD(temp_s0, s8 *, 9));
                    func_008426F0(M2C_FIELD(temp_s0, s8 *, 0xA));
                    func_008426E0(M2C_FIELD(temp_s0, s8 *, 0xB));
                    func_008426D0(M2C_FIELD(temp_s0, s8 *, 0xC));
                    func_008426C0(M2C_FIELD(temp_s0, s8 *, 0xD));
                    func_008426B0(M2C_FIELD(temp_s0, s8 *, 0xF));
                    func_008426A0(M2C_FIELD(temp_s0, s8 *, 0xE));
                    func_00842690(M2C_FIELD(temp_s0, u8 *, 0x10));
                    func_00842680(M2C_FIELD(temp_s0, u8 *, 0x12));
                    func_00842670(M2C_FIELD(temp_s0, u8 *, 0x11));
                    func_00842660(M2C_FIELD(temp_s0, s8 *, 0x13));
                    func_00842970(1);
                    func_008429F0(1);
                }
                return 4;
            }
            return 1;
        }
        goto block_8;
    }
block_8:
    return 1;
}
