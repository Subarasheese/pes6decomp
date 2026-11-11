/* compiler: mwcc-3.0.1b151 */
extern char D_00520248[];
extern void Pes6Heap_Free(void *);
void func_001930E0(void) {
    if (*(void **)D_00520248) {
        Pes6Heap_Free(*(void **)D_00520248);
        *(void **)D_00520248 = 0;
    }
}
