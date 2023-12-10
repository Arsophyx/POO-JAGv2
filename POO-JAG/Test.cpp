#include "pch.h"
#include "Test.h"


namespace POO_JAG {

    test::test(void)
    {
        InitializeComponent();

    }

    test::~test()
    {
        if (components)
        {
            delete components;
        }
    }

    void test::InitializeComponent(void)
    {
        this->SuspendLayout();
        // 
        // test
        // 


    }
}


