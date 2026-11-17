/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef union { u16 h; s32 w; } Alias16;
void Pes6Ball_IntegratePhysics(s32, void *, void *, void *, void *, void *, void *, void *, f32, void *, void *, void *, s64);
extern f32 *D_003E74CC;
extern char *Pes6Ball_Current;

void func_00284EA0(s32 arg0) {
    s32 *var_s0;
    s32 *var_s5;
    s32 *var_s6;
    s32 *var_s2;
    s32 *var_s3;
    s32 var_s4;
    Alias16 *var_s1;

    u32 bits = 0x3F800000;
    f32 one = *(f32 *)&bits;
    var_s4 = 0;
    *(f32 *)(Pes6Ball_Current + 0x1454) = *(f32 *)(Pes6Ball_Current + 0x10);
    *(f32 *)(Pes6Ball_Current + 0x1458) = *(f32 *)(Pes6Ball_Current + 0x14);
    *(f32 *)(Pes6Ball_Current + 0x145C) = *(f32 *)(Pes6Ball_Current + 0x18);
    *(u16 *)(Pes6Ball_Current + 0x1450) = *(u16 *)(Pes6Ball_Current + 0x58);
    *(u16 *)(Pes6Ball_Current + 0x144C) = *(u16 *)(Pes6Ball_Current + 0x6A);
    *(u8 *)(Pes6Ball_Current + 0x144E) = *(u8 *)(Pes6Ball_Current + 0x6C);
    *(s32 *)(Pes6Ball_Current + 0x1444) = *(s32 *)(Pes6Ball_Current + 0x50);
    *(f32 *)(Pes6Ball_Current + 0x1448) = *(f32 *)(Pes6Ball_Current + 0x30);
    *(u8 *)(Pes6Ball_Current + 0x144F) = *(u8 *)(Pes6Ball_Current + 0x62);
    *(s32 *)(Pes6Ball_Current + 0x1440) = *(s32 *)(Pes6Ball_Current + 0x74);
    var_s1 = (Alias16 *)(Pes6Ball_Current + 0xEFC);
    var_s3 = (s32 *)(Pes6Ball_Current + 0xFC);
    var_s2 = (s32 *)(Pes6Ball_Current + 0x10BC);
    var_s0 = (s32 *)(Pes6Ball_Current + 0x47C);
    var_s5 = (s32 *)(Pes6Ball_Current + 0x7FC);
    var_s6 = (s32 *)(Pes6Ball_Current + 0xB7C);
    if (arg0 > 0) {
        do {
            Pes6Ball_IntegratePhysics(1, Pes6Ball_Current + 0x144F, Pes6Ball_Current + 0x1444, Pes6Ball_Current + 0x1448, Pes6Ball_Current + 0x1454, Pes6Ball_Current + 0x1458, Pes6Ball_Current + 0x145C, Pes6Ball_Current + 0x1450, one * *D_003E74CC, Pes6Ball_Current + 0x1440, Pes6Ball_Current + 0x144C, Pes6Ball_Current + 0x144E, 0);
            var_s4 += 1;
            var_s1->h = *(u16 *)(Pes6Ball_Current + 0x1450);
            var_s1 = (Alias16 *)((char *)var_s1 + 2);
            *var_s3++ = *(s32 *)(Pes6Ball_Current + 0x1444);
            *var_s2++ = (s32) *(f32 *)(Pes6Ball_Current + 0x1448);
            *var_s0++ = *(s32 *)(Pes6Ball_Current + 0x1454);
            *var_s5++ = *(s32 *)(Pes6Ball_Current + 0x1458);
            *var_s6++ = *(s32 *)(Pes6Ball_Current + 0x145C);
        } while (var_s4 < arg0);
    }
}
