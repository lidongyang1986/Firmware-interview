
int *a[10];		An array of ten pointers to integers
int (*a)[10];		A pointer to an array of ten integers
int (*a)(int); 		A pointer to a function that takes an integer as an argument and returns an integer
int (*a[10])(int); 	Pass an array of ten pointers to a function that take an integer argument and return an integer.


Const: https://zhidao.baidu.com/question/547293034.html
因为const int是用来保存一些全局常量的，这些常量在编译期可以改，在运行期不能改。
Const int* p; //p可变，p指向的内容不可变，
int const* p; //p可变，p指向的内容不可变。 
int* const p; //p不可变，p指向的内容可变 
const int* const p; //p和p指向的内容都不可变。

const int a; 
int const a; 			The first two means that a is a constant integer.
const int *a; 			a is a pointer to a constant integer.
int * const a; 			a is a constant pointer to a non-constant integer.
int const * a const; 	a is a constant pointer to a constant integer.
