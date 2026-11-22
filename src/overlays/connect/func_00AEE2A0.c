/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001B66C0(s32);
extern void func_001EDA30(void *, s32);
extern void *func_00AEC2B0(void);
extern void *D_00B02B90[];

void func_00AEE2A0(void) {
    void *connection;

    connection = D_00B02B90[0];
    if (connection == 0) {
        connection = func_00AEC2B0();
    }
    func_001EDA30(connection, 1);
    D_00B02B90[0] = connection;
    if (connection != 0) {
        func_001B66C0(0x2C00D0);
    }
}
