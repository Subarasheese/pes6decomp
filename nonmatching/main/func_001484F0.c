/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001299A0(void);
extern void *D_0050AD90;
extern char D_0050AD94[];
extern char D_0050AD98[];
extern char D_0050AD99[];

void func_001484F0(void) {
    M2C_UNK (*temp_v0)(s32, s32, s32);
    void *temp_s0;
    void *var_s1;

    var_s1 = D_0050AD90;
    if (var_s1 != NULL) {
        do {
            temp_v0 = M2C_FIELD(var_s1, M2C_UNK (**)(s32, s32, s32), 0xC);
            temp_s0 = M2C_FIELD(var_s1, void **, 0);
            if (temp_v0 != NULL) {
                temp_v0(M2C_FIELD(var_s1, s32 *, 4), M2C_FIELD(var_s1, s32 *, 8), M2C_FIELD(var_s1, s32 *, 0x10));
            }
            if (M2C_FIELD(var_s1, s32 *, 0x10) != 0) {
                func_001299A0();
            }
            func_001299A0();
            func_001299A0();
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
        D_0050AD90 = NULL;
        (*(s32 *)D_0050AD94) = 0;
        (*(s8 *)D_0050AD98) = 0;
        (*(s8 *)D_0050AD99) = 0;
    }
}
