extern void func_001E5970();
void func_001F1510(int a0) {
    int v3;
    int v2;
    int v4;
    v3 = *( int *)((char *)a0 + 0x1c);
    v2 = *( int *)((char *)a0 + 0x48);
    v3 = *( int *)((char *)v3 + 0x1c);
    v2 = *( int *)((char *)v2 + 0x34);
    *( int *)((char *)v2 + 0x1c) = v3;
    v4 = *( int *)((char *)a0 + 0x48);
    func_001E5970(v4);
}
