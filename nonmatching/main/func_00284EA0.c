/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK Pes6Ball_IntegratePhysics(M2C_UNK, void *, void *, void *, void *, void *, void *, void *, f32, s64, s64, s64, s64); /* extern */
extern f32 *D_003E74CC;
extern void *Pes6Ball_Current;

void func_00284EA0(s32 arg0) {
    f32 *var_s0;
    f32 *var_s5;
    f32 *var_s6;
    s32 *var_s2;
    s32 *var_s3;
    s32 var_s4;
    u16 *var_s1;

    var_s4 = 0;
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x14);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x1450) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
    M2C_FIELD(Pes6Ball_Current, u16 *, 0x144C) = (u16) M2C_FIELD(Pes6Ball_Current, u16 *, 0x6A);
    M2C_FIELD(Pes6Ball_Current, u8 *, 0x144E) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x6C);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448) = (f32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    M2C_FIELD(Pes6Ball_Current, u8 *, 0x144F) = (u8) M2C_FIELD(Pes6Ball_Current, u8 *, 0x62);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x1440) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
    var_s1 = Pes6Ball_Current + 0xEFC;
    var_s3 = Pes6Ball_Current + 0xFC;
    var_s2 = Pes6Ball_Current + 0x10BC;
    var_s0 = Pes6Ball_Current + 0x47C;
    var_s5 = Pes6Ball_Current + 0x7FC;
    var_s6 = Pes6Ball_Current + 0xB7C;
    if ((arg0 > 0) && (arg0 > 0)) {
        do {
            Pes6Ball_IntegratePhysics(1, Pes6Ball_Current + 0x144F, Pes6Ball_Current + 0x1444, Pes6Ball_Current + 0x1448, Pes6Ball_Current + 0x1454, Pes6Ball_Current + 0x1458, Pes6Ball_Current + 0x145C, Pes6Ball_Current + 0x1450, 1.0f * *D_003E74CC, (s64) (Pes6Ball_Current + 0x1440), (s64) (Pes6Ball_Current + 0x144C), (s64) (Pes6Ball_Current + 0x144E), 0);
            var_s4 += 1;
            *var_s1 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x1450);
            var_s1 += 2;
            *var_s3 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x1444);
            var_s3 += 4;
            *var_s2 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x1448);
            var_s2 += 4;
            *var_s0 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1454);
            var_s0 += 4;
            *var_s5 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x1458);
            var_s5 += 4;
            *var_s6 = M2C_FIELD(Pes6Ball_Current, f32 *, 0x145C);
            var_s6 += 4;
        } while (var_s4 < arg0);
    }
}
