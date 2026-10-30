/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CADF0(void);
extern void func_001B4D20(void *);
extern void func_0035A690(void);
extern void func_00366300(void);
M2C_UNK func_00366350();                            /* extern */
extern char D_003E64A0[];
extern char D_0061C734[];
extern void *D_0061C73C;

void func_0035A290(void) {
    M2C_UNK (*temp_v0_2)();
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;

    func_00366350();
    func_00366300();
    var_s1 = 0;
    do {
        temp_s0 = 1 << var_s1;
        temp_v0 = (*(s32 *)D_0061C734) & temp_s0;
        if ((temp_v0 != 0) && (temp_v0 != 0)) {
            temp_v0_2 = M2C_FIELD((((void *)D_003E64A0) + (var_s1 * 0xC)), M2C_UNK (**)(), 8);
            if (temp_v0_2 != NULL) {
                temp_v0_2();
            }
            (*(s32 *)D_0061C734) = ((*(s32 *)D_0061C734) | temp_s0) ^ temp_s0;
        }
        var_s1 += 1;
    } while (var_s1 < 0x10);
    if (D_0061C73C != NULL) {
        func_001B4D20(D_0061C73C);
        D_0061C73C = NULL;
    }
    func_0035A690();
    func_002CADF0();
}
