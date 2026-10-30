/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
s32 func_00838B10();                                /* extern */
M2C_UNK func_0083E3F0(s32);                         /* extern */
M2C_UNK func_00842970(M2C_UNK);                     /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */
extern char D_008A4398[];
extern char D_008A5F70[];

s32 func_00821AC0(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s2;
    void *temp_a0;

    temp_s1 = (*(s32 *)D_008A4398);
    temp_s0 = func_00838B10();
    if (temp_s1 != 0) {
        if (((void *)D_008A5F70) == NULL) {
            return 1;
        }
        if (arg0 != NULL) {
            if (temp_s0 != 0) {
                if (M2C_FIELD(arg0, s32 *, 0) != 0x101) {
                    return 1;
                }
                if (M2C_FIELD(arg0, s32 *, 4) == 0x10) {
                    var_s2 = 0;
                    do {
                        temp_a0 = temp_s1 + (var_s2 * 0x10);
                        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
                        if ((temp_v1 == M2C_FIELD(temp_a0, s32 *, 0x10064)) && (temp_v1 != 0) && (M2C_FIELD((temp_s0 + (var_s2 * 0x88)), s8 *, 0x85) != 1)) {
                            func_001C4730(temp_a0 + 0x10064, arg0 + 8, 0x10);
                        }
                        var_s2 += 1;
                    } while (var_s2 < 4);
                    func_0083E3F0(temp_s1 + 0xF8A4);
                    func_00842970(1);
                    func_008429F0(1);
                    return 4;
                }
                return 1;
            }
            goto block_8;
        }
        goto block_8;
    }
block_8:
    return 1;
}
