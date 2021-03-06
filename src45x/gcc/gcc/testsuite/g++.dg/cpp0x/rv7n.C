// I, Howard Hinnant, hereby place this code in the public domain.

// Test overload resolution among reference types

// { dg-do compile }
// { dg-options "-std=c++0x" }

template <bool> struct sa;
template <> struct sa<true> {};

struct one   {char x[1];};
struct two   {char x[2];};
struct three {char x[3];};
struct four  {char x[4];};
struct five  {char x[5];};
struct six   {char x[6];};
struct seven {char x[7];};
struct eight {char x[8];};

struct A
{
    A();
    A(const volatile A&&);
};

               A    source();
const          A  c_source();
      volatile A  v_source();
const volatile A cv_source();

// 7 at a time

one   sink_7_1234567(               A&);  // { dg-message "candidates" }
two   sink_7_1234567(const          A&);  // { dg-message "note" }
three sink_7_1234567(volatile       A&);  // { dg-message "note" }
four  sink_7_1234567(const volatile A&);  // { dg-message "note" }
five  sink_7_1234567(               A&&);  // { dg-message "note" }
six   sink_7_1234567(const          A&&);  // { dg-message "note" }
seven sink_7_1234567(volatile       A&&);  // { dg-message "note" }

int test7_1234567()
{
                   A a;
    const          A ca = a;
          volatile A va;
    const volatile A cva = a;
    sink_7_1234567(cv_source());  // { dg-error "no match" }
    return 0;
}

one   sink_7_1235678(               A&);
two   sink_7_1235678(const          A&);
three sink_7_1235678(volatile       A&);
five  sink_7_1235678(               A&&);
six   sink_7_1235678(const          A&&);
seven sink_7_1235678(volatile       A&&);
eight sink_7_1235678(const volatile A&&); // { dg-message "" }

int test7_1235678()
{
                   A a;
    const          A ca = a;
          volatile A va;
    const volatile A cva = a;
    sink_7_1235678(cva);	// { dg-error "lvalue" }
    return 0;
}

two   sink_7_2345678(const          A&);  // { dg-message "candidates" }
three sink_7_2345678(volatile       A&);  // { dg-message "note" }
four  sink_7_2345678(const volatile A&);  // { dg-message "note" }
five  sink_7_2345678(               A&&);  // { dg-message "note" }
six   sink_7_2345678(const          A&&);  // { dg-message "note" }
seven sink_7_2345678(volatile       A&&);  // { dg-message "note" }
eight sink_7_2345678(const volatile A&&);  // { dg-message "note" }

int test7_2345678()
{
                   A a;
    const          A ca = a;
          volatile A va;
    const volatile A cva = a;
    sink_7_2345678(a);  // { dg-error "ambiguous" }
    return 0;
}

one   sink_7_1234678(               A&);
two   sink_7_1234678(const          A&);  // { dg-message "candidates" }
three sink_7_1234678(volatile       A&);
four  sink_7_1234678(const volatile A&);
six   sink_7_1234678(const          A&&);  // { dg-message "note" }
seven sink_7_1234678(volatile       A&&);  // { dg-message "note" }
eight sink_7_1234678(const volatile A&&);  // { dg-message "note" }

int test7_1234678()
{
                   A a;
    const          A ca = a;
          volatile A va;
    const volatile A cva = a;
    sink_7_1234678(source());  // { dg-error "ambiguous" }
    return 0;
}

int main()
{
    return test7_2345678() + test7_1234678();
}
