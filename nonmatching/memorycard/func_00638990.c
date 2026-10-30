/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00638A30(M2C_UNK, s16 *);              /* extern */
extern char D_0065C2B0[];
extern char D_0065D0C0[];
extern char D_0065D0C2[];
extern char D_0065D0C8[];
extern char D_0065D0C9[];
extern char D_0065D0CA[];
extern char D_0065D0CD[];
extern char D_0065D0CE[];

void func_00638990(void) {
    u32 var_v1;

    (*(s16 *)D_0065D0C0) = 0;
    (*(s8 *)D_0065D0CD) = 0;
    (*(s16 *)D_0065D0C2) = 0;
    (*(s8 *)D_0065D0C8) = 0;
    var_v1 = 0;
    (*(s8 *)D_0065D0C9) = 0;
    (*(s8 *)D_0065D0CA) = 1;
    (*(s8 *)D_0065D0CE) = 0;
    do {
        M2C_FIELD((((void *)D_0065D0C0) + var_v1), s8 *, 0xF) = 0;
        var_v1 += 1;
    } while (var_v1 < 8U);
    func_00638A30(0, ((void *)D_0065D0C0));
    M2C_FIELD(((void *)D_0065C2B0), s8 *, 0x12) = 0;
    M2C_FIELD(((void *)D_0065C2B0), s8 *, 0x11) = 5;
}
