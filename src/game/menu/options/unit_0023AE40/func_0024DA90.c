/* compiler: mwcc-3.0.1b198 */
#include "pes6/match_pad_setup.h"

extern s32 D_003E9B2C;
extern char *strcpy(char *, const char *);
extern void *memcpy(void *, const void *, u32);
extern void *func_00245160(s32);
extern void *func_00245190(s32);
extern void *func_00221280(s32);
extern void func_00245390(void);

void func_0024DA90(void) {
    s32 i;
    for (i = 0; i < MATCH_PAD_COUNT; i++)
        if (D_0053CB60[i] == 1) {
            void *source;
            Pes6PadAssign[i].assignment = D_0053CBB0[i].assignment;
            Pes6PadAssign[i].option = D_0053CBB0[i].option;
            Pes6PadAssign[i].setting33 = D_0053CBB0[i].setting33;
            Pes6PadAssign[i].nameMode = D_0053CBB0[i].nameMode;
            strcpy(Pes6PadAssign[i].name, D_0053CBB0[i].name);
            source = func_00245160(i);
            if ((u32)(D_00591C09[0] - 1) < 2) {
                memcpy(func_00245190(i), source, 0x24);
            } else {
                memcpy(func_00221280(i), source, 0x36);
            }
        }
    func_00245390();
    if (D_003E9B2C == 1)
        for (i = 0; i < MATCH_PAD_COUNT; i++) {
            if (Pes6PadAssign[i].assignment == 0)
                Pes6PadAssign[i].assignment = 2;
        }
    func_0023EC10(&D_003E9B10, PAD_REDRAW_NAMES);
    func_0023EC10(&D_003E9B10, PAD_REDRAW_ASSIGNMENTS);
}
