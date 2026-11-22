/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_00B1DE00(void);
extern void func_00971E30(void *);
extern s32 func_00957070(s32);
extern s32 func_001EDD90(s32);
extern void func_00972290(s32 *);
extern void func_008CA7A0(void **);
extern void func_001D4E00(void *);

void func_00B1CFE0(void) {
    u32 *entry;
    int *arg0;

    entry = (u32 *)func_00B1DE00();
    if (entry != (u32 *)0x0) {
        func_00971E30((void *)entry[0x20]);
        func_00957070(entry[0xb]);
        if (entry[0xe] != 0) {
            func_001EDD90(entry[0xe]);
            entry[0xe] = 0;
            arg0 = (int *)entry[0x22];
        } else {
            arg0 = (int *)entry[0x22];
        }
        func_00972290(arg0);
        func_00972290((int *)entry[0x23]);
        func_008CA7A0((void **)entry[0xc]);
        func_001D4E00((void *)*entry);
        func_001D4E00((void *)entry[0xd]);
    }
}
