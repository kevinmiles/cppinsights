template<typename T>
class Foo {
public:
    Foo() = delete;
    Foo(int){}
};

int main()
{
    Foo<int> f{2};
}
