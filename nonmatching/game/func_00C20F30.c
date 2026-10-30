/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001520C0(void);
extern u32 func_00C137C0(u32);
extern u8 func_00C132C0(void *);
extern s32 func_001520F0(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00C12A80(s32);                             /* extern */
u16 func_00C13230(void *);                          /* extern */
u32 func_00C137D0(u16);                             /* extern */
void *func_00C13810();                              /* extern */
M2C_UNK func_00C21050(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C21800(M2C_UNK *);                   /* extern */
M2C_UNK func_00C221A0(M2C_UNK *, u32, void *);      /* extern */
extern s32 D_003E7ACC;
extern s32 D_003E7AD0;
extern char D_00CCAF80[];
extern char D_00CCB040[];

void func_00C20F30(void) {
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s3;
    u32 temp_s3;
    void *temp_v0;

    temp_s2 = func_001520F0();
    temp_s1 = func_001520C0();
    if ((temp_s2 == 0) && (D_003E7ACC != 0) && (D_003E7AD0 == 0)) {
        temp_v0 = func_00C13810();
        var_s3 = 0;
        if (func_00C12A80(func_00C132C0(temp_v0) & 0xFF) != 0) {
            var_s3 = 1;
        }
        if (var_s3 == 1) {
            temp_s3 = func_00C137C0(func_00C137D0(M2C_FIELD(((void *)D_00CCAF80), u16 *, 0x90)));
            func_001C48E8(((void *)D_00CCB040), 0, 0x304);
            func_00C221A0(((void *)D_00CCB040), temp_s3, temp_v0);
            func_00C21800(((void *)D_00CCB040));
            M2C_FIELD(((void *)D_00CCAF80), u16 *, 0x90) = func_00C13230(temp_v0);
            func_00C21050(0x14, 0x42700000, 0, 0x3F800000);
        }
    }
    D_003E7ACC = temp_s2;
    D_003E7AD0 = temp_s1;
}
