/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBCAD2[];
extern char D_00CBCAF4[];
extern char D_00CBCAF8[];
extern char D_00CBCAFC[];
extern char D_00CBCAFE[];
extern char D_00CBCB00[];
extern char D_00CBCB04[];

void func_00B89870(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0x50) = 1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s8 *, 0x66) = 0xFF;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s8 *, 0xE) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0) = 0;
    (*(f32 *)D_00CBCB00) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
    (*(f32 *)D_00CBCB04) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFE) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    (*(f32 *)D_00CBCAF4) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE0);
    (*(f32 *)D_00CBCAF8) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), f32 *, 0xE8);
    (*(u16 *)D_00CBCAFC) = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x26);
    (*(s8 *)D_00CBCAD2) = 0;
}
