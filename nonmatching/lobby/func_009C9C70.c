/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00815B70(M2C_UNK);                     /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_008210C0(M2C_UNK);                     /* extern */
M2C_UNK func_008247A0(M2C_UNK);                     /* extern */
M2C_UNK func_0083C450();                            /* extern */
M2C_UNK func_0099C590();                            /* extern */
M2C_UNK func_0099C5C0(M2C_UNK);                     /* extern */
M2C_UNK func_009C8CF0();                            /* extern */
M2C_UNK func_009DDC20();                            /* extern */
M2C_UNK func_00D0BF70(M2C_UNK);                     /* extern */
M2C_UNK func_00D10140(M2C_UNK);                     /* extern */
extern char D_008A5F70[];
extern char D_008A5F74[];

s32 func_009C9C70(void) {
    s16 *temp_v0;
    s32 var_a0;

    func_00815B70(0);
    func_00D0BF70(0);
    func_00D10140(2);
    func_0083C450();
    func_008247A0(0);
    func_0099C590();
    func_0099C5C0(0);
    func_00820F10(1);
    func_008210C0(7);
    func_009C8CF0();
    func_009DDC20();
    var_a0 = 3;
    (*(s16 *)D_008A5F74) = 1;
loop_2:
    if (var_a0 < 5) {
        temp_v0 = ((void *)D_008A5F70) + (var_a0 * 2);
        var_a0 += 1;
        *temp_v0 = 0;
        goto loop_2;
    }
    return 0;
}
