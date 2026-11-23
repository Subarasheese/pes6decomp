/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern void Pes6Process_Start(void *);
extern void *Pes6Process_Create(s32 (*initialize)(void), s32 (*update)(void), s32 (*finish)(void),
                                s32 size, void *context, const char *label);
extern s16 *func_008472D0(void);
extern void *D_003AE98C[];
extern char D_0088A710[];
extern u8 D_008B14E0[];
extern s32 func_0087D610(void);
extern s32 func_0087D6F0(void);
extern s32 func_0087D870(void);
void *func_0087F000(void) {
    void *process;
    u8 current = D_008B14E0[0];
    if ((current == (*func_008472D0())) && (D_003AE98C[0] == 0)) {
        process =
            Pes6Process_Create(&func_0087D870, &func_0087D6F0, &func_0087D610, 0, 0, D_0088A710);
        D_003AE98C[0] = process;
        Pes6Process_Start(process);
    }
    return D_003AE98C[0];
}
