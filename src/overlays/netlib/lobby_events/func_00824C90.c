/* compiler: mwcc-3.0.1b198-O3 */
#include "types.h"
typedef struct {
    u8 reserved[0x8d6];
    s8 phase;
} NetworkConnection;
extern NetworkConnection *func_00841140(void);
extern s32 D_008A43C0[], D_008A4398[], D_008A43A0[], D_008A43A8[], D_008A5F7C[], D_008A5F80[];
extern s8 D_008A5F7A[];
extern void func_00843AC0(void), func_00843320(void), func_00862420(s32), func_008439C0(s32, s32),
    func_00824FD0(void), func_00866040(s32), func_00822940(void), func_00822B10(void),
    func_00827880(void), func_00827690(void), func_00827510(void), func_00836F40(void);
extern u32 func_00843730(s32);
extern s32 func_008438F0(s32);
s32 func_00824C90(void) {
    NetworkConnection *connection;
    if (!D_008A43C0[0])
        return 1;
    connection = func_00841140();
    if (connection && connection->phase == 11)
        connection->phase = 1;
    func_00843AC0();
    if (D_008A5F7A[0] == 1) {
        D_008A5F80[0] = func_00843730(0) / 1000u;
        D_008A5F80[0] += D_008A5F7C[0];
    }
    func_00843320();
    if (func_008438F0(1) < 0) {
        func_00862420(D_008A4398[0]);
        func_008439C0(1, 1000);
    }
    func_00824FD0();
    D_008A43A0[0] = -150;
    D_008A43A8[0] = -150;
    if (D_008A4398[0])
        func_00866040(D_008A4398[0]);
    func_00822940();
    func_00822B10();
    func_00827880();
    func_00827690();
    func_00827510();
    func_00836F40();
    return 0;
}
