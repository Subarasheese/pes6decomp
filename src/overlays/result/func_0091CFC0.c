/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00C74FA0(void **, s8 *);
extern void func_00C74D20(void **, s32);
extern char D_00921260[];
extern char D_0091F930[];

void func_0091CFC0(int arg0, int arg1) {
    if (arg1 == -1) {
        func_00C74FA0((void **)arg0, (s8 *)D_00921260);
        return;
    }
    func_00C74D20((void **)arg0, *(int *)(arg1 * 4 + (u32)D_0091F930));
}
