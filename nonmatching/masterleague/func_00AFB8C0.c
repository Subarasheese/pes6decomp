/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022C1E0(void);
extern char D_00B7D540[];
extern char D_00B7D580[];
extern char D_00B7D581[];
extern char D_00B7D582[];
extern char D_00B7D583[];
extern char D_00B7D584[];
extern char D_00B7D585[];
extern char D_00B7D586[];
extern char D_00B7D587[];
extern char D_00B7D590[];

void func_00AFB8C0(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a0_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v1;
    void *temp_a2;
    void *temp_a3;
    void *temp_a4;
    void *temp_a4_2;
    void *temp_a5;
    void *temp_a5_2;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_a7;
    void *temp_a7_2;
    void *temp_t0;
    void *temp_t1;
    void *temp_v0;
    void *temp_v1;

    var_s0 = 0;
    temp_v0 = func_0022C1E0();
    if (temp_v0 != NULL) {
        var_a1 = 0;
        var_a0 = ((void *)D_00B7D540);
        do {
            var_a2 = 0;
loop_3:
            temp_v1 = var_a0 + var_a2;
            temp_t1 = temp_v0 + (var_s0 + 2);
            M2C_FIELD((temp_v0 + var_s0), u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 0);
            temp_t0 = temp_v0 + (var_s0 + 3);
            temp_a6 = temp_v0 + (var_s0 + 5);
            temp_a7 = temp_v0 + (var_s0 + 4);
            M2C_FIELD((temp_v0 + (var_s0 + 1)), u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 1);
            temp_a5 = temp_v0 + (var_s0 + 6);
            var_a2 += 8;
            temp_a4 = temp_v0 + (var_s0 + 7);
            var_s0 += 8;
            M2C_FIELD(temp_t1, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 2);
            M2C_FIELD(temp_t0, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 3);
            M2C_FIELD(temp_a7, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 4);
            M2C_FIELD(temp_a6, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 5);
            M2C_FIELD(temp_a5, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 6);
            M2C_FIELD(temp_a4, u8 *, 0xC4) = (u8) M2C_FIELD(temp_v1, u8 *, 7);
            if (var_a2 < 0x10) {
                goto loop_3;
            }
            var_a1 += 1;
            var_a0 += 0x10;
        } while (var_a1 < 4);
        M2C_FIELD((var_s0 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D580);
        M2C_FIELD((var_s0 + 1 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D581);
        M2C_FIELD((var_s0 + 2 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D582);
        M2C_FIELD((var_s0 + 3 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D583);
        var_v1 = 0;
        var_s0_2 = var_s0 + 8;
        var_a0_2 = ((void *)D_00B7D590);
        M2C_FIELD((var_s0 + 4 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D584);
        M2C_FIELD((var_s0 + 5 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D585);
        M2C_FIELD((var_s0 + 6 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D586);
        M2C_FIELD((var_s0 + 7 + temp_v0), u8 *, 0xC4) = (u8) (*(u8 *)D_00B7D587);
        do {
            temp_a7_2 = temp_v0 + (var_s0_2 + 2);
            M2C_FIELD((temp_v0 + var_s0_2), u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 0);
            temp_a6_2 = temp_v0 + (var_s0_2 + 3);
            temp_a4_2 = temp_v0 + (var_s0_2 + 5);
            temp_a5_2 = temp_v0 + (var_s0_2 + 4);
            M2C_FIELD((temp_v0 + (var_s0_2 + 1)), u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 1);
            temp_a3 = temp_v0 + (var_s0_2 + 6);
            var_v1 += 8;
            temp_a2 = temp_v0 + (var_s0_2 + 7);
            var_s0_2 += 8;
            M2C_FIELD(temp_a7_2, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 2);
            M2C_FIELD(temp_a6_2, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 3);
            M2C_FIELD(temp_a5_2, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 4);
            M2C_FIELD(temp_a4_2, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 5);
            M2C_FIELD(temp_a3, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 6);
            M2C_FIELD(temp_a2, u8 *, 0xC4) = (u8) M2C_FIELD(var_a0_2, u8 *, 7);
            var_a0_2 += 8;
        } while (var_v1 < 0x10);
        M2C_FIELD((var_s0_2 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 1 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 2 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 3 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 4 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 5 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 6 + temp_v0), s8 *, 0xC4) = 0xFF;
        M2C_FIELD((var_s0_2 + 7 + temp_v0), s8 *, 0xC4) = 0xFF;
    }
}
