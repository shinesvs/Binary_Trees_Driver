#include<stdio.h>
#include "trees.h"

int main(){
    add('A');
    add('B');
    add('C');
    add('D');
    add('E');
    add('F');
    add('G');
    add('H');
    print_preorder();
    print_inorder();
    print_postorder();
    return 0;
}
