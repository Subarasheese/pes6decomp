/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int func_00333600(int);
extern void Pes6Job_SetDone(int);
extern s32 Pes6Job_CopyPayloadOut(void *, void *);
extern s32 Pes6Job_SetArg(void *, s32, s32);
extern void *Pes6Job_Create(s32, void *, s32, void *);
extern char D_003E5F18[];
extern void func_00336490(void);

s32 func_003373B0(void *arg0) {
    char value;
    s32 value2;
    int value3;
    s32 value4;
    void *entry;
    int value5;
    void *entry2;
    void *entry3;
    s32 value6;
    entry = *((void **)(0x40 + ((s8 *)arg0)));
    value2 = func_00333600(6);
    value4 = func_00333600(5) | value2;
    value5 = (*((u8 *)(((s8 *)entry) + 8))) | value4;
    value3 = !value5;
    if (value3) {
        return 0;
    }
    value = 1;
    if ((value6 = value4) != 0) {
        entry3 = Pes6Job_Create(0x80000024, (void *)func_00336490, 3, (void *)D_003E5F18);
        entry2 = entry3;
        Pes6Job_SetArg(entry3, 3, 1);
        Pes6Job_CopyPayloadOut(entry2, arg0);
    }
    Pes6Job_SetDone((s32)arg0);
    return value;
}
