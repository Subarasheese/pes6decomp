/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
void func_0017F4D0(void *arg0, s32 arg1) {
    void *temp_a2;
    void *temp_v1;

    if ((arg0 != NULL) && (temp_v1 = (arg1 * 4) + arg0, temp_a2 = M2C_FIELD(temp_v1, void **, 0x60), (temp_a2 != NULL))) {
        switch (arg1) {                             /* irregular */
        case 1:
            if (!(M2C_FIELD(arg0, s32 *, 0x58) & 0x02000000)) {
                func_00153FA0(temp_a2);
block_13:
                M2C_FIELD(temp_v1, void **, 0x60) = NULL;
            }
            break;
        case 0:
            if (!(M2C_FIELD(arg0, s32 *, 0x58) & 0x01000000)) {
                func_00153FA0(temp_a2);
                goto block_13;
            }
            break;
        }
    }
}
