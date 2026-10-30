/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
extern void func_002F4E10(void *);
extern void func_001BC360(void);
M2C_UNK func_002F62E0(s32);                         /* extern */
M2C_UNK func_00802E90();                            /* extern */
M2C_UNK func_008048C0();                            /* extern */
M2C_UNK func_00804910();                            /* extern */
M2C_UNK func_00CE41E0();                            /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB33C;

void func_00CF4AC0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;

    temp_v0 = func_002631D0();
    if ((temp_v0 != 6) && (temp_v0 != 5)) {
        temp_s0 = D_003E7E1C + 0x190;
        if (temp_s0 != NULL) {
            func_002F4E10(M2C_FIELD(D_003E7E1C, void **, 0x190));
            D_003EB33C = 0;
            M2C_FIELD(D_003E7E1C, void **, 0x190) = NULL;
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x128);
            if (temp_a0 != 0) {
                func_002F62E0(temp_a0);
                M2C_FIELD(temp_s0, s32 *, 0x128) = 0;
                func_001BC360();
                func_001BC360();
            }
        }
    } else {
        temp_s0_2 = D_003E7E1C + 0x190;
        if (temp_s0_2 != NULL) {
            func_002F4E10(M2C_FIELD(D_003E7E1C, void **, 0x190));
            D_003EB33C = 0;
            M2C_FIELD(D_003E7E1C, void **, 0x190) = NULL;
            temp_a0_2 = M2C_FIELD(temp_s0_2, s32 *, 0x128);
            if (temp_a0_2 != 0) {
                func_002F62E0(temp_a0_2);
                M2C_FIELD(temp_s0_2, s32 *, 0x128) = 0;
                func_001BC360();
                func_001BC360();
            }
        }
        func_00804910();
        func_008048C0();
        func_00802E90();
    }
    func_00CE41E0();
}
