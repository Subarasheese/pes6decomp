/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern void func_001EDA30(void *, s32);
extern void * func_001B5350(s32, s32, void *, s32, f32, f32);
extern char D_00AFFAA0[];
extern char D_00AFFAB0[];
extern void *D_00B02B90;
extern void *D_00B02B94;

void func_00AEE430(void) {
    void *temp_s0;
    void *var_a1;

    temp_s0 = D_00B02B90;
    var_a1 = NULL;
    if (temp_s0 != NULL) {
        func_001EDA30(temp_s0, 1);
        var_a1 = func_001B5350((s32) ((void *)D_00AFFAA0), (s32) ((void *)D_00AFFAB0), temp_s0, func_001E6E10(0x501C), 0.0f, 0.0f);
    }
    D_00B02B90 = temp_s0;
    D_00B02B94 = var_a1;
}
