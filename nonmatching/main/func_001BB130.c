/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BB450(void *);
extern void func_001BB4B0(void *, s32);
extern void func_001BB490(void *, s32);
extern void func_001BB470(void *);
void func_001BB130(M2C_UNK *arg0, M2C_UNK *arg1) {
    M2C_UNK *temp_s2;
    M2C_UNK *temp_s3;
    M2C_UNK *temp_v1_2;
    void *temp_v1;

    if (arg1 != NULL) {
        temp_v1 = M2C_FIELD(arg1, void **, 0xC);
        if ((temp_v1 != NULL) && (arg1 != NULL) && (temp_v1 != NULL)) {
            temp_s3 = M2C_FIELD(arg1, M2C_UNK **, 0);
            temp_s2 = M2C_FIELD(arg1, M2C_UNK **, 4);
            if (temp_s3 != NULL) {
                M2C_FIELD(temp_s3, M2C_UNK **, 4) = temp_s2;
            }
            if (temp_s2 != NULL) {
                *temp_s2 = temp_s3;
            }
            if (temp_s3 == NULL) {
                func_001BB490(M2C_FIELD(arg1, void **, 0xC), (s32) temp_s2);
            }
            if (temp_s2 == NULL) {
                func_001BB4B0(M2C_FIELD(arg1, void **, 0xC), (s32) temp_s3);
            }
            func_001BB450(M2C_FIELD(arg1, void **, 0xC));
            if (arg1 != NULL) {
                M2C_FIELD(arg1, M2C_UNK **, 4) = NULL;
                M2C_FIELD(arg1, M2C_UNK **, 0) = NULL;
                M2C_FIELD(arg1, void **, 0xC) = NULL;
            }
        }
    }
    if ((arg0 != NULL) && (M2C_FIELD(arg0, void **, 0xC) != NULL)) {
        temp_v1_2 = M2C_FIELD(arg0, M2C_UNK **, 4);
        M2C_FIELD(arg0, M2C_UNK **, 4) = arg1;
        if (temp_v1_2 != NULL) {
            *temp_v1_2 = arg1;
        }
        if ((arg1 != NULL) && (arg1 != NULL)) {
            M2C_FIELD(arg1, M2C_UNK **, 4) = temp_v1_2;
            M2C_FIELD(arg1, M2C_UNK **, 0) = arg0;
            M2C_FIELD(arg1, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 0xC);
        }
        if (temp_v1_2 == NULL) {
            func_001BB4B0(M2C_FIELD(arg0, void **, 0xC), (s32) arg1);
        }
        func_001BB470(M2C_FIELD(arg0, void **, 0xC));
    }
}
