/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern int Pes6Job_SetField4(void *, void *, void *);
extern s32 func_00333370(void);
extern s32 func_0030F140(void);
extern s32 Pes6Job_GetArg(void *, s32);
extern s32 Pes6Job_CopyPayloadOut(void *, void *);
extern s32 Pes6Job_SetArg(void *, s32, s32);
extern void *Pes6Job_Create(u32, void *, s32, void *);
extern s32 func_00341910(s32, s32, s32);
extern char D_003E1508[];
extern s8 D_003E9F08;
extern char func_00315570[];
extern char func_00319010[];
extern char func_00319240[];

s32 func_003193D0(void *arg0) {
    void *s0;

    s0 = M2C_FIELD(arg0, void **, 0x3C);
    if (Pes6Job_GetArg(arg0, 0) == 0 && func_00333370() == 0 && M2C_FIELD(s0, u8 *, 6) == 0) {
        if (M2C_FIELD(s0, u8 *, 7) == 0) {
            Pes6Job_CopyPayloadOut(Pes6Job_Create(0x8000002E, func_00319010, M2C_FIELD(arg0, s32 *, 8), D_003E1508), arg0);
            Pes6Job_SetArg(arg0, 0, 1);
        } else if (func_00341910(1, 5, 0xA) != 0) {
            D_003E9F08 = 1;
            Pes6Job_SetField4(arg0, func_00319240, D_003E1508);
        } else {
            D_003E9F08 = 1;
            Pes6Job_SetArg(arg0, 0, 1);
        }
    }
    if (func_0030F140() == 0) {
        return 0;
    }
    if (M2C_FIELD(s0, u8 *, 8) == 0 && M2C_FIELD(s0, u8 *, 6) == 0 && M2C_FIELD(s0, u8 *, 7) == 0) {
        Pes6Job_CopyPayloadOut(Pes6Job_Create(0x8000002F, func_00315570, M2C_FIELD(arg0, s32 *, 8), D_003E1508), arg0);
    }
    Pes6Job_SetField4(arg0, func_00319240, D_003E1508);
    return 1;
}
