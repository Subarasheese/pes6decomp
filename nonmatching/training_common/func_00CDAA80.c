/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_00CDB5C0(void *, s32, s32, s32, s32, s32, s32, s32); /* extern */
extern void *D_003EB270;
extern void *D_003EB274;

void *func_00CDAA80(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 var_a0;
    void *temp_v0;

    temp_v0 = func_00154060(1, 0xB8);
    if (temp_v0 != NULL) {
        func_00CDB5C0(temp_v0, arg0, arg1, arg2, arg3, arg4, arg5, arg6);
        if (D_003EB270 == NULL) {
            M2C_FIELD(temp_v0, void **, 0xB0) = NULL;
            M2C_FIELD(temp_v0, void **, 0xB4) = NULL;
            D_003EB274 = temp_v0;
            D_003EB270 = temp_v0;
            return temp_v0;
        }
        if (D_003EB270 == NULL) {
            var_a0 = 0;
        } else if (temp_v0 != NULL) {
            var_a0 = 1;
            M2C_FIELD(temp_v0, void **, 0xB0) = (void *) M2C_FIELD(D_003EB270, void **, 0xB0);
            M2C_FIELD(temp_v0, void **, 0xB4) = (void *) D_003EB270;
            M2C_FIELD(D_003EB270, void **, 0xB0) = temp_v0;
        } else {
            var_a0 = 0;
        }
        if (var_a0 != 0) {
            D_003EB270 = temp_v0;
        }
        return temp_v0;
    }
    return temp_v0;
}
