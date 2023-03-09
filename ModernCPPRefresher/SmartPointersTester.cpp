#include "SmartPointersTester.h"

void SmartPointersTester::Test()
{
    // unique_ptr example
    cout << "unique_ptr example" << endl;
    unique_ptr<MyClass> uptr(new MyClass);
    uptr->SayHello();

    // shared_ptr example
    cout << "shared_ptr example" << endl;
    shared_ptr<MyClass> sptr1(new MyClass);
    shared_ptr<MyClass> sptr2 = sptr1;
    sptr1->SayHello();
    sptr2->SayHello();

    // weak_ptr example
    cout << "weak_ptr example" << endl;
    weak_ptr<MyClass> wptr = sptr1;
    if (auto sptr3 = wptr.lock()) {
        cout << "weak_ptr is still valid" << endl;
        sptr3->SayHello();
    }
    else {
        cout << "weak_ptr is expired" << endl;
    }
}
