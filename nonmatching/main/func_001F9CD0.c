/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
u8 func_00151EA0(s32);                              /* extern */
s64 func_001F9920(s32);                             /* extern */
s32 func_00292BD0(void *, M2C_UNK *, s32);          /* extern */
extern char D_00591A90[];
extern char D_00591C09[];
extern char D_00591E00[];
extern char Pes6MatchSquads[];

void func_001F9CD0(void) {
    s32 spA8;
    s32 spAC;
    M2C_UNK *var_a1;
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    M2C_UNK *var_s3;
    M2C_UNK *var_s4;
    M2C_UNK *var_s7;
    f32 temp_f3;
    s32 *var_s6;
    s32 temp_a0_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_s0;
    s32 var_s5;
    s64 temp_fp;
    u8 temp_a0_3;
    u8 temp_v0;
    void *temp_a0;
    void *temp_v1;

    var_a2 = 0;
    var_a1 = ((void *)Pes6MatchSquads);
    do {
        temp_a0 = var_a1 + 0x808C;
        var_a2 += 8;
        temp_v1 = var_a1 + 0x8060;
        M2C_FIELD(var_a1, f32 *, 0x68) = (f32) M2C_FIELD(var_a1, f32 *, 0x94);
        M2C_FIELD(var_a1, f32 *, 0x6C) = (f32) M2C_FIELD(var_a1, f32 *, 0x98);
        M2C_FIELD(var_a1, f32 *, 0x70) = (f32) M2C_FIELD(var_a1, f32 *, 0x9C);
        M2C_FIELD(var_a1, f32 *, 0x74) = (f32) M2C_FIELD(var_a1, f32 *, 0xA0);
        M2C_FIELD(var_a1, f32 *, 0x78) = (f32) M2C_FIELD(var_a1, f32 *, 0xA4);
        M2C_FIELD(var_a1, f32 *, 0x7C) = (f32) M2C_FIELD(var_a1, f32 *, 0xA8);
        M2C_FIELD(var_a1, f32 *, 0x80) = (f32) M2C_FIELD(var_a1, f32 *, 0xAC);
        M2C_FIELD(var_a1, f32 *, 0x84) = (f32) M2C_FIELD(var_a1, f32 *, 0xB0);
        M2C_FIELD(var_a1, f32 *, 0x88) = (f32) M2C_FIELD(var_a1, f32 *, 0xB4);
        M2C_FIELD(var_a1, f32 *, 0x8C) = (f32) M2C_FIELD(var_a1, f32 *, 0xB8);
        M2C_FIELD(var_a1, f32 *, 0x90) = (f32) M2C_FIELD(var_a1, f32 *, 0xBC);
        M2C_FIELD(var_a1, f32 *, 0x6968) = (f32) M2C_FIELD(var_a1, f32 *, 0x6994);
        M2C_FIELD(var_a1, f32 *, 0x696C) = (f32) M2C_FIELD(var_a1, f32 *, 0x6998);
        M2C_FIELD(var_a1, f32 *, 0x6970) = (f32) M2C_FIELD(var_a1, f32 *, 0x699C);
        M2C_FIELD(var_a1, f32 *, 0x6974) = (f32) M2C_FIELD(var_a1, f32 *, 0x69A0);
        M2C_FIELD(var_a1, f32 *, 0x6978) = (f32) M2C_FIELD(var_a1, f32 *, 0x69A4);
        M2C_FIELD(var_a1, f32 *, 0x697C) = (f32) M2C_FIELD(var_a1, f32 *, 0x69A8);
        M2C_FIELD(var_a1, f32 *, 0x6980) = (f32) M2C_FIELD(var_a1, f32 *, 0x69AC);
        M2C_FIELD(var_a1, f32 *, 0x6984) = (f32) M2C_FIELD(var_a1, f32 *, 0x69B0);
        M2C_FIELD(var_a1, f32 *, 0x6988) = (f32) M2C_FIELD(var_a1, f32 *, 0x69B4);
        M2C_FIELD(var_a1, f32 *, 0x698C) = (f32) M2C_FIELD(var_a1, f32 *, 0x69B8);
        M2C_FIELD(var_a1, f32 *, 0x6990) = (f32) M2C_FIELD(var_a1, f32 *, 0x69BC);
        M2C_FIELD(var_a1, f32 *, 0x3B0) = (f32) M2C_FIELD(var_a1, f32 *, 0x3DC);
        M2C_FIELD(var_a1, f32 *, 0x3B4) = (f32) M2C_FIELD(var_a1, f32 *, 0x3E0);
        M2C_FIELD(var_a1, f32 *, 0x3B8) = (f32) M2C_FIELD(var_a1, f32 *, 0x3E4);
        M2C_FIELD(var_a1, f32 *, 0x3BC) = (f32) M2C_FIELD(var_a1, f32 *, 0x3E8);
        M2C_FIELD(var_a1, f32 *, 0x3C0) = (f32) M2C_FIELD(var_a1, f32 *, 0x3EC);
        M2C_FIELD(var_a1, f32 *, 0x3C4) = (f32) M2C_FIELD(var_a1, f32 *, 0x3F0);
        M2C_FIELD(var_a1, f32 *, 0x3C8) = (f32) M2C_FIELD(var_a1, f32 *, 0x3F4);
        M2C_FIELD(var_a1, f32 *, 0x3CC) = (f32) M2C_FIELD(var_a1, f32 *, 0x3F8);
        M2C_FIELD(var_a1, f32 *, 0x3D0) = (f32) M2C_FIELD(var_a1, f32 *, 0x3FC);
        M2C_FIELD(var_a1, f32 *, 0x3D4) = (f32) M2C_FIELD(var_a1, f32 *, 0x400);
        M2C_FIELD(var_a1, f32 *, 0x3D8) = (f32) M2C_FIELD(var_a1, f32 *, 0x404);
        M2C_FIELD(var_a1, f32 *, 0x6CB0) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CDC);
        M2C_FIELD(var_a1, f32 *, 0x6CB4) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CE0);
        M2C_FIELD(var_a1, f32 *, 0x6CB8) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CE4);
        M2C_FIELD(var_a1, f32 *, 0x6CBC) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CE8);
        M2C_FIELD(var_a1, f32 *, 0x6CC0) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CEC);
        M2C_FIELD(var_a1, f32 *, 0x6CC4) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CF0);
        M2C_FIELD(var_a1, f32 *, 0x6CC8) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CF4);
        M2C_FIELD(var_a1, f32 *, 0x6CCC) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CF8);
        M2C_FIELD(var_a1, f32 *, 0x6CD0) = (f32) M2C_FIELD(var_a1, f32 *, 0x6CFC);
        M2C_FIELD(var_a1, f32 *, 0x6CD4) = (f32) M2C_FIELD(var_a1, f32 *, 0x6D00);
        M2C_FIELD(var_a1, f32 *, 0x6CD8) = (f32) M2C_FIELD(var_a1, f32 *, 0x6D04);
        M2C_FIELD(var_a1, f32 *, 0x6F8) = (f32) M2C_FIELD(var_a1, f32 *, 0x724);
        M2C_FIELD(var_a1, f32 *, 0x6FC) = (f32) M2C_FIELD(var_a1, f32 *, 0x728);
        M2C_FIELD(var_a1, f32 *, 0x700) = (f32) M2C_FIELD(var_a1, f32 *, 0x72C);
        M2C_FIELD(var_a1, f32 *, 0x704) = (f32) M2C_FIELD(var_a1, f32 *, 0x730);
        M2C_FIELD(var_a1, f32 *, 0x708) = (f32) M2C_FIELD(var_a1, f32 *, 0x734);
        M2C_FIELD(var_a1, f32 *, 0x70C) = (f32) M2C_FIELD(var_a1, f32 *, 0x738);
        M2C_FIELD(var_a1, f32 *, 0x710) = (f32) M2C_FIELD(var_a1, f32 *, 0x73C);
        M2C_FIELD(var_a1, f32 *, 0x714) = (f32) M2C_FIELD(var_a1, f32 *, 0x740);
        M2C_FIELD(var_a1, f32 *, 0x718) = (f32) M2C_FIELD(var_a1, f32 *, 0x744);
        M2C_FIELD(var_a1, f32 *, 0x71C) = (f32) M2C_FIELD(var_a1, f32 *, 0x748);
        M2C_FIELD(var_a1, f32 *, 0x720) = (f32) M2C_FIELD(var_a1, f32 *, 0x74C);
        M2C_FIELD(var_a1, f32 *, 0x6FF8) = (f32) M2C_FIELD(var_a1, f32 *, 0x7024);
        M2C_FIELD(var_a1, f32 *, 0x6FFC) = (f32) M2C_FIELD(var_a1, f32 *, 0x7028);
        M2C_FIELD(var_a1, f32 *, 0x7000) = (f32) M2C_FIELD(var_a1, f32 *, 0x702C);
        M2C_FIELD(var_a1, f32 *, 0x7004) = (f32) M2C_FIELD(var_a1, f32 *, 0x7030);
        M2C_FIELD(var_a1, f32 *, 0x7008) = (f32) M2C_FIELD(var_a1, f32 *, 0x7034);
        M2C_FIELD(var_a1, f32 *, 0x700C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7038);
        M2C_FIELD(var_a1, f32 *, 0x7010) = (f32) M2C_FIELD(var_a1, f32 *, 0x703C);
        M2C_FIELD(var_a1, f32 *, 0x7014) = (f32) M2C_FIELD(var_a1, f32 *, 0x7040);
        M2C_FIELD(var_a1, f32 *, 0x7018) = (f32) M2C_FIELD(var_a1, f32 *, 0x7044);
        M2C_FIELD(var_a1, f32 *, 0x701C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7048);
        M2C_FIELD(var_a1, f32 *, 0x7020) = (f32) M2C_FIELD(var_a1, f32 *, 0x704C);
        M2C_FIELD(var_a1, f32 *, 0xA40) = (f32) M2C_FIELD(var_a1, f32 *, 0xA6C);
        M2C_FIELD(var_a1, f32 *, 0xA44) = (f32) M2C_FIELD(var_a1, f32 *, 0xA70);
        M2C_FIELD(var_a1, f32 *, 0xA48) = (f32) M2C_FIELD(var_a1, f32 *, 0xA74);
        M2C_FIELD(var_a1, f32 *, 0xA4C) = (f32) M2C_FIELD(var_a1, f32 *, 0xA78);
        M2C_FIELD(var_a1, f32 *, 0xA50) = (f32) M2C_FIELD(var_a1, f32 *, 0xA7C);
        M2C_FIELD(var_a1, f32 *, 0xA54) = (f32) M2C_FIELD(var_a1, f32 *, 0xA80);
        M2C_FIELD(var_a1, f32 *, 0xA58) = (f32) M2C_FIELD(var_a1, f32 *, 0xA84);
        M2C_FIELD(var_a1, f32 *, 0xA5C) = (f32) M2C_FIELD(var_a1, f32 *, 0xA88);
        M2C_FIELD(var_a1, f32 *, 0xA60) = (f32) M2C_FIELD(var_a1, f32 *, 0xA8C);
        M2C_FIELD(var_a1, f32 *, 0xA64) = (f32) M2C_FIELD(var_a1, f32 *, 0xA90);
        M2C_FIELD(var_a1, f32 *, 0xA68) = (f32) M2C_FIELD(var_a1, f32 *, 0xA94);
        M2C_FIELD(var_a1, f32 *, 0x7340) = (f32) M2C_FIELD(var_a1, f32 *, 0x736C);
        M2C_FIELD(var_a1, f32 *, 0x7344) = (f32) M2C_FIELD(var_a1, f32 *, 0x7370);
        M2C_FIELD(var_a1, f32 *, 0x7348) = (f32) M2C_FIELD(var_a1, f32 *, 0x7374);
        M2C_FIELD(var_a1, f32 *, 0x734C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7378);
        M2C_FIELD(var_a1, f32 *, 0x7350) = (f32) M2C_FIELD(var_a1, f32 *, 0x737C);
        M2C_FIELD(var_a1, f32 *, 0x7354) = (f32) M2C_FIELD(var_a1, f32 *, 0x7380);
        M2C_FIELD(var_a1, f32 *, 0x7358) = (f32) M2C_FIELD(var_a1, f32 *, 0x7384);
        M2C_FIELD(var_a1, f32 *, 0x735C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7388);
        M2C_FIELD(var_a1, f32 *, 0x7360) = (f32) M2C_FIELD(var_a1, f32 *, 0x738C);
        M2C_FIELD(var_a1, f32 *, 0x7364) = (f32) M2C_FIELD(var_a1, f32 *, 0x7390);
        M2C_FIELD(var_a1, f32 *, 0x7368) = (f32) M2C_FIELD(var_a1, f32 *, 0x7394);
        M2C_FIELD(var_a1, f32 *, 0xD88) = (f32) M2C_FIELD(var_a1, f32 *, 0xDB4);
        M2C_FIELD(var_a1, f32 *, 0xD8C) = (f32) M2C_FIELD(var_a1, f32 *, 0xDB8);
        M2C_FIELD(var_a1, f32 *, 0xD90) = (f32) M2C_FIELD(var_a1, f32 *, 0xDBC);
        M2C_FIELD(var_a1, f32 *, 0xD94) = (f32) M2C_FIELD(var_a1, f32 *, 0xDC0);
        M2C_FIELD(var_a1, f32 *, 0xD98) = (f32) M2C_FIELD(var_a1, f32 *, 0xDC4);
        M2C_FIELD(var_a1, f32 *, 0xD9C) = (f32) M2C_FIELD(var_a1, f32 *, 0xDC8);
        M2C_FIELD(var_a1, f32 *, 0xDA0) = (f32) M2C_FIELD(var_a1, f32 *, 0xDCC);
        M2C_FIELD(var_a1, f32 *, 0xDA4) = (f32) M2C_FIELD(var_a1, f32 *, 0xDD0);
        M2C_FIELD(var_a1, f32 *, 0xDA8) = (f32) M2C_FIELD(var_a1, f32 *, 0xDD4);
        M2C_FIELD(var_a1, f32 *, 0xDAC) = (f32) M2C_FIELD(var_a1, f32 *, 0xDD8);
        M2C_FIELD(var_a1, f32 *, 0xDB0) = (f32) M2C_FIELD(var_a1, f32 *, 0xDDC);
        M2C_FIELD(var_a1, f32 *, 0x7688) = (f32) M2C_FIELD(var_a1, f32 *, 0x76B4);
        M2C_FIELD(var_a1, f32 *, 0x768C) = (f32) M2C_FIELD(var_a1, f32 *, 0x76B8);
        M2C_FIELD(var_a1, f32 *, 0x7690) = (f32) M2C_FIELD(var_a1, f32 *, 0x76BC);
        M2C_FIELD(var_a1, f32 *, 0x7694) = (f32) M2C_FIELD(var_a1, f32 *, 0x76C0);
        M2C_FIELD(var_a1, f32 *, 0x7698) = (f32) M2C_FIELD(var_a1, f32 *, 0x76C4);
        M2C_FIELD(var_a1, f32 *, 0x769C) = (f32) M2C_FIELD(var_a1, f32 *, 0x76C8);
        M2C_FIELD(var_a1, f32 *, 0x76A0) = (f32) M2C_FIELD(var_a1, f32 *, 0x76CC);
        M2C_FIELD(var_a1, f32 *, 0x76A4) = (f32) M2C_FIELD(var_a1, f32 *, 0x76D0);
        M2C_FIELD(var_a1, f32 *, 0x76A8) = (f32) M2C_FIELD(var_a1, f32 *, 0x76D4);
        M2C_FIELD(var_a1, f32 *, 0x76AC) = (f32) M2C_FIELD(var_a1, f32 *, 0x76D8);
        M2C_FIELD(var_a1, f32 *, 0x76B0) = (f32) M2C_FIELD(var_a1, f32 *, 0x76DC);
        M2C_FIELD(var_a1, f32 *, 0x10D0) = (f32) M2C_FIELD(var_a1, f32 *, 0x10FC);
        M2C_FIELD(var_a1, f32 *, 0x10D4) = (f32) M2C_FIELD(var_a1, f32 *, 0x1100);
        M2C_FIELD(var_a1, f32 *, 0x10D8) = (f32) M2C_FIELD(var_a1, f32 *, 0x1104);
        M2C_FIELD(var_a1, f32 *, 0x10DC) = (f32) M2C_FIELD(var_a1, f32 *, 0x1108);
        M2C_FIELD(var_a1, f32 *, 0x10E0) = (f32) M2C_FIELD(var_a1, f32 *, 0x110C);
        M2C_FIELD(var_a1, f32 *, 0x10E4) = (f32) M2C_FIELD(var_a1, f32 *, 0x1110);
        M2C_FIELD(var_a1, f32 *, 0x10E8) = (f32) M2C_FIELD(var_a1, f32 *, 0x1114);
        M2C_FIELD(var_a1, f32 *, 0x10EC) = (f32) M2C_FIELD(var_a1, f32 *, 0x1118);
        M2C_FIELD(var_a1, f32 *, 0x10F0) = (f32) M2C_FIELD(var_a1, f32 *, 0x111C);
        M2C_FIELD(var_a1, f32 *, 0x10F4) = (f32) M2C_FIELD(var_a1, f32 *, 0x1120);
        M2C_FIELD(var_a1, f32 *, 0x10F8) = (f32) M2C_FIELD(var_a1, f32 *, 0x1124);
        M2C_FIELD(var_a1, f32 *, 0x79D0) = (f32) M2C_FIELD(var_a1, f32 *, 0x79FC);
        M2C_FIELD(var_a1, f32 *, 0x79D4) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A00);
        M2C_FIELD(var_a1, f32 *, 0x79D8) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A04);
        M2C_FIELD(var_a1, f32 *, 0x79DC) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A08);
        M2C_FIELD(var_a1, f32 *, 0x79E0) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A0C);
        M2C_FIELD(var_a1, f32 *, 0x79E4) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A10);
        M2C_FIELD(var_a1, f32 *, 0x79E8) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A14);
        M2C_FIELD(var_a1, f32 *, 0x79EC) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A18);
        M2C_FIELD(var_a1, f32 *, 0x79F0) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A1C);
        M2C_FIELD(var_a1, f32 *, 0x79F4) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A20);
        M2C_FIELD(var_a1, f32 *, 0x79F8) = (f32) M2C_FIELD(var_a1, f32 *, 0x7A24);
        M2C_FIELD(var_a1, f32 *, 0x1418) = (f32) M2C_FIELD(var_a1, f32 *, 0x1444);
        M2C_FIELD(var_a1, f32 *, 0x141C) = (f32) M2C_FIELD(var_a1, f32 *, 0x1448);
        M2C_FIELD(var_a1, f32 *, 0x1420) = (f32) M2C_FIELD(var_a1, f32 *, 0x144C);
        M2C_FIELD(var_a1, f32 *, 0x1424) = (f32) M2C_FIELD(var_a1, f32 *, 0x1450);
        M2C_FIELD(var_a1, f32 *, 0x1428) = (f32) M2C_FIELD(var_a1, f32 *, 0x1454);
        M2C_FIELD(var_a1, f32 *, 0x142C) = (f32) M2C_FIELD(var_a1, f32 *, 0x1458);
        M2C_FIELD(var_a1, f32 *, 0x1430) = (f32) M2C_FIELD(var_a1, f32 *, 0x145C);
        M2C_FIELD(var_a1, f32 *, 0x1434) = (f32) M2C_FIELD(var_a1, f32 *, 0x1460);
        M2C_FIELD(var_a1, f32 *, 0x1438) = (f32) M2C_FIELD(var_a1, f32 *, 0x1464);
        M2C_FIELD(var_a1, f32 *, 0x143C) = (f32) M2C_FIELD(var_a1, f32 *, 0x1468);
        M2C_FIELD(var_a1, f32 *, 0x1440) = (f32) M2C_FIELD(var_a1, f32 *, 0x146C);
        M2C_FIELD(var_a1, f32 *, 0x7D18) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D44);
        M2C_FIELD(var_a1, f32 *, 0x7D1C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D48);
        M2C_FIELD(var_a1, f32 *, 0x7D20) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D4C);
        M2C_FIELD(var_a1, f32 *, 0x7D24) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D50);
        M2C_FIELD(var_a1, f32 *, 0x7D28) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D54);
        M2C_FIELD(var_a1, f32 *, 0x7D2C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D58);
        M2C_FIELD(var_a1, f32 *, 0x7D30) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D5C);
        M2C_FIELD(var_a1, f32 *, 0x7D34) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D60);
        M2C_FIELD(var_a1, f32 *, 0x7D38) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D64);
        M2C_FIELD(var_a1, f32 *, 0x7D3C) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D68);
        M2C_FIELD(var_a1, f32 *, 0x7D40) = (f32) M2C_FIELD(var_a1, f32 *, 0x7D6C);
        M2C_FIELD(var_a1, f32 *, 0x1760) = (f32) M2C_FIELD(var_a1, f32 *, 0x178C);
        M2C_FIELD(var_a1, f32 *, 0x1764) = (f32) M2C_FIELD(var_a1, f32 *, 0x1790);
        M2C_FIELD(var_a1, f32 *, 0x1768) = (f32) M2C_FIELD(var_a1, f32 *, 0x1794);
        M2C_FIELD(var_a1, f32 *, 0x176C) = (f32) M2C_FIELD(var_a1, f32 *, 0x1798);
        M2C_FIELD(var_a1, f32 *, 0x1770) = (f32) M2C_FIELD(var_a1, f32 *, 0x179C);
        M2C_FIELD(var_a1, f32 *, 0x1774) = (f32) M2C_FIELD(var_a1, f32 *, 0x17A0);
        M2C_FIELD(var_a1, f32 *, 0x1778) = (f32) M2C_FIELD(var_a1, f32 *, 0x17A4);
        M2C_FIELD(var_a1, f32 *, 0x177C) = (f32) M2C_FIELD(var_a1, f32 *, 0x17A8);
        M2C_FIELD(var_a1, f32 *, 0x1780) = (f32) M2C_FIELD(var_a1, f32 *, 0x17AC);
        M2C_FIELD(var_a1, f32 *, 0x1784) = (f32) M2C_FIELD(var_a1, f32 *, 0x17B0);
        M2C_FIELD(var_a1, f32 *, 0x1788) = (f32) M2C_FIELD(var_a1, f32 *, 0x17B4);
        temp_f3 = M2C_FIELD(var_a1, f32 *, 0x808C);
        var_a1 += 0x1A40;
        M2C_FIELD(temp_v1, f32 *, 0) = temp_f3;
        M2C_FIELD(temp_v1, f32 *, 4) = (f32) M2C_FIELD(temp_a0, f32 *, 4);
        M2C_FIELD(temp_v1, f32 *, 8) = (f32) M2C_FIELD(temp_a0, f32 *, 8);
        M2C_FIELD(temp_v1, f32 *, 0xC) = (f32) M2C_FIELD(temp_a0, f32 *, 0xC);
        M2C_FIELD(temp_v1, f32 *, 0x10) = (f32) M2C_FIELD(temp_a0, f32 *, 0x10);
        M2C_FIELD(temp_v1, f32 *, 0x14) = (f32) M2C_FIELD(temp_a0, f32 *, 0x14);
        M2C_FIELD(temp_v1, f32 *, 0x18) = (f32) M2C_FIELD(temp_a0, f32 *, 0x18);
        M2C_FIELD(temp_v1, f32 *, 0x1C) = (f32) M2C_FIELD(temp_a0, f32 *, 0x1C);
        M2C_FIELD(temp_v1, f32 *, 0x20) = (f32) M2C_FIELD(temp_a0, f32 *, 0x20);
        M2C_FIELD(temp_v1, f32 *, 0x24) = (f32) M2C_FIELD(temp_a0, f32 *, 0x24);
        M2C_FIELD(temp_v1, f32 *, 0x28) = (f32) M2C_FIELD(temp_a0, f32 *, 0x28);
    } while (var_a2 < 0x20);
    spAC = 0;
    spA8 = 0;
    if (func_00292BD0(temp_a0, var_a1, var_a2) != 0) {
        spAC = 1;
    }
    var_s0 = 0;
    var_s7 = ((void *)Pes6MatchSquads);
    var_s6 = &spA8;
    var_s4 = ((void *)D_00591A90);
    var_s3 = ((void *)D_00591E00);
    do {
        temp_fp = (s64) (func_001F9920(var_s0 & 0xFF) << 0x30) >> 0x30;
        var_s5 = 0;
        var_s2 = var_s7;
        var_s1 = ((void *)Pes6MatchSquads);
loop_6:
        if (temp_fp == 0) {
            temp_v0 = func_00151EA0(5);
            temp_a0_2 = temp_v0 & 0xFF;
            M2C_FIELD(var_s2, u8 *, 0x15) = temp_v0;
            switch (temp_a0_2) {                    /* irregular */
            case 0:
                if (func_00151EA0(3) == 0) {
block_15:
                    M2C_FIELD(var_s2, u8 *, 0x15) = 2U;
                }
                break;
            case 4:
                if (func_00151EA0(3) != 0) {
                    goto block_15;
                }
                break;
            }
            if ((*var_s6 != 0) && (M2C_FIELD(var_s2, u8 *, 0x15) != 4) && ((func_00151EA0(0x64) & 0xFFFF) < 0x32)) {
                M2C_FIELD(var_s2, u8 *, 0x15) = (u8) (M2C_FIELD(var_s2, u8 *, 0x15) + 1);
            }
            temp_a0_3 = M2C_FIELD(var_s2, u8 *, 0x15);
            if ((temp_a0_3 != 4) && (temp_a0_3 != 3)) {

            } else if ((func_00151EA0(((M2C_FIELD(var_s2, u8 *, 0x85) & 7) * 0xA) & 0xFFFF) & 0xFFFF) >= 0x19) {
                M2C_FIELD(var_s2, u8 *, 0x15) = (u8) (M2C_FIELD(var_s2, u8 *, 0x15) - 1);
            }
            if ((*(u8 *)D_00591C09) == 5) {
                if (func_002631D0() != 2) {

                } else if (var_s0 == 1) {
                    M2C_FIELD(var_s1, u8 *, 0x6915) = (u8) M2C_FIELD(var_s1, u8 *, 0x15);
                }
            }
        }
        var_s5 += 1;
        var_s2 += 0x348;
        var_s1 += 0x348;
        if (var_s5 < 0x20) {
            goto loop_6;
        }
        if ((*(u8 *)D_00591C09) == 7) {
            var_a2_2 = 0;
            do {
                if (var_a2_2 < 0xB) {
                    M2C_FIELD((var_s4 + var_a2_2), s8 *, 0x27) = (s8) (0xB - var_a2_2);
                } else {
                    M2C_FIELD((var_s4 + var_a2_2), s8 *, 0x27) = (s8) (var_a2_2 + 1);
                }
                var_a2_2 += 1;
            } while (var_a2_2 < 0x20);
        }
        M2C_FIELD(var_s4, s8 *, 0x52) = 0xFF;
        var_s0 += 1;
        M2C_FIELD(var_s4, s8 *, 0x53) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x54) = 0xFF;
        var_s7 += 0x6900;
        M2C_FIELD(var_s4, s8 *, 0x55) = 0xFF;
        var_s6 += 4;
        M2C_FIELD(var_s4, s8 *, 0x5A) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x5B) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x5C) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x5D) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x62) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x63) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x64) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x65) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x6A) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x6B) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x6C) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x6D) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x72) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x73) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x74) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x75) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x7A) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x7B) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x7C) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x7D) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x82) = 0xFF;
        M2C_FIELD(var_s3, s8 *, 0xFA) = 0;
        M2C_FIELD(var_s4, s8 *, 0x83) = 0xFF;
        M2C_FIELD(var_s3, s8 *, 0xF6) = 0;
        M2C_FIELD(var_s4, s8 *, 0x84) = 0xFF;
        M2C_FIELD(var_s4, s8 *, 0x85) = 0xFF;
        M2C_FIELD(var_s3, s8 *, 0xF8) = 0;
        var_s4 += 0x8B;
        var_s3 += 1;
    } while (var_s0 < 2);
}
