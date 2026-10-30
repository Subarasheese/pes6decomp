/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209540(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_00A02030(void *);                      /* extern */
M2C_UNK func_00C1EE80();                            /* extern */
extern char D_00591E19[];
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_005926DF[];

void func_00AB5BC0(void *arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x26);
    M2C_FIELD(arg0, u16 *, 0x42) = temp_v1;
    M2C_FIELD(arg0, u16 *, 0x28) = temp_v1;
    if (M2C_FIELD(arg0, u16 *, 0x1A) == 0xFF) {
        if ((M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E4C)) && (M2C_FIELD(arg0, u8 *, 0x10) == 0)) {
            func_00C1EE80();
            return;
        }
        func_00208610(M2C_FIELD(arg0, void **, 4));
        if ((*(s32 *)D_00591E7C) == 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 4);
            if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0) {
                func_00207390(temp_a0, 4);
                M2C_FIELD(arg0, s8 *, 0x16) = 0;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
                return;
            }
        }
        func_00209540(M2C_FIELD(arg0, void **, 4), 0x22A, arg1);
        M2C_FIELD(arg0, u8 *, 0x62) = (u8) (*(u8 *)D_005926DF);
        if (M2C_FIELD(arg0, u8 *, 0) != (*(u8 *)D_00591E19)) {
            M2C_FIELD(arg0, s8 *, 0x16) = 1;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x16) = 0x13;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
        }
        goto block_5;
    }
    func_00209540(M2C_FIELD(arg0, void **, 4), 0x22A, arg1);
    func_00A02030(arg0);
block_5:
    func_00207390(M2C_FIELD(arg0, void **, 4), 6);
}
