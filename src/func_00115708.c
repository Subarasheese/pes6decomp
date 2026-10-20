extern void iSignalSema();
extern char D_00374658[];
void func_00115708(int a0) {
    int v4;
    v4 = *( int *)(D_00374658);
    iSignalSema(v4);
}
