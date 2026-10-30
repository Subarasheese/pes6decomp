/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAFCC;
extern void *D_003EAFE8;
extern char D_00CE5660[];
extern char D_00CE5664[];
extern char D_00CE5666[];
extern void *D_00CE5668;
extern void *D_00CE566C;
extern char D_00CE5670[];
extern char D_00CE5672[];
extern char D_00CE5674[];
extern char D_00CE5676[];
extern char D_00CE5678[];
extern char D_00CE567A[];
extern char D_00CE567C[];
extern char D_00CE567E[];
extern void *D_00CE5680;

void func_00BD1170(void *arg0) {
    s32 temp_a7;
    void *temp_a0;
    void *temp_a6;
    void *temp_t0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 0x44);
    D_003EAFCC = temp_a0;
    temp_v1 = temp_a0 + M2C_FIELD(temp_a0, s32 *, 8);
    (*(s16 *)D_00CE5670) = M2C_FIELD(temp_v1, s16 *, 0);
    (*(s16 *)D_00CE5672) = M2C_FIELD(temp_v1, s16 *, 2);
    (*(s16 *)D_00CE5674) = M2C_FIELD(temp_v1, s16 *, 4);
    (*(s16 *)D_00CE5676) = M2C_FIELD(temp_v1, s16 *, 6);
    (*(s16 *)D_00CE5678) = M2C_FIELD(temp_v1, s16 *, 8);
    (*(s16 *)D_00CE567A) = M2C_FIELD(temp_v1, s16 *, 0xA);
    (*(s16 *)D_00CE567C) = M2C_FIELD(temp_v1, s16 *, 0xC);
    (*(s16 *)D_00CE567E) = M2C_FIELD(temp_v1, s16 *, 0xE);
    D_00CE5680 = temp_v1 + 0x10;
    temp_t0 = temp_a0 + M2C_FIELD(temp_a0, s32 *, 0xC);
    temp_a7 = M2C_FIELD(temp_t0, s32 *, 0);
    temp_a6 = temp_t0 + 4 + 4;
    (*(s32 *)D_00CE5660) = temp_a7;
    (*(s16 *)D_00CE5664) = M2C_FIELD(temp_t0, s16 *, 4);
    (*(s16 *)D_00CE5666) = M2C_FIELD(temp_t0, s16 *, 6);
    D_00CE5668 = temp_a6;
    D_00CE566C = temp_a6 + (temp_a7 * 8);
    D_003EAFE8 = temp_a0 + M2C_FIELD(temp_a0, s32 *, 0x10);
}
