/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207920(void *);
extern s32 func_00207D10(void *);
M2C_UNK func_002084C0(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00A02030(void *);                      /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E19[];
extern char D_00591E4C[];

void func_00B04350(void *arg0) {
    u8 temp_a0;
    void *temp_v1;

    if (func_00207D10(M2C_FIELD(arg0, void **, 4)) != 0) {
        func_002084C0(M2C_FIELD(arg0, void **, 4));
        if (M2C_FIELD(arg0, u16 *, 0x1A) != 0xFF) {
            func_00A02030(arg0);
        } else if (((u32) M2C_FIELD(arg0, u32 *, 0x110) >= 0x24001U) && (M2C_FIELD(arg0, s32 *, 0x1C) < M2C_FIELD(Pes6Ball_Current, s32 *, 0x50))) {
            if (func_00207920(M2C_FIELD(arg0, void **, 4)) >= 0x1389) {
                temp_v1 = M2C_FIELD(arg0, void **, 4);
                M2C_FIELD(temp_v1, u8 *, 0x2D) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x2D) ^ 1);
            }
            func_00209A00(M2C_FIELD(arg0, void **, 4), 0x31, 0);
            M2C_FIELD(arg0, s8 *, 0x16) = 0x19;
            M2C_FIELD(arg0, s16 *, 0x18) = 0;
        } else {
            temp_a0 = M2C_FIELD(arg0, u8 *, 0);
            if (temp_a0 == (*(u8 *)D_00591E4C)) {
                M2C_FIELD(arg0, s8 *, 0x16) = 0x13;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            } else if (temp_a0 != (*(u8 *)D_00591E19)) {
                M2C_FIELD(arg0, s8 *, 0x16) = 0x18;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            } else {
                M2C_FIELD(arg0, s8 *, 0x16) = 1;
                M2C_FIELD(arg0, s16 *, 0x18) = 0;
            }
        }
    }
}
