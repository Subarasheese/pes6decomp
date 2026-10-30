/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF250(void *, void *);
extern void func_001DF370(void *, s32);
void *func_008C13D0(s32, M2C_UNK, s32);             /* extern */
M2C_UNK func_008C59B0(void *, s8 *);                /* extern */
M2C_UNK func_008D3040();                            /* extern */
M2C_UNK func_008D32D0(void *, M2C_UNK);             /* extern */
extern char D_008EC190[];
extern char D_008EC194[];

void func_008D3490(void *arg0, s8 *arg1, s32 arg2, s32 arg3) {
    f32 sp50;
    f32 sp54;
    s8 sp5C;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v0;

    sp50 = (*(f32 *)D_008EC190);
    sp54 = (*(f32 *)D_008EC194);
    if ((arg0 != NULL) && ((func_008D3040(), func_008D32D0(arg0, 0xFF), (arg1 != NULL)) || (arg2 != 0))) {
        var_v1 = &sp5C;
        var_v0 = 2;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        if (arg1 != NULL) {
            func_008C59B0(arg0 + 0xB8, arg1);
        } else {
            func_008C59B0(arg0 + 0xB8, &sp5C);
        }
        if (arg2 != 0) {
            temp_v0 = func_008C13D0(M2C_FIELD(arg0, s32 *, 0x4C), 0x2F, arg2);
            M2C_FIELD(arg0, void **, 0x58) = temp_v0;
            if (temp_v0 != NULL) {
                func_001DF370(M2C_FIELD(temp_v0, void **, 0xC), arg3);
                func_001DF250(M2C_FIELD(M2C_FIELD(arg0, void **, 0x58), void **, 0xC), &sp50);
            }
        }
    }
}
