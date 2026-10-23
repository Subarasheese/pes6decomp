/* compiler: mwcc-3.0.1b151 */
extern char D_00520248[];
extern void func_00153FA0(void *);
void func_001930E0(void) {
    if (*(void **)D_00520248) {
        func_00153FA0(*(void **)D_00520248);
        *(void **)D_00520248 = 0;
    }
}
