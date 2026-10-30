/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_00510FD0[];
extern char D_008D2F30[];
extern char D_008DF000[];
extern char D_008DF009[];
extern char D_008DF00C[];
extern char D_008DF018[];

void func_008BCFE0(void) {
    M2C_UNK *var_a5;
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s32 var_a2;
    s32 var_a3;
    s8 *var_a0;
    s8 *var_a4;
    void *temp_v1;

    func_001C48E8(((void *)D_008DF000), 0, 0x2CD0);
    (*(s8 *)D_008DF000) = 0;
    var_a2 = 0;
    (*(s8 *)D_008DF009) = 1;
    var_a0 = ((void *)D_008DF000);
    do {
        M2C_FIELD(var_a0, s32 *, 0x18) = 1;
        var_a2 += 8;
        M2C_FIELD(var_a0, s32 *, 0x1C0) = 1;
        M2C_FIELD(var_a0, s32 *, 0x368) = 1;
        M2C_FIELD(var_a0, s32 *, 0x510) = 1;
        M2C_FIELD(var_a0, s32 *, 0x6B8) = 1;
        M2C_FIELD(var_a0, s32 *, 0x860) = 1;
        M2C_FIELD(var_a0, s32 *, 0xA08) = 1;
        M2C_FIELD(var_a0, s32 *, 0xBB0) = 1;
        var_a0 += 0xD40;
    } while (var_a2 < 0x13);
    var_a3 = 0;
    var_a5 = ((void *)D_008D2F30);
    var_a4 = ((void *)D_008DF000);
    temp_v1 = ((void *)D_008DF018) + (var_a2 * 0x1A8);
    M2C_FIELD(temp_v1, s32 *, 0) = 1;
    M2C_FIELD(temp_v1, s32 *, 0x1A8) = 1;
    M2C_FIELD(temp_v1, s32 *, 0x350) = 1;
    do {
        temp_a2 = M2C_FIELD(var_a5, s16 *, 0);
        var_a3 += 1;
        temp_a1 = M2C_FIELD(var_a5, s16 *, 4);
        temp_a0 = M2C_FIELD(var_a5, s16 *, 8);
        M2C_FIELD(var_a4, s16 *, 0xC) = temp_a2;
        M2C_FIELD(var_a4, s16 *, 0xE) = temp_a2;
        M2C_FIELD(var_a4, s16 *, 0x10) = temp_a1;
        M2C_FIELD(var_a4, s16 *, 0x12) = temp_a1;
        M2C_FIELD(var_a4, s16 *, 0x14) = temp_a0;
        M2C_FIELD(var_a4, s16 *, 0x16) = temp_a0;
        M2C_FIELD(var_a4, s32 *, 0x18) = (s32) M2C_FIELD(var_a5, s32 *, 0xC);
        M2C_FIELD(var_a4, s8 *, 0x1C) = (s8) M2C_FIELD(var_a5, s8 *, 0x10);
        M2C_FIELD(var_a4, s8 *, 0x1D) = (s8) M2C_FIELD(var_a5, s8 *, 0x11);
        var_a5 += 0x1A8;
        var_a4 += 0x1A8;
    } while (var_a3 < 0x15);
    if ((*(s32 *)D_00510FD0) != 4) {
        (*(s16 *)D_008DF00C) = 1;
        return;
    }
    (*(s16 *)D_008DF00C) = 0;
}
