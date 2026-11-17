/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001038E8(void *a0, s32 a1, s64 a2);
extern s32 func_001D2F90(s32 a0, void *a1, void *a2, void *a3);
extern s32 func_001D4B30(void *a0, s32 a1);
extern char D_0052AB01[];
extern char D_0052AB38[];
extern char D_0052AB40[];

void func_001D2470(u8 *arg0, void *arg1) {
    u8 *P[3];
    s32 A[12];
    f32 F[3];
    s64 spD0;
    f32 spF4;
    f32 spF8;
    f32 spFC;
    u16 *s3;
    s32 i, k, mode;
    s32 *s2;
    f32 *fp;
    u8 **pr;

    s3 = *(u16 **)(arg0 + 0xC);
    func_001038E8(arg1, 8, 5);
    func_001038E8(arg1, 0x14, *(s64 *)D_0052AB40);
    func_001038E8(arg1, 6, *(s64 *)D_0052AB38);
    if (!(*(u16 *)(arg0 + 2) > 0)) return;
    if (!(*(u16 *)(arg0 + 2) > 0)) return;
    i = 0;
    do {
        if (s3 != 0) {
            P[0] = *(u8 **)(arg0 + 8);
            P[0] += s3[0] * 0x18;
            P[1] = *(u8 **)(arg0 + 8);
            P[1] += s3[1] * 0x18;
            P[2] = *(u8 **)(arg0 + 8);
            P[2] += s3[2] * 0x18;
            s3 += 3;
        } else {
            P[0] = *(u8 **)(arg0 + 8) + i * 0x18;
            P[1] = *(u8 **)(arg0 + 8) + (i + 1) * 0x18;
            P[2] = *(u8 **)(arg0 + 8) + (i + 2) * 0x18;
        }
        if (func_001D2F90(3, P, A, F) == 0) {
            mode = 0;
        } else if (*(u8 *)D_0052AB01 != 1) {
            mode = 3;
        } else {
            mode = 0;
            if (func_001D4B30(A, 0) == 1) mode |= 1;
        }
        if (mode != 0) {
            s2 = A;
            fp = F;
            pr = P;
            for (k = 0; k < 3; k++) {
                spF8 = *(f32 *)(*pr + 0x14) * *fp;
                spFC = *(f32 *)(*pr + 0x10) * *fp;
                func_001038E8(arg1, 2, (s64)*(u32 *)&spFC | ((s64)*(u32 *)&spF8 << 32));
                *(u8 *)&spD0 = arg0[4] == 0xFF ? 0x80 : arg0[4] >> 1;
                *((u8 *)&spD0 + 1) = arg0[5] == 0xFF ? 0x80 : arg0[5] >> 1;
                *((u8 *)&spD0 + 2) = arg0[6] == 0xFF ? 0x80 : arg0[6] >> 1;
                *((u8 *)&spD0 + 3) = arg0[7] == 0xFF ? 0x80 : arg0[7] >> 1;
                spF4 = *fp;
                *(s32 *)((u8 *)&spD0 + 4) = *(s32 *)&spF4;
                func_001038E8(arg1, 1, spD0);
                func_001038E8(arg1, 4, ((s64)s2[3] << 56) | (((s64)s2[2] << 32) | (s2[0] | ((s64)s2[1] << 16))));
                fp++;
                s2 += 4;
                pr++;
            }
        }
        i++;
    } while (i < *(u16 *)(arg0 + 2));
}
