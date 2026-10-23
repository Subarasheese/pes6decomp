/* compiler: mwcc-3.0.1b210 */
extern char D_005EFF40[];
extern char D_003E1390[];
extern void *memset(void *, int, unsigned int);
extern void func_001BC300(void);
extern void func_001BC3D0(int, int, int, int);

void func_0030CFA0(void) {
    int index;
    int *entry;
    memset(D_005EFF40, 0, 8);
    func_001BC300();
    entry = (int *)D_003E1390;
    for (index = 0; (unsigned int)index < 12; ++index, entry += 4) {
        func_001BC3D0(0, entry[1], 2, entry[0]);
        func_001BC3D0(0, entry[1], entry[2], entry[0]);
    }
}
