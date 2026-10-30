/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
extern s32 D_003EA864;
extern s32 D_003EA868;
extern char D_00CCBFE0[];
extern char D_00CCC010[];

void func_00C7D750(s32 arg0) {
    void *temp_a2;

    if (arg0 == 0) {
        D_003EA864 = 0;
        if ((D_003EA868 != 0) && ((*(u8 *)D_00CCC010) & 1)) {
            func_002F9110();
            temp_a2 = ((void *)D_00CCBFE0) + (D_003EA864 * 0x54);
            M2C_FIELD(temp_a2, s32 *, 0) = 0;
            M2C_FIELD(temp_a2, u8 *, 0x30) = (u8) ((M2C_FIELD(temp_a2, u8 *, 0x30) & ~1) | (0 & 1));
        }
    }
}
