/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];


M2C_UNK func_001A3940();                            /* extern */
M2C_UNK func_001A3AC0();                            /* extern */
M2C_UNK func_001A3C90();                            /* extern */
extern char D_005203B0[];
extern s128 *D_005203B4;
extern char D_00520560[];
extern char D_00520570[];

void func_001A4150(void) {
    s128 *var_a0;
    s128 *var_a1;
    s32 var_v1;
    u32 temp_v1;

    func_001A3C90();
    func_001A3AC0();
    if ((*(s32 *)D_00520560) != 0) {
        temp_v1 = (*(u32 *)D_005203B0) + 1;
        (*(u32 *)D_005203B0) = temp_v1;
        if (temp_v1 >= 2U) {
            (*(u32 *)D_005203B0) = 0;
        }
        var_a0 = ((void *)D_00520570);
        var_v1 = 0xD;
        var_a1 = ((void *)D_005203B0) + ((*(u32 *)D_005203B0) * 0xD0) + 0x10;
        D_005203B4 = var_a1;
        do {
            var_v1 -= 1;
            *var_a1 = *var_a0;
            var_a0 += 0x10;
            var_a1 += 0x10;
        } while (var_v1 > 0);
    }
    func_001A3940();
}
