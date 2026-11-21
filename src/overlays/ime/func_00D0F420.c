/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D5A10(s32);
extern s32 Pes6File_AllChannelsIdle(void);
s32 func_00842950(s32);
s32 func_00D0F680(s32);
s32 func_00D12AF0(s32, s32);
s32 func_00D13000(void *);
extern char D_00D376D8[];
extern char D_00D376E8[];
extern char D_00D376F0[];

s32 func_00D0F420(void) {
    s32 value;
    void *entry;

    if (Pes6File_AllChannelsIdle() == 1) {
        entry = func_001D5A10(0x103A1);
        if (entry == 0) {
            (*(s32 *)D_00D376D8) = 0;
            return 1;
        } else {
            func_00842950(1);
            value = func_00D13000(entry);
            (*(s32 *)D_00D376F0) = value;
            if (value == 0) {
                (*(s32 *)D_00D376D8) = 0;
                return 1;
            }
            (*(s32 *)D_00D376E8) = 1;
            func_00D12AF0(value, 1);
            func_00D0F680(0);
            return 1;
        }
    } else {
        return 0;
    }
}
