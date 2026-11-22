/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 Pes6Job_CopyPayloadOut(void *, void *);
extern int Pes6Job_SetField4(void *, void (*)(void), char *);
extern int func_00333600(int);
extern void *Pes6Job_Create(s32, void (*)(void), s32, char *);
extern char D_003E61A8[];
extern void func_00343880(void);
extern void func_00343C90(void);

s32 func_00343A10(void *arg0) {
    int value;
    s32 t;
    int value2;
    value2 = 6;
    if ((*((u8 *)(((s8 *)(*((u8 **)(((s8 *)arg0) + 0x3C)))) + 8))) != 0) {
        Pes6Job_SetField4(arg0, func_00343C90, D_003E61A8);
        return 0;
    }
    t = func_00333600(4);
    value = func_00333600(value2);
    if ((value | t) == 0) {
        return 0;
    }
    Pes6Job_CopyPayloadOut(
        Pes6Job_Create(0x8000001A, func_00343880, *((s32 *)(((s8 *)arg0) + 8)), D_003E61A8), arg0);
    Pes6Job_SetField4(arg0, func_00343C90, D_003E61A8);
    return 1;
}
