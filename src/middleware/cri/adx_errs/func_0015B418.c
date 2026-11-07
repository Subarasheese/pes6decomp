/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_errs.c). */
typedef unsigned int size_t;
typedef char Sint8;
void* memset(void* s, int c, size_t n);
extern void (*D_00378088)(void*, Sint8*);
extern void* D_0037808C;
extern char D_00378090[0x100];
void func_0015B418() {
    memset(&D_00378090, 0, sizeof(D_00378090));
    D_00378088 = 0;
    D_0037808C = 0;
}
#pragma divbyzerocheck
