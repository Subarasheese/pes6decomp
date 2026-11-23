/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_00154540(void);
extern void Pes6Process_Start(void *);
extern void *Pes6Process_Create(s32 (*initialize)(void), s32 (*update)(void), s32 (*finish)(void),
                                s32 size, void *context, const char *label);
extern s32 func_008FC5F0(void);
extern s16 D_003AE974[];
extern s8 D_003AE982[];
extern s8 D_003AE983[];
extern void *D_003AE988[];
extern s32 D_003AE994[];
extern s8 D_00591DB5[];
extern s8 D_00591DB6[];
extern char D_0088A6F0[];
extern s32 func_0087ED10(void);
extern s32 func_0087EE50(void);
extern s32 func_0087EF00(void);
void *func_0087F090(void) {
    void *process;
    if (D_003AE988[0] == 0) {
        process =
            Pes6Process_Create(&func_0087EF00, &func_0087EE50, &func_0087ED10, 0, 0, D_0088A6F0);
        D_003AE988[0] = process;
        Pes6Process_Start(process);
        D_00591DB5[0] = 1;
        D_003AE982[0] = 0;
        D_003AE983[0] = 1;
        D_003AE994[0] = func_00154540() & 0xFF;
        D_00591DB6[0] = 0;
        D_003AE974[0] = 0;
        func_008FC5F0();
    }
    return D_003AE988[0];
}
