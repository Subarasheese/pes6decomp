/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef void (*TrainingHandler)(void);
typedef struct {
    u8 reserved00[8];
    TrainingHandler callback08;
    u8 reserved0c[8];
    TrainingHandler callback14;
    u8 reserved18[8];
    s32 state;
    u8 reserved24[8];
    s32 step;
    u8 reserved30[0x38];
    TrainingHandler callback68;
    u8 reserved6c[8];
    TrainingHandler callback74;
    u8 reserved78[0x44];
    TrainingHandler callbackBC;
} TrainingHandlers;
extern TrainingHandlers *D_003EB2D4;
extern void func_00CE9A60(void), func_00CE9AC0(void), func_00CE9A00(void), func_00CE99C0(void),
    func_00CE9990(void);

void func_00CE9B20(void) {
    D_003EB2D4->callback08 = func_00CE9A60;
    D_003EB2D4->callback14 = func_00CE9AC0;
    D_003EB2D4->state = 0;
    D_003EB2D4->step = 0;
    D_003EB2D4->callback68 = func_00CE9A00;
    D_003EB2D4->callback74 = func_00CE99C0;
    D_003EB2D4->callbackBC = func_00CE9990;
}
