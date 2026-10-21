/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
typedef char Char8;
extern void (*D_003873EC)(void*, const Char8*, void*);
extern void* D_003873F0;
void func_00170400(void* obj, const Char8* msg) {
    if (D_003873EC != 0) {
        D_003873EC(D_003873F0, msg, obj);
    }
}