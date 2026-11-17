/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_003AB7A0[];
extern char D_003AB8A0[];
extern s32 D_003D9C70[];
extern s32 func_00151EA0(s32 a0, s32 a1);
extern s32 func_00BBB8C0(s32 a0, s32 a1, s32 a2, s32 a3);

void func_00274CE0(u8 *p, s32 mode)
{
    f32 big[64];
    s32 *ta[14];
    s32 *tb[14];
    s32 cnt[14];
    f32 *srcf = (f32 *)D_003AB7A0;
    s32 i, j, k, n, sum, r, cum;
    s32 *w;
    s32 *c;

    big[61] = srcf[1];
    big[60] = srcf[0];
    big[63] = srcf[3];
    big[62] = srcf[2];
    big[57] = srcf[5];
    big[56] = srcf[4];
    big[59] = srcf[7];
    big[58] = srcf[6];
    big[52] = srcf[8];
    big[53] = srcf[9];
    big[55] = srcf[11];
    big[54] = srcf[10];
    big[50] = srcf[14];
    big[48] = srcf[12];
    big[46] = srcf[18];
    big[49] = srcf[13];
    big[42] = srcf[22];
    big[51] = srcf[15];
    big[44] = srcf[16];
    big[45] = srcf[17];
    big[47] = srcf[19];
    big[40] = srcf[20];
    big[41] = srcf[21];
    big[36] = srcf[24];
    big[43] = srcf[23];
    big[38] = srcf[26];
    big[37] = srcf[25];
    big[32] = srcf[28];
    big[39] = srcf[27];
    big[34] = srcf[30];
    big[33] = srcf[29];
    big[28] = srcf[32];
    big[35] = srcf[31];
    big[30] = srcf[34];
    big[29] = srcf[33];
    big[24] = srcf[36];
    big[31] = srcf[35];
    big[26] = srcf[38];
    big[25] = srcf[37];
    big[20] = srcf[40];
    big[27] = srcf[39];
    big[22] = srcf[42];
    big[21] = srcf[41];
    big[16] = srcf[44];
    big[23] = srcf[43];
    big[18] = srcf[46];
    big[17] = srcf[45];
    big[8] = srcf[48];
    big[19] = srcf[47];
    big[10] = srcf[50];
    big[9] = srcf[49];
    big[12] = srcf[52];
    big[11] = srcf[51];
    big[1] = srcf[57];
    big[0] = srcf[56];
    big[3] = srcf[59];
    big[2] = srcf[58];
    big[4] = srcf[60];
    ta[0] = (s32 *)&big[60];
    ta[1] = (s32 *)&big[60];
    ta[2] = (s32 *)&big[52];
    ta[3] = (s32 *)&big[52];
    ta[4] = (s32 *)&big[44];
    ta[5] = (s32 *)&big[44];
    ta[6] = (s32 *)&big[36];
    ta[7] = (s32 *)&big[36];
    ta[8] = (s32 *)&big[28];
    ta[9] = (s32 *)&big[28];
    ta[10] = (s32 *)&big[20];
    ta[11] = (s32 *)&big[20];
    ta[12] = (s32 *)&big[8];
    ta[13] = (s32 *)&big[8];
    tb[0] = (s32 *)&big[56];
    tb[1] = (s32 *)&big[56];
    tb[2] = (s32 *)&big[48];
    tb[3] = (s32 *)&big[48];
    tb[4] = (s32 *)&big[40];
    tb[5] = (s32 *)&big[40];
    tb[6] = (s32 *)&big[32];
    tb[7] = (s32 *)&big[32];
    tb[8] = (s32 *)&big[24];
    tb[9] = (s32 *)&big[24];
    tb[10] = (s32 *)&big[16];
    tb[11] = (s32 *)&big[16];
    tb[12] = (s32 *)&big[0];
    tb[13] = (s32 *)&big[0];
    cnt[0] = ((s32 *)D_003AB8A0)[0];
    cnt[1] = ((s32 *)D_003AB8A0)[1];
    cnt[2] = ((s32 *)D_003AB8A0)[2];
    cnt[3] = ((s32 *)D_003AB8A0)[3];
    cnt[4] = ((s32 *)D_003AB8A0)[4];
    cnt[5] = ((s32 *)D_003AB8A0)[5];
    cnt[6] = ((s32 *)D_003AB8A0)[6];
    cnt[7] = ((s32 *)D_003AB8A0)[7];
    cnt[8] = ((s32 *)D_003AB8A0)[8];
    cnt[9] = ((s32 *)D_003AB8A0)[9];
    cnt[10] = ((s32 *)D_003AB8A0)[10];
    cnt[11] = ((s32 *)D_003AB8A0)[11];
    cnt[12] = ((s32 *)D_003AB8A0)[12];
    cnt[13] = ((s32 *)D_003AB8A0)[13];

    i = 0;
    for (j = 0; j < 14; j++)
        if ((s32)p[0] == D_003D9C70[j]) {
            i = j;
            break;
        }

    n = cnt[i];
    c = ta[i];
    w = tb[i];
    sum = 0;
    for (j = 0; j < n; j++)
        sum += w[j];

    if (mode == 0)
        r = func_00BBB8C0(sum, mode, n, w[n - 1]);
    else
        r = func_00151EA0(sum & 0xFFFF, mode) & 0xFFFF;

    cum = 0;
    for (j = 0; j < n; j++) {
        cum += w[j];
        if (r < cum) {
            k = j;
            break;
        }
    }
    p[1] = c[k];

    for (j = 0; j < n; j++)
        if ((s32)p[1] == c[j])
            return;
    p[1] = c[0];
}
