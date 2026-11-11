/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { s8 b[0x36]; } S36;
typedef struct { s8 b[12]; } S0C;
typedef struct { s8 b[0x18]; } S18;
typedef struct { s32 w[15]; } S3C;
typedef struct { s32 w[32]; } S80;
typedef struct { S36 a[8]; S0C b; S3C c; S80 d; } Blk;
typedef struct { S18 a[8]; } Blk2;
extern void *func_00153FE0(s32, s32);
extern S36 *func_00221280(s32);
extern S0C *Pes6OptionData_GetBlock2F5(void);
extern S3C *Pes6OptionData_GetBlock304(void);
extern S18 *func_00221230(s32);
extern S80 *func_002211A0(void);
extern Blk *D_003EAC78;
extern Blk2 *D_003E9F64;

void func_009303B0(void) {
    u32 i;
    s32 j;
    D_003EAC78 = func_00153FE0(1, 0x278);
    for (i = 0, j = 0; i < 8; i++, j += 0x36) {
        D_003EAC78->a[i] = *func_00221280(i);
    }
    D_003EAC78->b = *Pes6OptionData_GetBlock2F5();
    D_003EAC78->c = *Pes6OptionData_GetBlock304();
    if (D_003E9F64 == NULL) {
        D_003E9F64 = func_00153FE0(1, 0xC0);
        for (i = 0; i < 8; i++) {
            D_003E9F64->a[i] = *func_00221230(i);
        }
        D_003EAC78->d = *func_002211A0();
    }
}
