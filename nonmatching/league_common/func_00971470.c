/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E4570(void *);
extern void func_001D7F10(void *);
extern void func_001D6E40(void *);
M2C_UNK func_0096DA00(void *);                      /* extern */

void func_00971470(void *arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s0;
    void *temp_s0_2;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, void **, 0xC);
        if ((temp_s0 != NULL) && (M2C_FIELD(arg0, void **, 4) != NULL)) {
            if (temp_s0 != NULL) {
                func_002E4570(M2C_FIELD(temp_s0, void **, 0));
                temp_a0 = M2C_FIELD(temp_s0, void **, 8);
                if (temp_a0 != NULL) {
                    func_001D6E40(temp_a0);
                }
                func_0096DA00(temp_s0);
            }
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
        temp_s0_2 = M2C_FIELD(arg0, void **, 0x10);
        if ((temp_s0_2 != NULL) && (M2C_FIELD(arg0, void **, 8) != NULL)) {
            if (temp_s0_2 != NULL) {
                func_002E4570(M2C_FIELD(temp_s0_2, void **, 0));
                temp_a0_2 = M2C_FIELD(temp_s0_2, void **, 8);
                if (temp_a0_2 != NULL) {
                    func_001D6E40(temp_a0_2);
                }
                func_0096DA00(temp_s0_2);
            }
            M2C_FIELD(arg0, void **, 0x10) = NULL;
        }
        if (M2C_FIELD(arg0, s32 *, 0) != 0) {
            temp_a0_3 = M2C_FIELD(arg0, void **, 4);
            if (temp_a0_3 != NULL) {
                func_001D7F10(temp_a0_3);
            }
            temp_a0_4 = M2C_FIELD(arg0, void **, 8);
            if (temp_a0_4 != NULL) {
                func_001D7F10(temp_a0_4);
            }
            M2C_FIELD(arg0, void **, 4) = NULL;
            M2C_FIELD(arg0, void **, 8) = NULL;
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        func_0096DA00(arg0);
    }
}
