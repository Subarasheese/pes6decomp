/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_002075B0(void *, s32, s32, s32);
extern void func_00207BE0(void *);
extern void ** func_00B2A420(u8);
extern void func_00B2ACF0(void **);
extern s32 func_00BB1310(s32);

void func_00B56180(s32 arg0) {
    s32 temp_a1;
    void **temp_s0;
    void *temp_a0;

    temp_s0 = func_00B2A420(0U);
    func_00B2ACF0((void **) arg0);
    func_00207BE0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E) == 0xD2) {
        if ((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30) == 0x406) && !(M2C_FIELD(M2C_FIELD(*temp_s0, void **, 4), f32 *, 0x38) < 76.0f)) {
            func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xD2) & 0xFFFF, 0, 8);
        }
    } else {
        temp_a1 = func_00BB1310(0x6F) & 0xFFFF;
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u16 *, 0x30) == 0x48E) {
            temp_a0 = M2C_FIELD(*temp_s0, void **, 4);
            if ((M2C_FIELD(temp_a0, u16 *, 0x30) == temp_a1) && !(M2C_FIELD(temp_a0, f32 *, 0x38) < 16.0f)) {
                func_002075B0(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), func_00BB1310(0xD3) & 0xFFFF, 0, 8);
            }
        }
    }
}
