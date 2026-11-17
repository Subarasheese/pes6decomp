/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { f32 f[9]; } Ent;
typedef struct { u8 pad0; u8 pad1; u8 lo : 7; u8 hi : 1; u8 pad3; f32 f[8]; } EntB;

extern s32 func_00210DF0(void);
extern s32 func_00230410(void);
extern s32 func_0094C7B0(void);
extern s32 func_00224A80(s32, s32);
extern Ent *func_00970870(s32);
extern Ent *func_00222140(s32, s32, s32);
extern void func_0023D190(s32, Ent *);

void func_0023CFE0(s32 a0, s32 a1, s32 a2) {
    Ent arr[11];
    if (func_00210DF0() == 2 && func_00230410() == 1 && func_0094C7B0() != 0xE) {
        s32 i;
        s32 s = (u16)a1;
        Ent *d = arr;
        for (i = 0; i < 11; i++, d++) {
            Ent *p = func_00970870((u16)func_00224A80(s, (u8)i));
            if (p == 0) ((EntB *)d)->lo = 0;
            else *d = *p;
        }
    } else {
        s32 s = (u16)a1;
        s32 i;
        Ent *d = arr;
        for (i = 0; i < 11; i++, d++) {
            *d = *func_00222140(s, (u8)i, a2);
        }
    }
    func_0023D190(a0, arr);
}
