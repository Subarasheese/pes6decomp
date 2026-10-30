/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BB450(void *);
extern void func_001BB490(void *, s32);
extern void func_001BB4B0(void *, s32);
void func_001BB080(void *arg0) {
    void **temp_s0;
    void *temp_s1;

    if ((arg0 != NULL) && (M2C_FIELD(arg0, void **, 0xC) != NULL)) {
        temp_s1 = M2C_FIELD(arg0, void **, 0);
        temp_s0 = M2C_FIELD(arg0, void ***, 4);
        if (temp_s1 != NULL) {
            M2C_FIELD(temp_s1, void ***, 4) = temp_s0;
        }
        if (temp_s0 != NULL) {
            *temp_s0 = temp_s1;
        }
        if (temp_s1 == NULL) {
            func_001BB490(M2C_FIELD(arg0, void **, 0xC), (s32) temp_s0);
        }
        if (temp_s0 == NULL) {
            func_001BB4B0(M2C_FIELD(arg0, void **, 0xC), (s32) temp_s1);
        }
        func_001BB450(M2C_FIELD(arg0, void **, 0xC));
        if (arg0 != NULL) {
            M2C_FIELD(arg0, void ***, 4) = NULL;
            M2C_FIELD(arg0, void **, 0) = NULL;
            M2C_FIELD(arg0, void **, 0xC) = NULL;
        }
    }
}
