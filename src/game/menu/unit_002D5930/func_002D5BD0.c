/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern int func_00151EA0(int);
extern int func_002D33C0(int);
extern void func_002D33E0(int, int, int, int);
struct EntryState {
    unsigned char unknown00;
    unsigned char enabled;
    unsigned char unknown02[0xE];
    int first[3];
    int second[3];
};
extern struct EntryState *D_003E7614;
void func_002D5BD0(void) {
    if (D_003E7614->enabled != 0 && func_002D33C0(1) == 0) {
        func_002D33E0(D_003E7614->second[func_00151EA0(3) & 0xFFFF], 1, 0, 0);
    }
}
