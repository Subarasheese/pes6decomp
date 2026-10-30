/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002133E0(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */

void func_009A7880(void *arg0) {
    void *temp_a0;
    void *temp_s0;
    void *temp_s2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    if (arg0 != NULL) {
        temp_s0 = M2C_FIELD(arg0, void **, 4);
        if (temp_s0 != NULL) {
            if (temp_s0 != NULL) {
                temp_s2 = M2C_FIELD(temp_s0, void **, 4);
                if (temp_s2 != NULL) {
                    if (temp_s2 != NULL) {
                        temp_a0 = M2C_FIELD(temp_s2, void **, 4);
                        if (temp_a0 != NULL) {
                            func_009A7880(temp_a0);
                            M2C_FIELD(temp_s2, void **, 4) = NULL;
                        }
                        temp_v1 = M2C_FIELD(temp_s2, void **, 0);
                        if ((temp_v1 != NULL) && (temp_s2 == M2C_FIELD(temp_v1, s32 *, 4))) {
                            M2C_FIELD(temp_v1, s32 *, 4) = 0;
                        }
                        if (temp_v1 == NULL) {
                            func_002133E0(0);
                        } else {
                            func_002133E0(M2C_FIELD(temp_s2, s32 *, 8));
                        }
                        func_0096DA00(temp_s2);
                    }
                    M2C_FIELD(temp_s0, void **, 4) = NULL;
                }
                temp_v1_2 = M2C_FIELD(temp_s0, void **, 0);
                if ((temp_v1_2 != NULL) && (temp_s0 == M2C_FIELD(temp_v1_2, s32 *, 4))) {
                    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
                }
                if (temp_v1_2 == NULL) {
                    func_002133E0(0);
                } else {
                    func_002133E0(M2C_FIELD(temp_s0, s32 *, 8));
                }
                func_0096DA00(temp_s0);
            }
            M2C_FIELD(arg0, void **, 4) = NULL;
        }
        temp_v1_3 = M2C_FIELD(arg0, void **, 0);
        if ((temp_v1_3 != NULL) && (arg0 == M2C_FIELD(temp_v1_3, s32 *, 4))) {
            M2C_FIELD(temp_v1_3, s32 *, 4) = 0;
        }
        if (temp_v1_3 == NULL) {
            func_002133E0(0);
        } else {
            func_002133E0(M2C_FIELD(arg0, s32 *, 8));
        }
        func_0096DA00(arg0);
    }
}
