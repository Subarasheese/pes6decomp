/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0018A180(int);
extern void func_00186530(int);
extern u8 *D_003B26F0;
extern s32 D_003E9DA4;
extern char D_0051FF40[];
extern char D_005E5E20[];
extern char D_005E5E21[];
extern char D_005E5E22[];
extern char D_005E5E23[];
extern char D_005E5E24[];
extern char D_005E5E25[];
extern char D_005E5E28[];
extern char D_005E5E2C[];
extern char D_005E5E38[];
extern char D_005E5E44[];

void func_002D6E50(void) {
    u8 temp_a7;

    D_003E9DA4 = 0;
    func_0018A180(0);
    func_00186530(1);
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0) = 0;
    (*(s8 *)D_005E5E23) = 0;
    (*(s8 *)D_005E5E22) = 1;
    (*(s8 *)D_005E5E24) = 0;
    temp_a7 = *D_003B26F0;
    (*(u8 *)D_005E5E25) = temp_a7;
    (*(s32 *)D_005E5E28) = 0;
    (*(s8 *)D_005E5E21) = 0;
    M2C_FIELD(((void *)D_005E5E44), s8 *, 2) = 1;
    M2C_FIELD(((void *)D_005E5E44), u8 *, 5) = temp_a7;
    M2C_FIELD(((void *)D_005E5E44), s8 *, 0) = 0;
    M2C_FIELD(((void *)D_005E5E44), s8 *, 3) = 0;
    M2C_FIELD(((void *)D_005E5E44), s8 *, 4) = 0;
    M2C_FIELD(((void *)D_005E5E44), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_005E5E44), s8 *, 1) = 0;
    M2C_FIELD(((void *)D_005E5E2C), s8 *, 0) = 0;
    M2C_FIELD(((void *)D_005E5E2C), s8 *, 3) = 0;
    M2C_FIELD(((void *)D_005E5E2C), s8 *, 2) = 1;
    M2C_FIELD(((void *)D_005E5E2C), s8 *, 4) = 0;
    M2C_FIELD(((void *)D_005E5E2C), u8 *, 5) = temp_a7;
    M2C_FIELD(((void *)D_005E5E2C), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_005E5E2C), s8 *, 1) = 0;
    M2C_FIELD(((void *)D_005E5E38), s8 *, 0) = 0;
    M2C_FIELD(((void *)D_005E5E38), s8 *, 3) = 0;
    M2C_FIELD(((void *)D_005E5E38), s8 *, 2) = 1;
    M2C_FIELD(((void *)D_005E5E38), s8 *, 4) = 0;
    M2C_FIELD(((void *)D_005E5E38), u8 *, 5) = temp_a7;
    M2C_FIELD(((void *)D_005E5E38), s32 *, 8) = 0;
    M2C_FIELD(((void *)D_005E5E38), s8 *, 1) = 0;
    M2C_FIELD(((void *)D_005E5E20), s8 *, 7) = 0;
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x13) = 0;
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x1F) = 0;
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x2B) = 0;
    M2C_FIELD(((void *)D_005E5E20), s8 *, 6) = (s8) ((s32) (*(u8 *)D_0051FF40) % 3);
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x12) = (s8) ((s32) ((*(u8 *)D_0051FF40) + 1) % 3);
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x1E) = (s8) ((s32) ((*(u8 *)D_0051FF40) + 2) % 3);
    M2C_FIELD(((void *)D_005E5E20), s8 *, 0x2A) = (s8) ((s32) ((*(u8 *)D_0051FF40) + 3) % 3);
}
