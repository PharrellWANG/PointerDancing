//
//  main.cpp
//  PointerPointerPPPP
//
//  Created by Pharrell_WANG on 28/11/2016.
//  Copyright © 2016 Pharrell_WANG. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int a = 1;
    //    int b = 2;
    //    int c = 3;
    
    int * d = &a;
    //    int * e = &b;
    //    int * f = &c;
    
    int ** g = &d; // pointer to pointer
    int *** h = &g;
    int **** i = &h;
    
    cout<<" a.value  = "<<a<<endl;
    cout<<" a.addre  = "<<&a<<endl<<endl;
    
    //    cout<<" b.value  = "<<b<<endl;
    //    cout<<" b.addre  = "<<&b<<endl<<endl;
    
    //    cout<<" c.value  = "<<c<<endl;
    //    cout<<" c.addre  = "<<&c<<endl;
    
    cout<<"=====type of a,b,c is (int)========"<<endl;
    cout<<"==================================="<<endl;
    
    cout<<" d.value   = "<<d<<endl;
    cout<<" d.addre   = "<<&d<<endl;
    cout<<" *d        = "<<*d<<endl<<endl;
    
    //    cout<<" e.value   = "<<e<<endl;
    //    cout<<" e.addre   = "<<&e<<endl;
    //    cout<<" *e        = "<<*e<<endl<<endl;
    
    //    cout<<" f.value   = "<<f<<endl;
    //    cout<<" f.addre   = "<<&f<<endl;
    //    cout<<" *f        = "<<*f<<endl;
    cout<<"=====type of d,e,f is (int *)======"<<endl;
    cout<<"==================================="<<endl;
    cout<<"==================================="<<endl;
    
    cout<<" g.value   = "<<g<<endl;
    cout<<" g.addre   = "<<&g<<endl;
    cout<<" *g        = "<<*g<<endl;
    cout<<" **g       = "<<**g<<endl;
    cout<<"=====type of g is (int **)======"<<endl;
    cout<<"===================================="<<endl;
    cout<<"==================================="<<endl;
    
    cout<<" h.value   = "<<h<<endl;
    cout<<" h.addre   = "<<&h<<endl;
    cout<<" *h        = "<<*h<<endl;
    cout<<" **h       = "<<**h<<endl;
    cout<<" ***h      = "<<***h<<endl;
    cout<<"=====type of h is (int ***)======"<<endl;
    cout<<"===================================="<<endl;
    cout<<"==================================="<<endl;
    
    cout<<" i.value   = "<<i<<endl;
    cout<<" i.addre   = "<<&i<<endl;
    cout<<" *i        = "<<*i<<endl;
    cout<<" **i       = "<<**i<<endl;
    cout<<" ***i      = "<<***i<<endl;
    cout<<" ****i     = "<<****i<<endl;
    cout<<"=====type of i is (int ****)======"<<endl;
    cout<<"===================================="<<endl;
    cout<<"==================================="<<endl;
    
    return 0;
}
