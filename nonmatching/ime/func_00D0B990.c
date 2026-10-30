/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_002DC210(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK func_00D08E70(void *);                      /* extern */
M2C_UNK func_00D0B650(void *);                      /* extern */
s32 func_00D0B760(void *, s32);                     /* extern */
M2C_UNK func_00D10EE0(void *);                      /* extern */

void *func_00D0B990(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s1;

    if (arg0 == NULL) {
        return NULL;
    }
    func_001C48E8(0, 0xD80);
    M2C_FIELD(arg0, s32 *, 0x710) = 0;
    M2C_FIELD(arg0, s32 *, 0x714) = 0;
    M2C_FIELD(arg0, s32 *, 0xD70) = 0;
    M2C_FIELD(arg0, s32 *, 0xD74) = -1;
    M2C_FIELD(arg0, s32 *, 0xD44) = 0;
    M2C_FIELD(arg0, s32 *, 0xD40) = 0;
    M2C_FIELD(arg0, s32 *, 0xD48) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x718) = 0;
    M2C_FIELD(arg0, s32 *, 0xD50) = 0;
    M2C_FIELD(arg0, s32 *, 0xD54) = 0;
    M2C_FIELD(arg0, s32 *, 0xD58) = 0;
    M2C_FIELD(arg0, s32 *, 0xD5C) = 0;
    M2C_FIELD(arg0, s32 *, 0xD60) = 0;
    M2C_FIELD(arg0, s32 *, 0xD64) = 0;
    M2C_FIELD(arg0, s32 *, 0xD68) = 0;
    M2C_FIELD(arg0, s32 *, 0xD6C) = 0;
    M2C_FIELD(arg0, s8 *, 0xD78) = 0;
    M2C_FIELD(arg0, s8 *, 0xD79) = 1;
    M2C_FIELD(arg0, s8 *, 0xD7B) = 1;
    if (func_00D0B760(arg0, arg1) == 1) {
        func_00D0B650(arg0);
        return NULL;
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x710) = 0;
        M2C_FIELD(arg0, s32 *, 0x714) = 0;
        var_s1 = 0;
        M2C_FIELD(arg0, s32 *, 0xD70) = 0;
        M2C_FIELD(arg0, s32 *, 0xD74) = -1;
        do {
            func_00D10EE0(arg0 + (var_s1 << 6));
            var_s1 += 1;
        } while (var_s1 < 0x19);
        func_00D08E70(arg0 + 0x808);
    }
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 0xD78) = 0;
        M2C_FIELD(arg0, s8 *, 0xD7A) = 1;
    }
    temp_v0 = func_002DC210(0, 0x32, 0x15, 0, (f32) M2C_FIELD(arg0, s32 *, 0x718));
    M2C_FIELD(arg0, s32 *, 0xD40) = temp_v0;
    if (temp_v0 == 0) {
        func_00D0B650(arg0);
        return NULL;
    }
    return arg0;
}
