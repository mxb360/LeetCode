/* 1114. 按序打印
 * 我们提供了一个类：
 * 
 * public class Foo {
 *   public void one() { print("one"); }
 *   public void two() { print("two"); }
 *   public void three() { print("three"); }
 * }
 * 三个不同的线程将会共用一个 Foo 实例。
 * 
 * 线程 A 将会调用 one() 方法
 * 线程 B 将会调用 two() 方法
 * 线程 C 将会调用 three() 方法
 * 请设计修改程序，以确保 two() 方法在 one() 方法之后被执行，three() 方法在 two() 方法之后被执行。
 */
 
typedef struct {
    // User defined data may be declared here.
    volatile int flag;
    
} Foo;

Foo* fooCreate() {
    Foo* obj = (Foo*) malloc(sizeof(Foo));
    obj->flag = 0;
    
    // Initialize user defined data here.
    
    return obj;
}

void first(Foo* obj) {
  
    // printFirst() outputs "first". Do not change or remove this line.
    printFirst();
    obj->flag = 1;
}

void second(Foo* obj) {
    while (obj->flag != 1);
    // printSecond() outputs "second". Do not change or remove this line.
    printSecond();
    obj->flag = 2;
}

void third(Foo* obj) {
    while (obj->flag != 2);
    // printThird() outputs "third". Do not change or remove this line.
    printThird();
    obj->flag = 3;
}

void fooFree(Foo* obj) {
    // User defined data may be cleaned up here.
    free(obj);
}
