#include <iostream>
using namespace std;
int main(void)
{
int a,b, *ptr1, *ptr2;
a=4; b=3;
ptr1 = &a;
ptr2 = ptr1;
*ptr2 = *ptr1 + 3;
b = b * (*ptr1);
(*ptr2)++;
ptr1 = &b;
cout<< *ptr1<<" "<<*ptr2<<"\n"<<a<<" "<<b;
return 0;
}
/*
a: 4, 0x61ff04, 8;
b: 3, soma 21,++ 8,0x61ff00;
ptr1:&a--> 0x61ff04,* 4,&ptr1 0x61ff00,7, soma 21;
ptr2:ptr1--> 0x61ff04,* 4,&ptr2 0x61ff00, soma 7,8;
*/