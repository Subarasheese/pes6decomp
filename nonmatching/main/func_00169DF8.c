/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00164660(int);
s32 func_00169DF8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_a0;

    if (arg0 != NULL) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_v0 == 0) {
            temp_a0 = M2C_FIELD(arg0, void **, 0x94);
            if (temp_a0 != NULL) {
                temp_v0_2 = M2C_FIELD(temp_a0, s32 *, 0x28);
                if (temp_v0_2 != 0) {
                    return func_00164660(temp_v0_2);
                }
                return 0;
            }
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return 0;
        }
        return func_00164660(temp_v0);
    }
    return 0;
}
