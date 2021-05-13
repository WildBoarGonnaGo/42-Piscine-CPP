class A {};
class B {};

class C {
	public:
					C(A const & _) { return ;}
		explicit	C(B const & _) { return ;}
};

void f( C const & _) {
	return ;
}

int main(void)
{
	f( A() ); //Implicit conversion OK
	f( static_cast<C>(B()) ); 	//Implicit conversion is not OK, constructor is explicit
								//But explicit conversion is OK

	return (0); 
}