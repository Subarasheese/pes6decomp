/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
extern char D_00397920[];
extern char D_00397924[];
extern char D_00397928[];
extern char D_0039792C[];
extern s32 D_003E9890;
extern char D_0052056C[];
extern char D_00520570[];
extern char D_00520574[];
extern char D_00520578[];
extern char D_00520580[];
extern char D_00520584[];
extern char D_00520588[];
extern char D_0052058C[];
extern char D_00520590[];
extern char D_00520594[];
extern char D_00520598[];
extern char D_0052059C[];
extern char D_005205A0[];
extern char D_005205A4[];
extern char D_005205A8[];
extern char D_005205AC[];
extern char D_005205D8[];
extern char D_00520620[];
extern char D_00520624[];
extern char D_00520628[];
extern char D_0052062C[];
extern char D_00520630[];
extern char D_00520634[];
extern char D_00520638[];

void func_001A5750(void) {
    func_001C48E8(((void *)D_00520570), 0, 0xD0);
    (*(s32 *)D_00520570) = 0x42480000;
    if ((16000.0f - 50.0f) < 100.0f) {
        (*(f32 *)D_00520574) = 100.0f + 50.0f;
    } else {
        (*(f32 *)D_00520574) = 16000.0f;
    }
    (*(s32 *)D_00520578) = 0x44B2C000;
    D_003E9890 = 0;
    (*(f32 *)D_00520580) = (*(f32 *)D_00397920);
    (*(f32 *)D_00520584) = (*(f32 *)D_00397924);
    (*(f32 *)D_00520588) = (*(f32 *)D_00397928);
    (*(s32 *)D_00520590) = 0;
    (*(f32 *)D_0052058C) = (*(f32 *)D_0039792C);
    (*(s32 *)D_00520594) = 0xC61C4000;
    (*(s32 *)D_00520598) = 0x459C4000;
    (*(s32 *)D_0052059C) = 0x3F800000;
    (*(s32 *)D_005205A0) = 0;
    (*(s32 *)D_005205A4) = 0;
    (*(s32 *)D_005205A8) = 0;
    (*(s32 *)D_005205AC) = 0x3F800000;
    (*(s32 *)D_005205D8) = 0;
    D_003E9890 &= ~8;
    (*(s32 *)D_00520620) = 0;
    (*(s32 *)D_00520624) = 0x41200000;
    (*(s32 *)D_00520628) = 0x447A0000;
    (*(s32 *)D_0052062C) = 0x447A0000;
    (*(s32 *)D_00520638) = 0;
    (*(s32 *)D_00520630) = 0x447A0000;
    (*(s32 *)D_00520634) = 0x447A0000;
    (*(s32 *)D_0052056C) = 1;
}
