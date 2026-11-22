/* compiler: ee-gcc-2.9-G0 */
/* SPDX-License-Identifier: GPL-3.0-or-later */
/* Adapted from OpenThievius/sly2-decomp, src/sdk/fun_002522c0.c. See THIRD_PARTY.md. */
#include "types.h"
typedef struct Unit {
    char pad0[0x828];
    int field828;
    u32 field82C;
    char pad830[0x18];
    int field848;
    int field84C;
} Unit;
extern long func_008F8578(Unit *unit);
extern void func_008F8908(void);
void func_008F8870(Unit *unit, u32 flags) {
    func_008F8908();
    flags |= 0x40000000;
    *(volatile u32 *)0x10002000 = flags;
    flags &= 0xF0000000;
    unit->field82C = flags;
    if (flags == 0x20000000 || flags == 0x30000000 || flags == 0x40000000)
        unit->field828 = 0;
    else
        unit->field828 = 1;
    unit->field848 = func_008F8578(unit);
    unit->field84C = 0x20;
}
