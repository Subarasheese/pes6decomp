/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

/* Clears the two 0x58-byte records at D_00CCC080, stores their addresses in the table at D_00CCC070,
 * fills each record's +0xC from func_00C94420(index), then registers two callback pairs. */

s32 func_002D5410(void);
void func_00C94440(s32);
void func_001C48E8(void *, s32, s32);
s32 func_00C94420(s32);
void func_00C88EC0(s32, void *, void *);
void func_00C88DD0(s32, void *, void *);
void func_00C7F050(void);
void func_00C7F0D0(void);
void func_00C7F3B0(void);
void func_00C7F450(void);
extern s32 D_003EA870;
extern char D_00CCC070[];
extern char D_00CCC080[];

void func_00C7F4B0(void) {
    u8 *rec;
    void **slot;
    s32 i;
    s32 v;

    func_00C94440(func_002D5410());
    i = 0;
    rec = (u8 *)D_00CCC080;
    slot = (void **)D_00CCC070;
    do {
        D_003EA870 = i;
        func_001C48E8(rec, 0, 0x58);
        *slot = rec;
        v = func_00C94420(i);
        i++;
        rec += 0x58;
        slot++;
        *(s32 *)((u8 *)D_00CCC080 + D_003EA870 * 0x58 + 0xC) = v;
    } while (i < 2);
    func_00C88EC0(5, func_00C7F450, func_00C7F3B0);
    func_00C88DD0(5, func_00C7F050, func_00C7F0D0);
}
