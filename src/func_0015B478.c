/* compiler: ee-gcc-2.96 */
#include "types.h"
extern u8 D_00378090[]; extern s32 D_00378088[]; extern s32 D_0037808C[];
s32 func_001C8590(void *, void *, s32); void func_001796E0(void *);
void func_0015B478(void *msg) { u8 *b = D_00378090; func_001C8590(b, msg, 0xFF); if (D_00378088[0] != 0) ((void (*)(s32, void *))D_00378088[0])(D_0037808C[0], b); func_001796E0(b); }
