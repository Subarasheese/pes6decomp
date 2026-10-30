/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
extern u8 func_00BF6270(void);
M2C_UNK func_002075B0(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
void **func_00B2A420(u8);                           /* extern */
M2C_UNK func_00B2ACF0(void *);                      /* extern */

void func_00B6BF70(void *arg0) {
    void **temp_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a3;
    void *temp_a3_2;

    temp_s0 = func_00B2A420(func_00BF6270());
    func_00B2ACF0(arg0);
    func_00209820();
    func_00207BE0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
    temp_a0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x48D) {
        if (func_00207D10(temp_a0) != 0) {
            func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0x59A, 0);
        }
    }
    temp_a0_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if ((M2C_FIELD(temp_a0_2, u16 *, 0x30) == 0x40C) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) == 0x59B)) {
        temp_a3 = M2C_FIELD(*temp_s0, void **, 4);
        if ((M2C_FIELD(temp_a3, u16 *, 0x30) == 0x59A) && !(M2C_FIELD(temp_a3, f32 *, 0x38) < 8.0f)) {
            func_002075B0(temp_a0_2, 0x59B, 0, 8);
        }
    }
    temp_a0_3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4);
    if ((M2C_FIELD(temp_a0_3, u16 *, 0x30) == 0x40C) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) == 0x59C)) {
        temp_a3_2 = M2C_FIELD(*temp_s0, void **, 4);
        if ((M2C_FIELD(temp_a3_2, u16 *, 0x30) == 0x59A) && !(M2C_FIELD(temp_a3_2, f32 *, 0x38) < 44.0f)) {
            func_002075B0(temp_a0_3, 0x59C, 0, 8);
        }
    }
}
