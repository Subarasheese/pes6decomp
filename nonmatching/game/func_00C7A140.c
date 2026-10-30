/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F9110(void);
M2C_UNK func_00C6CAA0();                            /* extern */
M2C_UNK func_00C88E50(M2C_UNK);                     /* extern */
extern s32 D_003EA848;
extern char D_00CCBEE0[];
extern char D_00CCBF18[];

void func_00C7A140(void) {
    if (D_003EA848 != 0) {
        if (((u64) ((s64) (*(u8 *)D_00CCBF18) << 0x3D) >> 0x3F) != 0) {
            func_00C6CAA0();
        }
        func_002F9110();
        (*(s32 *)D_00CCBEE0) = 0;
        func_00C88E50(0x10);
        D_003EA848 = 0;
    }
}
