//https://codeforces.com/problemset/problem/6/A
#include<stdio.h>
bool triangle(int x, int y, int z){
    return ((x + y > z) && (y + z > x) && (z + x > y));
}

bool segment(int x, int y, int z){
    return ((x + y == z) || (y + z == x) || (z + x == y));
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(triangle(a, b, c) || triangle(b, c, d) || triangle(c, d, a) || triangle(b, a, d)) printf("TRIANGLE\n");
    else if(segment(a, b, c) || segment(b, c, d) || segment(c, d, a) || segment(b, a, d)) printf("SEGMENT\n");
    else printf("IMPOSSIBLE\n");
}
