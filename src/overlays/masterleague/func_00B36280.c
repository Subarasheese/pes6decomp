/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B36410(void);
extern void func_001D4E00(void *);
extern void func_0095A980(void);

void func_00B36280(void) {
    u32 *entry;

    entry = (u32 *)func_00B36410();
    if (entry == (u32 *)0x0) {
        return;
    }
    func_001D4E00((void *)*entry);
    func_0095A980();
}
