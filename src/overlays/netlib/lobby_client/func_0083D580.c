/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00842650(void);
extern s32 func_0082C2A0(void);
extern s32 func_0082C8E0(s32, s32);
extern s32 func_0082CA50(s32, s32);
extern s32 func_0082C690(s32, s32);
extern void *memset(void *, int, unsigned int);
extern s32 func_00842970(s8);
extern s32 func_008429F0(s64);

int func_0083D580(void) {
    int *arg0;
    int value;

    arg0 = func_00842650();
    value = func_0082C2A0();
    func_0082C8E0(0x43, 0);
    func_0082CA50(0x45, 0);
    func_0082C690(0x43, 0);
    func_0082C8E0(0x44, 0);
    func_0082CA50(0x46, 0);
    func_0082C690(0x44, 0);
    if (!((arg0 != (int *)0x0) && (value != 0))) {
        return 0;
    }
    *arg0 = 1;
    memset(arg0, 0, 0x14);
    func_00842970('\x01');
    func_008429F0(1);
    return 0;
}
