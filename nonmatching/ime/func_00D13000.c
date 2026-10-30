/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00D12CD0(void *);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00D12E00(M2C_UNK *, s32);                  /* extern */
extern char D_00D37800[];
extern char D_00D38580[];
extern char D_00D38584[];
extern char D_00D38588[];
extern char D_00D38589[];
extern char D_00D385A8[];
extern char D_00D385AC[];
extern char D_00D385B0[];
extern char D_00D385B4[];
extern char D_00D385B5[];
extern char D_00D385B8[];
extern char D_00D385BC[];
extern char D_00D385C0[];
extern char D_00D385C4[];
extern char D_00D385C8[];
extern char D_00D385CC[];
extern char D_00D385D4[];
extern char D_00D385D8[];

M2C_UNK *func_00D13000(s32 arg0) {
    s32 temp_v0;
    s32 var_a1;
    void *temp_a0;

    func_001C48E8(((void *)D_00D37800), 0, 0xE04);
    (*(s32 *)D_00D385C0) = 0;
    (*(s8 *)D_00D38588) = 0;
    var_a1 = 0;
    (*(s8 *)D_00D38589) = 1;
    (*(s32 *)D_00D38580) = 1;
    (*(s32 *)D_00D38584) = 0;
    (*(s32 *)D_00D385A8) = 2;
    (*(s32 *)D_00D385AC) = 0;
    (*(s32 *)D_00D385B8) = 0;
    (*(s32 *)D_00D385B0) = 0;
    (*(s8 *)D_00D385B5) = 0;
    (*(s8 *)D_00D385B4) = 0;
    (*(s32 *)D_00D385BC) = 0;
    (*(s32 *)D_00D385C4) = 0;
    (*(s32 *)D_00D385C8) = 0;
    (*(s32 *)D_00D385CC) = 0;
    (*(s32 *)D_00D385D4) = 0;
    (*(s32 *)D_00D385D8) = 0;
    do {
        temp_v0 = var_a1 * 4;
        temp_a0 = ((void *)D_00D37800) + (var_a1 * 0x10);
        var_a1 += 1;
        M2C_FIELD(temp_a0, s32 *, 0xDDC) = 0;
        M2C_FIELD(temp_a0, s32 *, 0xDE0) = 0;
        M2C_FIELD(temp_a0, s32 *, 0xDE4) = 0;
        M2C_FIELD(temp_a0, s32 *, 0xDE8) = 0;
        M2C_FIELD((((void *)D_00D37800) + temp_v0), s32 *, 0xDFC) = 0;
    } while (var_a1 < 2);
    if (func_00D12E00(((void *)D_00D37800), arg0) == 2) {
        if (((void *)D_00D37800) == NULL) {
            return NULL;
        }
        func_00D12CD0(((void *)D_00D37800));
        func_001C48E8(((void *)D_00D37800), 0, 0xE04);
        return NULL;
    }
    if (((void *)D_00D37800) != NULL) {
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xD90) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xD94) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xD98) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xD9C) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xD84) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xDAC) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xDA0) = 0;
        M2C_FIELD(((void *)D_00D37800), s32 *, 0xDBC) = 0;
    }
    if (((void *)D_00D37800) != NULL) {
        M2C_FIELD(((void *)D_00D37800), s8 *, 0xD88) = 0;
        M2C_FIELD(((void *)D_00D37800), s8 *, 0xD8C) = 1;
    }
    return ((void *)D_00D37800);
}
