/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

f32 func_001CD9E0(f32);                             /* extern */
s16 func_009B34C0(M2C_UNK, M2C_UNK, f32, f32);      /* extern */
s8 func_00B42F00();                                 /* extern */
s8 func_00BF6270();                                 /* extern */
extern char D_00CBCAD0[];
extern char D_00CBCAD1[];
extern char D_00CBCAD3[];
extern char D_00CBCC70[];
extern char D_00CBCCD0[];
extern char D_00CBCCD4[];
extern char D_00CBCCD8[];
extern char D_00CBCCDC[];
extern char D_00CBCCE0[];
extern char D_00CBCCF0[];
extern char D_00CBCCF4[];
extern char D_00CBCCF8[];
extern char D_00CBCCFC[];
extern char D_00CBCD00[];
extern char D_00CBCD10[];
extern char D_00CBCD12[];
extern char D_00CBCD14[];
extern char D_00CBCD16[];
extern char D_00CBCD18[];
extern char D_00CBCD50[];
extern char D_00CBCD52[];
extern char D_00CBCD54[];
extern char D_00CBCD60[];
extern char D_00CBCD62[];
extern char D_00CBCD64[];
extern char D_00CBCD66[];
extern char D_00CBCD68[];
extern char D_00CBCD70[];
extern char D_00CBCD72[];
extern char D_00CBCD74[];
extern char D_00CBCD76[];
extern char D_00CBCD78[];
extern char D_00CBCD80[];
extern char D_00CBCD82[];
extern char D_00CBCD8B[];

void func_00B364E0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f2;
    s32 temp_f0;
    s32 temp_f1;
    s32 var_s2;

    (*(s8 *)D_00CBCAD0) = func_00BF6270();
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x72:
        (*(s8 *)D_00CBCAD3) = 6;
        (*(s8 *)D_00CBCD80) = 3;
        break;
    case 0x9:
        (*(s8 *)D_00CBCAD3) = 6;
        (*(s8 *)D_00CBCD80) = 3;
        break;
    case 0x7:
        (*(s8 *)D_00CBCAD3) = 6;
        (*(s8 *)D_00CBCD80) = 3;
        (*(s32 *)D_00CBCCD0) = 0xC0178D50;
        (*(s32 *)D_00CBCCF0) = 0x40AE0419;
        (*(s16 *)D_00CBCD70) = 0x1A;
        (*(u16 *)D_00CBCD60) = 0x72;
        (*(s16 *)D_00CBCD50) = 0;
        (*(s32 *)D_00CBCCD4) = 0x3FE020C5;
        (*(s32 *)D_00CBCCF4) = 0x40B3851F;
        (*(s16 *)D_00CBCD72) = 0x22;
        (*(s32 *)D_00CBCCD8) = 0xBF8E147B;
        (*(s32 *)D_00CBCCF8) = 0x40A45A1D;
        (*(u16 *)D_00CBCD62) = (*(u16 *)D_00CBCD60) + 0x18;
        (*(s16 *)D_00CBCD74) = 0x2C;
        (*(s16 *)D_00CBCD64) = (*(u16 *)D_00CBCD62) + 0x32;
        break;
    case 0x8:
        (*(s8 *)D_00CBCAD3) = 6;
        (*(s8 *)D_00CBCD80) = 3;
        (*(s32 *)D_00CBCCD0) = 0xBF9D4FDF;
        (*(s32 *)D_00CBCCF0) = 0x40B9A1CB;
        (*(s16 *)D_00CBCD70) = 0x2C;
        (*(u16 *)D_00CBCD60) = 0x50;
        (*(s16 *)D_00CBCD50) = 0x22B8;
        (*(s32 *)D_00CBCCD4) = 0x3F6F1AA0;
        (*(s32 *)D_00CBCCF4) = 0x407CED91;
        (*(s16 *)D_00CBCD72) = 0x2A;
        (*(s32 *)D_00CBCCD8) = 0xBF174BC7;
        (*(s32 *)D_00CBCCF8) = 0x407FBE77;
        (*(u16 *)D_00CBCD62) = (*(u16 *)D_00CBCD60) + 0x3C;
        (*(s16 *)D_00CBCD74) = 0x3A;
        (*(s16 *)D_00CBCD64) = (*(u16 *)D_00CBCD62) + 0x24;
        break;
    case 0x5:
        (*(s32 *)D_00CBCCD8) = 0xBE90E560;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s32 *)D_00CBCCF8) = 0x40C60419;
        (*(s16 *)D_00CBCD74) = 0x20;
        (*(s16 *)D_00CBCD14) = 0x8000;
        (*(s32 *)D_00CBCCD4) = 0x40A9DB23;
        (*(s32 *)D_00CBCCF4) = 0xC03E0419;
        (*(s16 *)D_00CBCD72) = 0x20;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s16 *)D_00CBCD12) = 0xE000;
        (*(s32 *)D_00CBCCD0) = 0x3FA8D4FE;
        (*(s32 *)D_00CBCCF0) = 0xC0BCF5C3;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x14;
        (*(s16 *)D_00CBCD10) = 0;
        break;
    case 0x4:
        (*(s8 *)D_00CBCAD3) = 1;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD8) = 0x3EC51EB8;
        (*(s32 *)D_00CBCCF8) = 0x40E20419;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s16 *)D_00CBCD74) = 0x18;
        (*(s16 *)D_00CBCD14) = 0x8000;
        (*(s32 *)D_00CBCCD4) = 0x40C1DB23;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s32 *)D_00CBCCF4) = 0xC0BFA5E3;
        (*(s16 *)D_00CBCD72) = 0x1C;
        (*(s16 *)D_00CBCD12) = 0xE000;
        (*(s32 *)D_00CBCCD0) = 0xBCC49BA6;
        (*(s32 *)D_00CBCCF0) = 0xC0DB5C29;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x18;
        (*(s16 *)D_00CBCD10) = 0;
        break;
    case 0x3:
        (*(s8 *)D_00CBCAD3) = 1;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0x401DD2F2;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s32 *)D_00CBCCF0) = 0xBF9DD2F2;
        (*(s16 *)D_00CBCD70) = 0x14;
        (*(s16 *)D_00CBCD10) = 0xEE38;
        (*(s32 *)D_00CBCCD4) = 0x40AAE148;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s32 *)D_00CBCCF4) = 0x40274BC7;
        (*(s16 *)D_00CBCD72) = 0x16;
        (*(s16 *)D_00CBCD12) = 0xCAAA;
        (*(s32 *)D_00CBCCD8) = 0;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s32 *)D_00CBCCF8) = 0x4104A3D7;
        (*(s16 *)D_00CBCD74) = 0xE;
        (*(s16 *)D_00CBCD14) = 0x8000;
        break;
    case 0x1:
        (*(s8 *)D_00CBCAD3) = 1;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0xC0600000;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s32 *)D_00CBCCF0) = 0xC0000000;
        (*(s16 *)D_00CBCD70) = 0x14;
        (*(s16 *)D_00CBCD10) = 0x238E;
        (*(s32 *)D_00CBCCD4) = 0xC09F645A;
        (*(s32 *)D_00CBCCF4) = 0x3FADB22D;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s16 *)D_00CBCD72) = 0x14;
        (*(s16 *)D_00CBCD12) = 0x238E;
        (*(s32 *)D_00CBCCD8) = 0x3F8FDF3B;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s32 *)D_00CBCCF8) = 0x410C9375;
        (*(s16 *)D_00CBCD74) = 0x20;
        (*(s16 *)D_00CBCD14) = 0x8E38;
        break;
    case 0x2:
    case 0x0:
        (*(s8 *)D_00CBCAD3) = 1;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD8) = 0x406BC6A8;
        (*(s32 *)D_00CBCCF8) = 0x40E92F1B;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s16 *)D_00CBCD74) = 0x20;
        (*(s16 *)D_00CBCD14) = 0xA0B6;
        (*(s16 *)D_00CBCD54) = 0x256F;
        (*(s32 *)D_00CBCCD4) = 0x40DBDF3B;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s32 *)D_00CBCCF4) = 0x401DC28F;
        (*(s16 *)D_00CBCD72) = 0x2C;
        (*(s16 *)D_00CBCD12) = 0xD1C7;
        (*(s16 *)D_00CBCD52) = 0x1388;
        (*(s32 *)D_00CBCCD0) = 0x403F9DB2;
        (*(s32 *)D_00CBCCF0) = 0xBF2B851F;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x18;
        (*(s16 *)D_00CBCD10) = 0xE71C;
        (*(s16 *)D_00CBCD50) = 0x11E7;
        break;
    case 0x6:
        (*(s8 *)D_00CBCAD3) = 6;
        (*(s8 *)D_00CBCD80) = 3;
        break;
    case 0x3C:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0x3F10A3D7;
        (*(s32 *)D_00CBCCF0) = 0x411245A2;
        (*(u16 *)D_00CBCD60) = 0x88;
        (*(s16 *)D_00CBCD70) = 0x10;
        (*(s16 *)D_00CBCD10) = 0x8000;
        break;
    case 0x3D:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0x3D83126F;
        (*(s32 *)D_00CBCCF0) = 0x40B0624E;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x28;
        break;
    case 0x4B:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0xC0833333;
        (*(s32 *)D_00CBCCF0) = 0x3F970A3D;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x28;
        (*(s16 *)D_00CBCD10) = 0xE38;
        break;
    case 0x34:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0xC03C1893;
        (*(s32 *)D_00CBCCF0) = 0xC098FDF4;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x24;
        (*(s16 *)D_00CBCD10) = 0x1555;
        break;
    case 0xA:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0;
        (*(s32 *)D_00CBCCF0) = 0;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x46;
        (*(s32 *)D_00CBCCD4) = 0xBE2F1AA0;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s32 *)D_00CBCCF4) = 0x40788312;
        (*(s16 *)D_00CBCD72) = 0x1E;
        (*(s16 *)D_00CBCD12) = 0x8000;
        break;
    case 0x4D:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 0;
        (*(s32 *)D_00CBCCD0) = 0x3F09BA5E;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s32 *)D_00CBCCF0) = 0xC1888312;
        (*(s16 *)D_00CBCD70) = 0xB4;
        (*(s16 *)D_00CBCD10) = 0x8000;
        break;
    case 0x63:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0x3F10E560;
        (*(s32 *)D_00CBCCF0) = 0xC125126F;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x30;
        (*(s16 *)D_00CBCD10) = 0;
        break;
    case 0x42:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0x405353F8;
        (*(s32 *)D_00CBCCF0) = 0x40FB2B02;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x20;
        (*(s16 *)D_00CBCD10) = 0x8000;
        (*(s32 *)D_00CBCCD4) = 0x40B147AE;
        (*(s32 *)D_00CBCCF4) = 0x40BA978D;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s16 *)D_00CBCD72) = 0x18;
        (*(s16 *)D_00CBCD12) = 0xA000;
        (*(s32 *)D_00CBCCD8) = 0x40D3F7CF;
        (*(s32 *)D_00CBCCF8) = 0x3DEF9DB2;
        (*(s16 *)D_00CBCD64) = 0;
        (*(s16 *)D_00CBCD74) = 0x20;
        (*(s16 *)D_00CBCD14) = 0xC000;
        (*(s32 *)D_00CBCCDC) = 0x40BF3333;
        (*(s16 *)D_00CBCD66) = 0;
        (*(s32 *)D_00CBCCFC) = 0xC09AF1AA;
        (*(s16 *)D_00CBCD76) = 0x1C;
        (*(s16 *)D_00CBCD16) = 0xE000;
        (*(s32 *)D_00CBCCE0) = 0x4079999A;
        (*(s32 *)D_00CBCD00) = 0xC0A5D2F2;
        (*(s16 *)D_00CBCD68) = 0;
        (*(s16 *)D_00CBCD78) = 0x26;
        (*(s16 *)D_00CBCD18) = 0xE38E;
        break;
    case 0x43:
        (*(s8 *)D_00CBCAD0) = 0;
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 3;
        (*(s32 *)D_00CBCCD0) = 0;
        (*(s32 *)D_00CBCCF0) = 0;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 8;
        (*(s32 *)D_00CBCCD4) = 0x3FD4DD2F;
        (*(u16 *)D_00CBCD62) = 0;
        (*(s32 *)D_00CBCCF4) = 0x4124E560;
        (*(s16 *)D_00CBCD72) = 0x20;
        (*(s16 *)D_00CBCD12) = 0x8000;
        break;
    case 0x26:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0;
        (*(s32 *)D_00CBCCF0) = 0;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0;
        break;
    case 0x33:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 0xA;
        break;
    case 0x67:
        (*(s8 *)D_00CBCAD3) = 0;
        (*(s8 *)D_00CBCD80) = 1;
        (*(s32 *)D_00CBCCD0) = 0xBD9BA5E3;
        (*(s32 *)D_00CBCCF0) = 0xC0F6B021;
        (*(u16 *)D_00CBCD60) = 0;
        (*(s16 *)D_00CBCD70) = 0x28;
        (*(s16 *)D_00CBCD10) = 0;
        break;
    default:
        *(s8 *)0xCBCAD3 = 0;
        break;
    }
    var_s1 = ((void *)D_00CBCC70);
    (*(u8 *)D_00CBCD8B) = 8;
    var_s2 = 0;
    var_s0 = ((void *)D_00CBCC70);
    do {
        temp_f2 = M2C_FIELD(var_s1, f32 *, 0x60);
        if ((temp_f2 == 0.0f) && (M2C_FIELD(var_s1, f32 *, 0x80) == 0.0f)) {
            (*(u8 *)D_00CBCD8B) -= 1;
        } else {
            temp_f21 = 100.0f * temp_f2;
            temp_f20 = 100.0f * M2C_FIELD(var_s1, f32 *, 0x80);
            M2C_FIELD(var_s0, s16 *, 0xD0) = func_009B34C0(0, 0, temp_f20, -temp_f21);
            temp_f1 = (s32) (0.0f - temp_f21);
            temp_f0 = (s32) (0.0f - temp_f20);
            M2C_FIELD(var_s1, s32 *, 0xB0) = (s32) func_001CD9E0((f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0)));
        }
        var_s2 += 1;
        var_s1 += 4;
        var_s0 += 2;
    } while (var_s2 < 8);
    (*(s8 *)D_00CBCD82) = func_00B42F00();
}
