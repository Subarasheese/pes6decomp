/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF460(void *, void *);
extern char D_003AB520[];

void func_00C74BF0(void *arg0, s8 arg1) {
    void *temp_v1;

    if (arg0 != NULL) {
        temp_v1 = M2C_FIELD(arg0, void **, 0);
        if (temp_v1 != NULL) {
            func_001DF460(M2C_FIELD(temp_v1, void **, 0xC), ((void *)D_003AB520) + (arg1 * 4));
            M2C_FIELD(arg0, s8 *, 7) = arg1;
        }
    }
}
