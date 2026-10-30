/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 func_002371A0(u16);                             /* extern */
M2C_UNK func_003710E0(u8, u8, u8, u8, u8);          /* extern */
extern u8 D_003E9E88;
extern u8 D_003E9E89;
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00591BB4[];
extern char D_00591BB6[];
extern char D_00591BB7[];
extern char D_00591BB8[];
extern char D_00591BB9[];
extern char D_00591BBB[];
extern char D_00591BBD[];
extern char D_00591BBE[];
extern char D_00591BBF[];
extern char D_00591BC0[];
extern char D_00591BC1[];
extern char D_00591BC2[];
extern char D_00591BC3[];
extern char D_00591BC4[];
extern char D_00591BC5[];
extern char D_00591BC6[];
extern char D_00591BC7[];
extern char D_00591BC8[];
extern char D_00591BC9[];
extern char D_00591BCA[];
extern char D_00591BCB[];
extern char D_00591BCE[];
extern char D_00591DED[];

void func_0080DCF0(void *arg0, s32 arg1) {
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a3;
    u8 temp_a4;

    (*(s16 *)D_00591BB0) = func_002371A0(M2C_FIELD(arg0, u16 *, 4));
    (*(s16 *)D_00591BB2) = func_002371A0(M2C_FIELD(arg0, u16 *, 6));
    D_003E9E88 = M2C_FIELD(arg0, u8 *, 8);
    D_003E9E89 = M2C_FIELD(arg0, u8 *, 9);
    temp_a4 = M2C_FIELD(arg0, u8 *, 0xA);
    (*(u8 *)D_00591BB4) = temp_a4;
    temp_a3 = M2C_FIELD(arg0, u8 *, 0xB);
    (*(u8 *)D_00591BB6) = temp_a3;
    temp_a2 = M2C_FIELD(arg0, u8 *, 0xC);
    (*(u8 *)D_00591BB7) = temp_a2;
    temp_a1 = M2C_FIELD(arg0, u8 *, 0xD);
    (*(u8 *)D_00591BB8) = temp_a1;
    (*(u8 *)D_00591BB9) = M2C_FIELD(arg0, u8 *, 0xE);
    (*(u8 *)D_00591BBB) = M2C_FIELD(arg0, u8 *, 0xF);
    func_003710E0(M2C_FIELD(arg0, u8 *, 0x10), temp_a1, temp_a2, temp_a3, temp_a4);
    (*(u8 *)D_00591BBD) = M2C_FIELD(arg0, u8 *, 0x11);
    (*(u8 *)D_00591BBE) = M2C_FIELD(arg0, u8 *, 0x12);
    (*(u8 *)D_00591BBF) = M2C_FIELD(arg0, u8 *, 0x13);
    (*(u8 *)D_00591BC0) = M2C_FIELD(arg0, u8 *, 0x14);
    (*(u8 *)D_00591BC1) = M2C_FIELD(arg0, u8 *, 0x15);
    (*(u8 *)D_00591BC2) = M2C_FIELD(arg0, u8 *, 0x16);
    (*(u8 *)D_00591BC3) = M2C_FIELD(arg0, u8 *, 0x17);
    (*(u8 *)D_00591BC4) = M2C_FIELD(arg0, u8 *, 0x18);
    (*(u8 *)D_00591BC5) = M2C_FIELD(arg0, u8 *, 0x19);
    (*(u8 *)D_00591BCB) = M2C_FIELD(arg0, u8 *, 0x1F);
    (*(u8 *)D_00591BCE) = M2C_FIELD(arg0, u8 *, 0x20);
    if ((u32) (arg1 - 1) < 2U) {
        (*(u8 *)D_00591BC6) = M2C_FIELD(arg0, u8 *, 0x1A);
        (*(u8 *)D_00591BC7) = M2C_FIELD(arg0, u8 *, 0x1B);
        (*(u8 *)D_00591BC8) = M2C_FIELD(arg0, u8 *, 0x1C);
        (*(u8 *)D_00591BC9) = M2C_FIELD(arg0, u8 *, 0x1D);
        (*(u8 *)D_00591DED) = M2C_FIELD(arg0, u8 *, 0x21);
        (*(u8 *)D_00591BCA) = M2C_FIELD(arg0, u8 *, 0x1E);
    }
}
