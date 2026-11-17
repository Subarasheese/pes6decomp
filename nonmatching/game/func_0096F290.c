/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591E4F[], D_00591E50[], D_00591F24[], D_005926F2[], D_00591DC4[], D_00591E67[], D_00CB531C[], D_00CB5320[];
extern s32 func_0090B2F0();
extern s32 func_0090BA30();
extern s32 func_00912530();
extern s32 func_00912D50();
extern s32 func_009143D0();
extern s32 func_00944A50();
extern s32 func_00953400();
extern s32 func_0096B070();
extern s32 func_009832C0();
extern s32 func_0098B050();
extern s32 func_0098B5B0();
extern s32 func_0098BB00();
extern s32 func_0098BE90();
extern s32 func_0098BF30();
extern s32 func_0098C460();
extern s32 func_0098CCF0();
extern s32 func_0098CF40();
extern s32 func_0098D350();
extern s32 func_0098D930();
extern s32 func_0098DCD0();
extern s32 func_0098E4F0();
extern s32 func_00A07B40();
extern s32 func_00C23AA0();
extern s32 func_00C23BF0();
extern s32 func_00C5FEF0();
extern s32 func_00C603E0();
extern s32 func_00C60F70();
extern s32 func_00C61260();
extern s32 func_00C61C50();
extern s32 func_00C61CD0();
extern s32 func_00C624F0();
extern s32 func_00C62630();
extern s32 func_00C62C50();
extern s32 func_00C63120();
extern s32 func_00C63BD0();
extern s32 func_00C642D0();
extern s32 func_00C648C0();
extern s32 func_00C64B50();
extern s32 func_00C64D40();
extern s32 func_00C65990();
extern s32 func_00C65E50();
extern s32 func_00C661A0();
extern s32 func_00C666C0();
extern s32 func_00C66810();
extern s32 func_00C66F20();
extern s32 func_00C67230();
extern s32 func_00C67430();
extern s32 func_00C67520();
extern s32 func_00C677D0();
extern s32 func_00C679C0();
extern s32 func_00C67AE0();
extern s32 func_00C68AA0();
extern s32 func_00C68AF0();
extern s32 func_00C68B80();
extern s32 func_00C68BF0();
extern s32 func_00C68E00();
extern s32 func_00C69BB0();
extern s32 func_00C6A440();

void func_0096F290(u8 *p)
{
    u32 t;
    u32 idx = p[0x13] << 1;
    s32 st;
    if (p[0] == *(u8 *)(D_00591E4F + idx)) {
        func_00953400(p, p[0], idx);
        func_00944A50(p);
        goto L304;
    }
    if (p[0] == *(u8 *)(D_00591E50 + idx) && p[0x16] != 7 && *(u32 *)(p + 0x114) < 0x400)
        func_00953400(p, p[0x16], idx);
L304:
    if (p[0x1DD] == 0x37) return;
    if (p[0x16] != 0x10 && p[0x16] != 0x15 && p[0x16] != 7 && p[0x16] != 0x2B) {
        if (p[0x16] == 0x35 || p[0x16] == 0xFD) return;
        if (*(u8 *)D_00591F24 != 2 && *(u8 *)D_00591F24 != 7) {
            func_0090BA30(p);
            p[0x201] = 4;
        }
    }
    if (*(s32 *)(p + 0xB0) != 0) *(s32 *)(p + 0xB0) = 0;
    if (*(s32 *)(p + 0xB4) != 0) *(s32 *)(p + 0xB4) = 0;
    st = func_0096B070(p);
    if (st == 2) return;
    if (st == 1) {
        func_00C23BF0(p);
    } else {
        if (p[0x16] == 7) func_0090B2F0(p, 0xFF);
    }
    func_009143D0(p, 1, 0);
    func_009143D0(p, 0, 0);
    if (p[0x1DD] != 0x27) func_009143D0(p, 3, 0);
    if (func_00A07B40() != 0) {
        if ((u32)p[0] % *(u8 *)D_005926F2 == *(u32 *)D_00591DC4 % *(u8 *)D_005926F2) {
            if (*(u8 *)(D_00591E67 + p[0x12]) == 0) func_00912D50(p, 0);
            else func_00912530(p, 0);
            *(s32 *)(p + 0x74) = *(s32 *)D_00CB531C;
            *(s32 *)(p + 0x78) = *(s32 *)D_00CB5320;
        }
    }
    if (p[0x16] == 7) {
        if (func_00C23AA0(p) != 0) return;
    }
    if (p[0x1DD] == 0) {
        func_00C6A440(p);
    }
    t = p[0x1DD];
    if (t >= 0x38) { func_009832C0(p, 0); return; }
    if (t == 1) { func_00C69BB0(p); return; }
    if (t == 2) { func_00C68E00(p); return; }
    if (t == 3) { func_00C68BF0(p); return; }
    if (t == 4) { func_00C68B80(p); return; }
    if (t == 5) { func_00C68AF0(p); return; }
    if (t == 6) { func_00C68AA0(p); return; }
    if (t == 7) { func_00C65990(p); return; }
    if (t == 8) { func_00C66F20(p); return; }
    if (t == 9) { func_00C679C0(p); return; }
    if (t == 10) { func_00C67AE0(p); return; }
    if (t == 11) { func_00C677D0(p); return; }
    if (t == 12) { func_00C661A0(p); return; }
    if (t == 13) { func_00C65E50(p); return; }
    if (t == 14) { func_00C666C0(p); return; }
    if (t == 15) { func_00C64D40(p); return; }
    if (t == 16) { func_00C64B50(p); return; }
    if (t == 17) { func_00C63BD0(p); return; }
    if (t == 18) { func_00C61260(p); return; }
    if (t == 19) { func_00C63120(p); return; }
    if (t == 20) { func_00C62C50(p); return; }
    if (t == 22) { func_00C642D0(p); return; }
    if (t == 23) { func_00C66810(p); return; }
    if (t == 24) { func_00C67520(p); return; }
    if (t == 25) { func_00C67430(p); return; }
    if (t == 26) { func_00C67230(p); return; }
    if (t == 27) { func_00C648C0(p); return; }
    if (t == 28) { func_00C61CD0(p); return; }
    if (t == 29) { func_00C62630(p); return; }
    if (t == 31) { func_00C624F0(p); return; }
    if (t == 32) { func_00C60F70(p); return; }
    if (t == 33) { func_00C5FEF0(p); return; }
    if (t == 34) { func_00C603E0(p); return; }
    if (t == 36) { func_0098D350(p); return; }
    if (t == 37) { func_0098BE90(p); return; }
    if (t == 39) { func_0098C460(p); return; }
    if (t == 40) { func_0098BF30(p); return; }
    if (t == 41) { func_0098B5B0(p); return; }
    if (t == 43) { func_0098CCF0(p); return; }
    if (t == 44) { func_0098CCF0(p); return; }
    if (t == 45) { func_0098BB00(p); return; }
    if (t == 46) { func_0098D930(p); return; }
    if (t == 47) { func_0098E4F0(p); return; }
    if (t == 49) { func_0098DCD0(p); return; }
    if (t == 51) { func_0098B050(p); return; }
    if (t == 52) { func_00C61C50(p); return; }
    if (t == 53) { func_0098CF40(p); return; }
    if (t == 55) return;
    func_009832C0(p, 0);
}
