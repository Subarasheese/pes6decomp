/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_0082ABC0(s16, s32 *, s32 *);               /* extern */
void *func_0082C2A0();                              /* extern */
extern char D_008A6490[];
extern char D_008A6494[];
extern char D_008A94DE[];
extern char D_008A94E0[];
extern char D_008A94E4[];
extern char D_008A94EC[];

s32 func_00935D70(void) {
    s32 sp28;
    s32 sp2C;
    void *temp_s0;

    sp2C = 9;
    sp28 = (*(s32 *)D_008A94EC);
    temp_s0 = func_0082C2A0();
    if (func_0082ABC0((*(s16 *)D_008A94DE), &sp2C, &sp28) == 4) {
        if (sp2C != 3) {
            return 0;
        }
        if (sp28 != (*(s32 *)D_008A6490)) {
            return 0;
        }
        if (func_00825610() != 4) {
            return 0;
        }
        if ((*(u8 *)D_008A94E0) != (*(s32 *)D_008A6494)) {
            return 0;
        }
        if (temp_s0 != NULL) {
            return M2C_FIELD(temp_s0, s32 *, 0xF8A0) == (*(s32 *)D_008A94E4);
        }
        return 0;
    }
    return 0;
}
