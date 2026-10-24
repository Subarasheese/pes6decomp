/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    void (*init)(void);
    s32 a;
    s32 b;
} Mode;

extern Mode D_00396F90[];
extern s32 D_003E745C;
u8 func_00180570(void);
s32 func_0012AF40(s32, s32, s32);

void func_0017F7E0(void) {
    Mode *mode = &D_00396F90[func_00180570()];

    if (mode->init != NULL) {
        mode->init();
    }
    D_003E745C = func_0012AF40(1, 1, 0);
}
