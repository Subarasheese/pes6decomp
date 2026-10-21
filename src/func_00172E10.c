/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
typedef char Char8;
extern void (*D_0038C184)(void*, const Char8*, void*);
extern void* D_0038C188;
void func_00172E10(void* obj, const Char8* msg) {
    if (D_0038C184 != 0) {
        D_0038C184(D_0038C188, msg, obj);
    }
}