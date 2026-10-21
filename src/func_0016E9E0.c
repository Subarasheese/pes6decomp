/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/dvci.c). */
typedef char Char8;
extern void (*D_00386554)(void*, const Char8*, void*);
extern void* D_00386558;
void func_0016E9E0(void* obj, const Char8* msg) {
    if (D_00386554 != 0) {
        D_00386554(D_00386558, msg, obj);
    }
}