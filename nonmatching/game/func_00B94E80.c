/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E0C[];
extern char D_00591E19[];
extern char D_00591E58[];
extern char D_00591E5C[];
extern char D_00591E60[];
extern char D_00CBCDE0[];
extern char D_00CBCDE1[];
extern char D_00CBCDE2[];
extern char D_00CBCDE3[];
extern char D_00CBCDE4[];
extern char D_00CBCDF0[];

void func_00B94E80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s8 *, 0) = 1;
    M2C_FIELD(arg0, u8 *, 2) = (u8) (*(u8 *)D_00CBCDE1);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (*(u8 *)D_00CBCDE0);
    M2C_FIELD(arg0, u8 *, 4) = (u8) (*(u8 *)D_00CBCDE2);
    M2C_FIELD(arg0, u8 *, 5) = (u8) (*(u8 *)D_00CBCDE3);
    M2C_FIELD(arg0, u8 *, 0x2F) = (u8) (*(u8 *)D_00CBCDE4);
    M2C_FIELD(arg0, s8 *, 6) = (s8) (*(s32 *)D_00CBCDF0);
    M2C_FIELD(arg0, f32 *, 8) = (f32) (*(f32 *)D_00591E58);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) (*(f32 *)D_00591E5C);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) (*(f32 *)D_00591E60);
    M2C_FIELD(arg0, u8 *, 0x14) = (u8) (*(u8 *)D_00591E19);
    M2C_FIELD(arg0, s8 *, 0x15) = (s8) M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
    M2C_FIELD(arg0, s8 *, 0x16) = 0;
    M2C_FIELD(arg0, s8 *, 0x17) = 0;
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (*(s32 *)D_00591E0C);
}
