/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_00140500(void);
extern void func_001EB310(float);
extern int func_001404F0(void);
s64 func_0013E1F0(M2C_UNK, f32 *, f32 *, f32 *, M2C_UNK, s16, s16); /* extern */
M2C_UNK func_001C48E8(s16 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_001E5810(s64);                         /* extern */
extern s32 D_003E74AC;
extern char D_0052B0A0[];
extern char D_0052B0A2[];
extern char D_0052B0A4[];
extern char D_0052B0A8[];
extern char D_0052B0AC[];
extern char D_0052B0B0[];
extern char D_0052B0B4[];
extern char D_0052B0B8[];
extern char D_0052B0BC[];
extern char D_0052B0C0[];
extern char D_0052B0C8[];
extern char D_0052B0D0[];
extern char D_0052B0D8[];
extern char D_0052B0E0[];
extern char D_0052B0E8[];
extern char D_0052B0F0[];

void func_001E5650(void) {
    s64 temp_a0;

    func_001C48E8(((void *)D_0052B0A0), 0, 0x70);
    (*(s16 *)D_0052B0A0) = func_00140500();
    (*(s16 *)D_0052B0A2) = func_001404F0();
    (*(f32 *)D_0052B0A8) = (f32) ((s16) (*(s16 *)D_0052B0A2) >> 1);
    (*(f32 *)D_0052B0A4) = (f32) ((s16) (*(s16 *)D_0052B0A0) >> 1);
    (*(f32 *)D_0052B0AC) = (f32) (*(s16 *)D_0052B0A0);
    if (D_003E74AC != 0) {
        (*(f32 *)D_0052B0B0) = 448.0f;
    } else {
        (*(f32 *)D_0052B0B0) = (f32) (*(s16 *)D_0052B0A2);
    }
    (*(f32 *)D_0052B0B4) = (*(f32 *)D_0052B0AC) / 2.0f;
    (*(s64 *)D_0052B0C8) = 0x44;
    (*(s64 *)D_0052B0D0) = 5;
    (*(s64 *)D_0052B0D8) = 0x5000D;
    (*(s64 *)D_0052B0E8) = 0x61;
    (*(f32 *)D_0052B0B8) = (*(f32 *)D_0052B0B0) / 2.0f;
    (*(f32 *)D_0052B0BC) = (f32) (*(s16 *)D_0052B0A0) / (*(f32 *)D_0052B0AC);
    (*(f32 *)D_0052B0C0) = (f32) (*(s16 *)D_0052B0A2) / (*(f32 *)D_0052B0B0);
    (*(s64 *)D_0052B0E0) = func_0013E1F0(0, ((void *)D_0052B0BC), ((void *)D_0052B0B8), ((void *)D_0052B0B4), 0x61, (*(s16 *)D_0052B0A2), (*(s16 *)D_0052B0A0));
    temp_a0 = ((s64) (((*(s16 *)D_0052B0A0) - 1) << 0x20) >> 0x20) << 0x10;
    (*(s64 *)D_0052B0F0) = temp_a0 | (((s64) (((*(s16 *)D_0052B0A2) - 1) << 0x20) >> 0x20) << 0x30);
    func_001E5810(temp_a0);
    func_001EB310((*(f32 *)D_0052B0C0));
}
