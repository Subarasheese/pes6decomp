/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_002F7F80(s32);                           /* extern */
void *func_00B94840(s32);                           /* extern */
M2C_UNK func_00B98390(M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */
M2C_UNK func_00C1B380(M2C_UNK, s32);                /* extern */
extern char D_00CE3EF1[];
extern char D_00CE3EF2[];
extern char D_00CE3EF4[];
extern char D_00CE3EF5[];
extern char D_00CE3EFB[];
extern char D_00CE3EFE[];
extern char D_00CE4080[];
extern char D_00CE4085[];
extern char D_00CE4086[];
extern char D_00CE4087[];
extern char D_00CE4088[];
extern char D_00CE408C[];

void func_00B9CA90(void) {
    s32 var_a1;
    s8 temp_v1;
    void *temp_s0;
    void *var_s1;
    void *var_v0;

    temp_s0 = func_00B9C490();
    var_s1 = func_00B94840((*(s32 *)D_00CE4088) + (*(u8 *)D_00CE4085));
    var_v0 = func_002F7F80((*(s32 *)D_00CE408C) + (*(u8 *)D_00CE4086));
    (*(s8 *)D_00CE3EF4) = 1;
    var_a1 = 0x130;
    (*(s8 *)D_00CE3EFB) = 1;
    (*(s8 *)D_00CE3EFE) = 0;
    (*(s8 *)D_00CE4087) = 0;
    (*(s8 *)D_00CE3EF1) = 1;
    (*(s8 *)D_00CE3EF5) = 1;
    (*(s8 *)D_00CE3EF2) = 1;
    do {
        var_a1 -= 1;
        temp_v1 = M2C_FIELD(var_s1, s8 *, 1);
        M2C_FIELD(var_v0, s8 *, 0) = (s8) M2C_FIELD(var_s1, s8 *, 0);
        var_s1 += 2;
        M2C_FIELD(var_v0, s8 *, 1) = temp_v1;
        var_v0 += 2;
    } while (var_a1 > 0);
    M2C_FIELD(temp_s0, s8 *, 0x38) = 1;
    func_00C1B380(0xD, var_a1);
    func_00B98390(3);
    (*(s8 *)D_00CE4080) = 0x20;
}
