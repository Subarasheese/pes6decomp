/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 Pes6Job_CopyPayloadOut(void *, void *);
extern s32 func_00338530(s32);
extern int Pes6Job_SetField4(void *, char *, char *);
void *Pes6Job_Create(M2C_UNK, char *, M2C_UNK, char *);
extern char D_003E17B0[];
extern char func_0032D340[];
extern char func_0032DE80[];

s32 func_0032DDF0(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 0x28) == 0) {
        return 0;
    }
    if (func_00338530(0x8000000B) == 0) {
        Pes6Job_CopyPayloadOut(Pes6Job_Create(0x8000000B, func_0032D340, 5, D_003E17B0), arg0);
    }
    Pes6Job_SetField4(arg0, func_0032DE80, D_003E17B0);
    return 1;
}
